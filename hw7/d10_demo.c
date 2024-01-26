/*
 * ep_d10_demo.c 
 * �������� �� ��������
 * ���� ����������� ����� n>=1. ���������, �������� �� ���, �������. 
 * ��������� ������ ������� ����� YES, ���� ����� ������� ��� NO � ��������� ������.
 * ���������� ��������� ����������� ������� � ������������ ��.
 * int is_prime (int n, int divider)
 * ������ ��� �����: ���� ����������� �����
 * ������ �� �����: YES ��� NO.
 */
#include <stdio.h> 
#include <locale.h> 
int is_prime (int n, int divider)
{
	if (n==divider)
		return 1;
	if ((n>1)&&(n%divider != 0))
		return is_prime(n,divider+1);
	else 
		return 0;
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("������� ����� �����: ");
	scanf ("%d", &a); 
	is_prime(a,2) ? printf ("YES"):printf ("NO"); 
	return 0;
}

