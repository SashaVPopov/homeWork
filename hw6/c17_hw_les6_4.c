/*
 * ep_c17_hw_les6_4.c
 * ����� ���� ����� ������������
 * ��������� ���������� �������, ������� ����������, ����� ��, ��� � ������ ����� ����� ���� ����� ������������.
 * int is_happy_number(int n)
 * ������ ��� �����: ���� ����� �� ������������� �����
 * ������ �� �����: ������ YES ��� NO.
 */
#include <stdio.h> 
#include <locale.h> 

 
int is_happy_number(int a)
{
	int sum = 0;
	int mul = 1;
	for (; a>0 ;a/=10)
	{
		int i = a%10;
		sum+=i;
		mul*=i;
	}
	printf("sum=%d\n",sum );
	printf("mul=%d\n",mul);
	return (sum == mul);
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	printf("������� ���� ����� �����: ");
	int n;
	scanf("%d", &n);
	(is_happy_number(n)) ? printf("YES") : printf("NO");
	return 0;
}
