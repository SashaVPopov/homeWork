/*
 * ep_c2_demo.c 
 * �������� � �������
 * ��������� ������� "���������� ����� N � ������� P. int power(n, p)" � �������� ������ �� �������������.
 * ������ ��� �����: ��� ����� �����:N �� ������ �� ������������� 1000 � P > 0
 * ������ �� �����: ���� ����� �����.
 */
#include <stdio.h> // ���������� � �������� ����� ����������� ������������ ���� "stdio.h", ������� �������� ����������� ������� �����/������
#include <locale.h> // ���������� � �������� ����� ����������� ������������ ���� "local.h", ������� �������� ����������� ������� ����������� ���� 
int power (int n, int p)
{
	int res = 1;
	for (int i = 1; i <= p; i++)
	{
		res*=n;
	}
	return res;
}
int main(int argc, char **argv)
{
	setlocale (LC_ALL, "Rus");
	int x,y;
	printf("������� ����� ����� (�� ������ 1000) ������� ����� �������� � �������: ");
	scanf ("%d", &x);
	printf("������� � ����� ������� ����� �������� (����� ����� ������ 0): ");
	scanf ("%d", &y);
	printf ("����� %d � ������� %d �����: %d \n",x,y,power(x,y));  
	return 0;
}

