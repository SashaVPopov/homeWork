/*
 * ep_d3_practice.c 
 * � �������� �������
 * ���� ����� ��������������� �����. ������� ��� ��� ����� �� �����, � �������� �������, �������� �� ��������� ��� ������ ��������.
 * ������ ��� �����: ���� ��������������� �����
 * ������ �� �����: ������������������ ���� ���������� ����� � �������� ������� ����� ������.
 */
#include <stdio.h> 
#include <locale.h> 
void recursNum (int num)
{
	if (num>0)
	{
		printf ("%d ",num%10);
		recursNum(num/10);
	}
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("������� ����� �����: ");
	scanf ("%d", &a); 
	 recursNum (a);
	return 0;
}

