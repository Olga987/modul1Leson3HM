#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
	printf("������� ����� �������");
	scanf("%d", &n);
	if (n == 1) {

		//1.	��������, ��� X �� ������ 
		//����� A ������. ����������, �������
		//����� 1 �� � Y �� ���� �� ������.

		int X = 0, A = 0, Y = 0, k = 0;

		printf("������� ����� � ��");
		scanf("%d", &X);

		printf("������� ��������� � ���");
		scanf("%d", &A);

		k = A / X;
		Y = k*X;
		printf("--------------\n");
		printf("��������� 1��=%d\n����� = %d\n", k, Y);


	}
	else if (n == 2) {

		//2.	������ �������� ��������� A�x + B = 0,
		//�������� ������ �������������� A � B 
		//(����������� A �� ����� 0).
		int A = 0, B = 0, x = 0;
		printf("������� �������� �:");
		scanf("%d", &A);
		if (A == 0)
		{
			printf("�������� �� ������ ���� ����� 0\n");

		}
		else {
			printf("������� �������� B");
			scanf("%d", &B);

			x = -B / A;

			printf("x=%d\n", x);
		}
	}
	else if (n == 3) {
		//3.	� ������ ����� ������ N ������ 
		//(N � �����). ����� ���������� ������ �����, 
		//��������� � ������ �����.

		float N = 0, m = 0;
		printf("������� ����������� ������");
		scanf("%d", &N);

		m = N / 60;
		printf("���-�� ������ �����=%d\n", m);

	}

	else if (n == 4) {
		/*
		4.	�������� ������� ���������� V1 ��/�,
		������� � V2 ��/�, ���������� ����� ���� S ��.
		���������� ���������� ����� ���� ����� T �����,
		���� ���������� ������������� �������� 
		��������� ���� �����. ������ ���������� 
		����� ������ �������� ���������� ���������� � 
		������ ����, ������������ ������������; 
		����� ���� = ����� � ��������� ��������
		*/
		int v1 = 0, v2 = 0, t = 0, s1 = 0, s2 = 0,r=0;

		printf("������� �������� ������� ���������� � ��/�:");
		scanf("%d", &v1);

		printf("������� �������� ������� ���������� � ��/�:");
		scanf("%d", &v2);

		printf("������� ���������� ����� ������������ � ��:");
		scanf("%d", &s1);

		printf("������� ����� �������� ��������� ���� ����� � �����:");
		scanf("%d", &t);

		s2 = t*(v1 + v2);
		r = s1 - s2;

		printf("����� ���� ����������� ��������=%d��\n���������� ���������� ����� ������������ ��������=%d��\n", s2, r);

        }
	else if (n == 5) {

		//5.	���� ����� ������ �������������� ���������������. ����� ��� ����� � ������� ������� �����������




	}

}