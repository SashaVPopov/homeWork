<<<<<<< HEAD
/*
 * ep_d6_decided.c 
 * ������ ��������
 * ���� ������, ��������������� �������� ����� ".". ���������� ������ ��������.
 * ����������� ����������� �������, ������� ��������� ������ � �������� ������ ��������.
 * void reverse_string ()
 * ������ ��� �����: ������ �� ���������� ���� � ������ ����������. � ����� ������ ������ ".".
 * ������ �� �����: �������� ������ ����� �������.
 */
#include <stdio.h> 
#include <locale.h> 
void reverse_string (void)
{
	char c;
	if ((c=getchar())!= '.')
	{
		reverse_string ();
	}
	if (c != '.')
	{
		putchar (c);
	}
	
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	reverse_string ();
}

=======
/*
 * ep_d6_decided.c 
 * ������ ��������
 * ���� ������, ��������������� �������� ����� ".". ���������� ������ ��������.
 * ����������� ����������� �������, ������� ��������� ������ � �������� ������ ��������.
 * void reverse_string ()
 * ������ ��� �����: ������ �� ���������� ���� � ������ ����������. � ����� ������ ������ ".".
 * ������ �� �����: �������� ������ ����� �������.
 */
#include <stdio.h> 
#include <locale.h> 
void reverse_string (void)
{
	char c;
	if ((c=getchar())!= '.')
	{
		reverse_string ();
	}
	if (c != '.')
	{
		putchar (c);
	}
	
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	reverse_string ();
}

>>>>>>> 50d092cf354843ddc37e949cb799fe76c4eb1143
