<<<<<<< HEAD
/*
 * ep_d9_decided.c 
 * ����� ���� �����
 * ���� ����������� ����� N. ��������� ����� ��� ����.
 * ���������� ����������� ����������� �������.
 * int sum_digits(int n)
 * ������ ��� �����: ���� ��������������� �����
 * ������ �� �����: ����� ����� - ����� ���� ���������� �����.
 */
#include <stdio.h> 
#include <locale.h> 
int sum_digits(int n)
{
	int res = n%10;
	if (n>=10)
	{
		res += sum_digits(n/10);
		printf ("n = %d \n",n);
		printf ("res = %d \n",res);
	}
	return res;
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("������� ����� �����:\n");
	scanf ("%d", &a); 
	 printf("%d ",sum_digits (a));
	return 0;
}

=======
/*
 * ep_d9_decided.c 
 * ����� ���� �����
 * ���� ����������� ����� N. ��������� ����� ��� ����.
 * ���������� ����������� ����������� �������.
 * int sum_digits(int n)
 * ������ ��� �����: ���� ��������������� �����
 * ������ �� �����: ����� ����� - ����� ���� ���������� �����.
 */
#include <stdio.h> 
#include <locale.h> 
int sum_digits(int n)
{
	int res = n%10;
	if (n>=10)
	{
		res += sum_digits(n/10);
		printf ("n = %d \n",n);
		printf ("res = %d \n",res);
	}
	return res;
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("������� ����� �����:\n");
	scanf ("%d", &a); 
	 printf("%d ",sum_digits (a));
	return 0;
}

>>>>>>> 50d092cf354843ddc37e949cb799fe76c4eb1143
