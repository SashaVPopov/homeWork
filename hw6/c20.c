/*
 * ep_c20.c
 * ������
 * ��������� ������ ��������� �� ������ "(" � ")" �� ������������.
 * ������ ��� �����: �� ���� �������� ������ ��������� �� �������� '(', ')' � ��������������� �������� '.'. ������ ������ �� ����� 1000 ��������.
 * ������ �� �����: ������ YES ��� NO.
 */
#include <stdio.h> 
#include <locale.h> 

 

int main(void)
{
	setlocale (LC_ALL, "Rus");
	int count = 0;
	char input;
	while (1)
	{
		scanf("%c", &input);
		
		if (input == '.')
			break;
		if (input == ')')
			count--;
		else if (input == '(')
			count++;
		printf ("%d",count);
		if (count<0)
		{
			printf("NO");
			//printf("\ncount<0");
			return 0;
		}
	}
	if (count>0)
		{
			printf("NO");
			//printf("\ncount>0");
			return 0;
		}
	printf ("YES");
	return 0;
}
