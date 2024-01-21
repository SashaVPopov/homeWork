/*
 * ep_c10.c 
 * Простые множители
 * Составить функцию, печать всех простых множителей числа. Использовать ее для печати всех простых множителей числа.
 * void print_simple(int n)
 * Данные для входа: Целое положительное число.
 * Данные на выход: Последовательность всех простых множителей данного числа в порядкеs.
 */
#include <stdio.h> 
#include <locale.h> 
void printSimple (int n)
{
	int div = 2;
	while (n!=1)
	{
		if (n%div == 0)
		{
			printf ("%d", div);
			n/=div;
		}
		else
		{
			div+=1;
		}
	}
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("Введите число для поиска всех его простых множителей: ");
	scanf ("%d", &a);
	printSimple (a);
	return 0;
}

