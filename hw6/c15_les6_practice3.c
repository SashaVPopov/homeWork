/*
 * ep_c15_les6_practice3.c
 * ����� �� ����������� 
 * ��������� ������� ���������� �������, ������� ����������, ����� ��, ��� � �������� ����� ��� ����� ����� �� �����������.
 * ��������� ������ ������� ������ ������.
 * int grow_up(int n)
 * ������ ��� �����: ���� ����� �� ������������� �����
 * ������ �� �����: ������ YES ��� NO.
 */
#include <stdio.h> 
#include <locale.h> 

 
int grow_up(int a)
{
	for (; a>0 ;a/=10)
	{
		int i = a%10;
		int j = (a/10)%10;
		//printf ("%d %d\n",i,j);
		if (i <= j)
		{
			//printf ("NO\n");
			return 0;
		}
	}
	//printf ("YES\n");
	return 1;
}
int main()
{
	setlocale (LC_ALL, "Rus");
	printf("������� ���� ����� �����: ");
	int n;
	scanf("%d", &n);
	grow_up(n) ? printf("YES") : printf("NO");
	return 0;
}
