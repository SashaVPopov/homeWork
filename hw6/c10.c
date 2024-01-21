/*
 * ep_c10.c 
 * ������� ���������
 * ��������� �������, ������ ���� ������� ���������� �����. ������������ �� ��� ������ ���� ������� ���������� �����.
 * void print_simple(int n)
 * ������ ��� �����: ����� ������������� �����.
 * ������ �� �����: ������������������ ���� ������� ���������� ������� ����� � �������s.
 */
#include <stdio.h> 
#include <locale.h> 
void printSimple (int n)
{
	int div = 2;
	while (n!=1)
	{
		if (n%div == 0)
		{
			printf ("%d", div);
			n/=div;
		}
		else
		{
			div+=1;
		}
	}
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("������� ����� ��� ������ ���� ��� ������� ����������: ");
	scanf ("%d", &a);
	printSimple (a);
	return 0;
}

