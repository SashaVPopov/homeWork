/*
 * ep_d4_hw_les7_1.c 
 * � ������ �������
 * ���� ����������� ����� N. �������� ��� ��� ����� �� �����, � ������ �������, �������� �� ��������� ��� ������ ��������.
 * ���������� ����������� ����������� �������.
 * void print_num(int num)
 * ������ ��� �����: ���� ��������������� �����
 * ������ �� �����: ������������������ ���� ���������� ����� � �������� ������� ����� ������.
 */
#include <stdio.h> 
#include <locale.h> 
void print_num (int num)
{
	if (num>0&&num>9)
	{
		print_num(num/10);
		//printf ("%d \n",num);
	}
	printf ("%d ",num%10);
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("������� ����� �����:\n");
	scanf ("%d", &a); 
	 print_num (a);
	return 0;
}

