/*
 * ep_c14_demo4.c
 * Сумма цифр четна
 * Составить функцию логическую функцию, которая определяет, верно ли, что сумма его цифр – четное число.
 * Используя эту функцию решить задачу.
 * Данные для входа: Одно целое не отрицательное число
 * Данные на выход: ВОтвет YES или NO.
 */
#include <stdio.h> 
#include <locale.h> 

 
int is_even_sum(int n)
{
	int sum = 0;
	for(sum = 0; n > 0; n /= 10)
		sum += n % 10;
	return (sum % 2 == 0);
}
int main()
{
	setlocale (LC_ALL, "Rus");
	int n;
	scanf("%d", &n);
	is_even_sum(n) ? printf("YES") : printf("NO");
	return 0;
}
