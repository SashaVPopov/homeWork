/*
 * ep_d20_hw_les7_7.c 
 * �������� � �������
 * �������� ����������� ������� ���������� ����� n � ������� p.
 * int recurs_power (int n, int p)
 * ������ ��� �����: ��� ����� ������������� ����� ����� ������
 * ������ �� �����: ���� ����� ����� n � ������� p.
 */
#include <stdio.h> 
#include <locale.h> 
int recurs_power (int n, int p)
{
	int res=1;
	if (p)
	{
		printf("n=%d p=%d \n",n,p);
		res=n*recurs_power (n, p-1);
	} return res;
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int n,p;
	printf("������� ����� �����:\n");
	scanf ("%d%d", &n,&p); 
	printf("%d",recurs_power (n,p));
	return 0;
}

