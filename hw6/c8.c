/*
 * ep_c8.c
 * �������� �������
 * ��������� �������, ������� ��������� ��������� �������� ����� � ���������. � �������� ������ �� �������������
 * ������ ��� �����: ������ ��������� �� ���������� ����, �������� � �������. � ����� ������ ������ �����.
 * ������ �� �����: �������� ������ � ������� ��������� ���������� ����� �������� ����������.
 */
#include <stdio.h> 
#include <locale.h>
char upperCase (char a);
int main(void)
{
	setlocale (LC_ALL, "Rus");
	char input;
	while (1)
	{
		scanf ("%c", &input);
		if (input == '.')
			break;
		printf("%c",upperCase(input));
	
	}
	return 0;
}
char upperCase (char a)
{
	return ((a>='a')&&(a<='z'))? (a - 32):a;
}

