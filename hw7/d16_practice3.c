/*
 * ep_d16_practice3.c 
 * Точная степень двойки
 * Написать логическую рекурсивную функцию и использую ее определить является ли введенное натуральное число точной степенью двойки
 * int is2pow(int n)
 * Данные для входа: Одно натуральное число
 * Данные на выход: YES или NO 
 */
#include <stdio.h> 
#include <locale.h> 
int is2pow(int n) // 1 -true, !1 - false
{
	int res = n%2;
	if (n>1)
	{
		res += is2pow(n/2); 
	}
	return res;
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("Введите целое число: ");
	scanf ("%d", &a); 
	(is2pow(a)==1) ? printf ("YES"):printf ("NO");
	return 0;
}

