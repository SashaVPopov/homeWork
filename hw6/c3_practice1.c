/*
 * ep_c3_practice1.c 
 * ������� �������������� �����
 * �������� �������, ������� ���������� ������� �������������� ���� ���������� �� ���������� (����������).
 * int middle (int a, int b)
 * ������ ��� �����: ��� ����� ��������������� �����.
 * ������ �� �����: ���� ����� �����.
 */
#include <stdio.h> // ���������� � �������� ����� ����������� ������������ ���� "stdio.h", ������� �������� ����������� ������� �����/������
#include <locale.h> // ���������� � �������� ����� ����������� ������������ ���� "local.h", ������� �������� ����������� ������� ����������� ���� 
int middle (int a, int b)
{
	return ((a+b)/2);
}
int main(int argc, char **argv)
{
	setlocale (LC_ALL, "Rus");
	int a, b;
	printf("������� ��� ����� ��������������� ����� : \n");
	scanf ("%d%d", &a, &b);
	printf("C������ �������������� ����� �����: %d \n",middle(a,b));
	return 0;
}

