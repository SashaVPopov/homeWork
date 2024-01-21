/*
 * ep_c7_demo2.c
 * ��������� ����� N � ������� ��������� P
 * ��������� �������, ������� ��������� ����� N �� ���������� ������� ��������� � P-����� ������� ���������.
 * ������ ��� �����: ��� ����� �����. N >= 0 � 2 <= P <= 9.
 * ������ �� �����: ���� ����� �����.
 */
#include <stdio.h> 
#include <locale.h>  
int notation (int n, int p);
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int n,p;
	printf("������� ��������������� ����� � ������� ��������� (�� 2 �� 9)  ��� �������� ����� ������: ");
	scanf ("%d%d", &n, &p);
	printf("\n����� %d � ������� ��������� %d ����� ��� : %d \n",n,p,notation(n,p));
	return 0;
}
int notation (int n, int p)
{
	int remainder;
	int exponent = 1;
	int res=0;
	for (; n>0; n/=p)
	{
		remainder = n%p;
		res += remainder*exponent;
		exponent *= 10;
		//printf ("remaind=%d res=%d; ",remainder,res);
	}
	return res;
}

