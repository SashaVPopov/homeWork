/*
 * ep_c7_demo2.c
 * Перевести число N в систему счисления P
 * Составить функцию, которая переводит число N из десятичной системы счисления в P-ичную систему счисления.
 * Данные для входа: Два целых числа. N >= 0 и 2 <= P <= 9.
 * Данные на выход: Одно целое число.
 */
#include <stdio.h> 
#include <locale.h>  
int notation (int n, int p);
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int n,p;
	printf("Введите неотрицательное число и систему счисления (от 2 до 9)  для перевода через пробел: ");
	scanf ("%d%d", &n, &p);
	printf("\nЧисло %d в системе счисления %d имеет вид : %d \n",n,p,notation(n,p));
	return 0;
}
int notation (int n, int p)
{
	int remainder;
	int exponent = 1;
	int res=0;
	for (; n>0; n/=p)
	{
		remainder = n%p;
		res += remainder*exponent;
		exponent *= 10;
		//printf ("remaind=%d res=%d; ",remainder,res);
	}
	return res;
}

