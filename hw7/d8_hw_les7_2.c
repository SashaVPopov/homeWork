/*
 * ep_d8_hw_les7_2.c 
 * �� A �� B
 * ��������� ����������� �������, ������� ������� ��� ����� �� � �� � ������������, � ������� �����������, ���� A<B, ��� � ������� �������� � ��������� ������.
 * ������ ��� �����: ��� ����� ����� ����� ������
 * ������ �� �����: ������������������ ����� ����� ����� ������.
 */
#include <stdio.h> 
#include <locale.h> 
void print_num (int a, int b)
{
	if (a>b)
	{
		printf ("%d ",a);
		//printf ("a=%d ",a);
		print_num (a-1,b);
	}
	if (a<b)
	{
		print_num (a,b-1);
		printf ("%d ",b);
		//printf ("b=%d ",b);
	}
	if (a==b)
		printf("%d ",a);
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a,b;
	printf("������� ����� �����:");
	scanf ("%d%d", &a,&b); 
	 print_num (a,b);
	return 0;
}

