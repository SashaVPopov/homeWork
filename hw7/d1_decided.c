<<<<<<< HEAD
/*
 * ep_d1_decided.c 
 * �� 1 �� N
 * ��������� ����������� ������� ������ ���� ����� �� 1 �� N.
 * ������ ��� �����: ���� ����������� �����
 * ������ �� �����: ������������������ ����� �� 1 �� ���������� �����.
 */
#include <stdio.h> 
#include <locale.h> 
void print_num (int num)
{
	if (num>1)
		print_num(num-1);
	printf ("%d ",num);
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("������� ����� �����: ");
	scanf ("%d", &a); 
	print_num (a); 
	return 0;
}

=======
/*
 * ep_d1_decided.c 
 * �� 1 �� N
 * ��������� ����������� ������� ������ ���� ����� �� 1 �� N.
 * ������ ��� �����: ���� ����������� �����
 * ������ �� �����: ������������������ ����� �� 1 �� ���������� �����.
 */
#include <stdio.h> 
#include <locale.h> 
void print_num (int num)
{
	if (num>1)
		print_num(num-1);
	printf ("%d ",num);
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("������� ����� �����: ");
	scanf ("%d", &a); 
	print_num (a); 
	return 0;
}

>>>>>>> 50d092cf354843ddc37e949cb799fe76c4eb1143
