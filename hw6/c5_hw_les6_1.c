/*
 * ep_c5_hw_les6_1.c 
 * ����� �� 1 �� N
 * ��������� �������, ������� ���������� ����� ���� ����� �� 1 �� N � �������� ������ �� �������������.
 * ������ ��� �����: ���� ����� ������������� ����� N.
 * ������ �� �����: ���� ����� ����� - ����� ����� �� 1 �� N.
 */
#include <stdio.h> // ���������� � �������� ����� ����������� ������������ ���� "stdio.h", ������� �������� ����������� ������� �����/������
#include <locale.h> // ���������� � �������� ����� ����������� ������������ ���� "local.h", ������� �������� ����������� ������� ����������� ���� 
int sum_N (int n)
{
	int sum = 0;
	for (int i = 0; i <=n; i++)
	{
		sum+=i;
		//printf ("n=%d sum=%d",i,sum);
	}
	return sum;
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("������� �����, �� ������� ����� ��������� �����: ");
	scanf ("%d", &a);
	printf("����� ����� �� ���������� �����: %d \n",sum_N (a));
	return 0;
}
