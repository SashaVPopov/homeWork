/*
 * ep_d11_hw_les7_3.c 
 * ���������� "1"
 * ���� ����������� ����� N. ��������� ���������� "1" � ��� �������� ������ �����.
 * ������ ��� �����: ����� �� ������������� ����� � ���������� ������� ���������
 * ������ �� �����: ����� ����� - ���������� ������ � �������� ������ �����.
 */
#include <stdio.h> 
#include <locale.h> 
int sum_bin (int n)
{
	static int sum=0;
	if (n>1)
	{
		sum_bin (n/2);
		//printf ("n=%d \n",n);
	}
	sum += n%2;
	//printf ("sum=%d \n",sum);
	return sum;
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("������� ����� �����:\n");
	scanf ("%d", &a); 
	printf("%d ",sum_bin (a));
	return 0;
}

