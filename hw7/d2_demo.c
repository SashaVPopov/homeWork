/*
 * ep_d2_demo.c 
 * ����� ����� �� 1 �� N
 * ��������� ����������� �������, ������� ���������� ����� ���� ����� �� 1 �� N.
 * ������ ��� �����: ���� ����������� �����
 * ������ �� �����: ����� ����� �� 1 �� ���������� �����.
 */
#include <stdio.h> 
#include <locale.h> 
int recurSumNum (int num)
{
	return (num==1)?1:num+recurSumNum(num-1);
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("������� ����� �����: ");
	scanf ("%d", &a); 
	printf ("����� ����� �� 1 �� ���������� ����� �����: %d ",recurSumNum(a)); 
	return 0;
}

