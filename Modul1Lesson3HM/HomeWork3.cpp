#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<cmath>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
	printf("������� ����� �������: ");
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
		printf("������� �������� �: ");
		scanf("%d", &A);
		if (A == 0)
		{
			printf("�������� �� ������ ���� ����� 0\n");

		}
		else {
			printf("������� �������� B: ");
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
		printf("������� ����������� ������: ");
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
		int v1 = 0, v2 = 0, t = 0, s1 = 0, s2 = 0, r = 0;

		printf("������� �������� ������� ���������� � ��/�: ");
		scanf("%d", &v1);

		printf("������� �������� ������� ���������� � ��/�: ");
		scanf("%d", &v2);

		printf("������� ���������� ����� ������������ � ��: ");
		scanf("%d", &s1);

		printf("������� ����� �������� ��������� ���� ����� � �����: ");
		scanf("%d", &t);

		s2 = t*(v1 + v2);
		r = s1 - s2;

		printf("����� ���� ����������� ��������=%d��\n���������� ���������� ����� ������������ ��������=%d��\n", s2, r);

	}
	else if (n == 5) {

		//5.	���� ����� ������ �������������� ���������������. ����� ��� ����� � ������� ������� �����������


		int a = 0, b = 0, c = 0, s = 0, v = 0;

		printf("������� �������� �: ");
		scanf("%d", &a);

		printf("������� �������� b: ");
		scanf("%d", &b);

		printf("������� �������� �: ");
		scanf("%d", &c);

		v = a*b*c;
		s = 2 * ((a*b) + (a*c) + (b*c));

		printf("v=%d\ns=%d\n", v, s);

	}
	else if (n == 6) {

		//6.	�������� ���������� �� ��������� ���� �����. ��������� ��������� ���������� ���������� ����� ����.

		float x1 = 0, x2 = 0, y1 = 0, y2 = 0, r = 0;
		printf("������� �������� x1:");
		scanf("%f", &x1);

		printf("������� �������� x2:");
		scanf("%f", &x2);

		printf("������� �������� y1:");
		scanf("%f", &y1);

		printf("������� �������� y2:");
		scanf("%f", &y2);

		r = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));

		printf("���������� = %f\n", r);





	}

	else if (n == 7) {

		//7.	�������� ����� � ����� ����. ���������� ��������� ��������� ����� ����

		float m = 0, v = 0, p = 0;

		printf("������� ����� ����: ");
		scanf("%f", &m);

		printf("������� ����� ����: ");
		scanf("%f", &v);

		p = m / v;

		printf("P=%f\n", p);

	}
	else if (n == 8) {

		int a = 0;

		printf("������� ����� ������� 1 ��� 2: ");
		scanf("%d", &a);


		if (a == 1) {

			//8.	��������� ���������:a.���������� �������� ������� z = x3 � 2.5xy + 1.87x2 + 1 
			//��� ����� ��������� � � y;

			float x = 0, y = 0, z = 0;

			printf("������� �������� x: ");
			scanf("%f", &x);

			printf("������� �������� y: ");
			scanf("%f", &y);

			z = (x*x*x) - (2.5*x*y) + (1.87*(x*x)) + 1;

			printf("Z=%f\n", z);

		}
		else if (a == 2) {

			//b.	���������� �������� ������� x= 3.56 a+b3-5.8b2+3.8a-1.5 ��� ����� ��������� a � b.

			float a = 0, b = 0, x = 0;

			printf("������� �������� a: ");
			scanf("%f", &a);

			printf("������� �������� b: ");
			scanf("%f", &b);

			x = (3.56*(a + b)*(a + b)*(a + b)) - (5.8*(b*b)) + (3.8*a) - 1.5;

			printf("X=%f\n", x);
		}

	}
	else if (n == 9) {

		//9.	���� ������� ��������. ����� ��� ��������

		float a = 0, p = 0;

		printf("������� ������ ������� ��������: ");
		scanf("%f", &a);

		p = a * 4;

		printf("%f\n", p);
	}
	else if (n == 10) {

		//10.	��� ������ ����������. ����� �� �������

		float r = 0, d = 0;

		printf("������� ������ ����������: ");
		scanf("%f", &r);

		d = r * 2;

		printf("%f\n", d);
	}



}