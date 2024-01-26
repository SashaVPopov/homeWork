/*
 * ep_d19_hw_les7_6.c 
 * C������ ��� ����������� ������ a
 * ���� ������ �� ���������� ��������, �������� � ������ ����������. � ����� ������ ������ �����.
 * ���������� ����������� ����������� �������, ������� ��������� ������ ������ �� ������������ ������ ����� � ���������� ����� ����� - ���������� �������� 'a' � ������ ������ .
 * int acounter(void);
 * ������ ��� �����: ������ �� ���������� ���� � ������ ����������. � ����� ������ ������ "."..
 * ������ �� �����: ���� ����� ����� - ���������� �������� 'a'.
 */
#include <stdio.h> 
#include <locale.h> 
int acounter(void)
{
	char c;
	static int count=0;
	if ((c=getchar())!= '.')
	{
		acounter();
	}
	if (c=='a')
	{
		++count;
	}
	return count;
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	printf("������� ������ �� ���������� ���� � ������ ����������. � ����� ������ ������c \".\":\n");
	printf ("� ������ %d �������� 'a' \n",acounter());
	return 0;
}

