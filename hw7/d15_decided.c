/*
 * ep_d15_decided.c 
 * ����� ����������
 * ���� ������������������ ��������� ����� �����, ������������� ������ 0. ���� � ������������������ �� ������.
 * ���������� ���������� �������� ����� � ���� ������������������.
 * ���������� ����������� ����������� �������.
 * int max_find (int max)
 * ������ ��� �����: ������������������ ��������� ����� �����. � ����� 0.
 * ������ �� �����: ���� ����� - �������� ������������������.
 */
#include <stdio.h> 
#include <locale.h> 
int max_find (int max)
{
	int input;
	scanf ("%d", &input);
	if (input == 0)
	{
		return max;
	}
	if ((max == 0)||(input > max))
	{
		max = input;
	}
	return max_find(max);
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	printf("������� ������������������ ��������� ����� ����� ����� ������:\n");
	printf("%d", max_find(0));
	return 0;
}

