/*
 * ep_c9_les6_practice2.c 
 * ���������
 * ��������� ������� ���������� N!. ������������ �� ��� ���������� ���������� int factorial(int n)
 * ������ ��� �����: ����� ������������� ����� �� ������ 20.
 * ������ �� �����: ����� ������������� �����.
 */
#include <stdio.h> 
#include <locale.h> 
int factorial (int n)
{
	int f=1;
	for (int i = 1; i <=n; i++)
	{
		f*=i;
		printf ("i=%d f=%d\n",i,f);
	}
	return f;
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("������� ������������� ����� �� ����� 20: ");
	scanf ("%d", &a);
	printf("��������� ����� %d �����: %d\n",a,factorial (a));
	return 0;
}

