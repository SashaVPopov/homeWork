/*
 * ep_c9_les6_practice2.c 
 * Факториал
 * Составить функцию вычисления N!. Использовать ее при вычислении факториала int factorial(int n)
 * Данные для входа: Целое положительное число не больше 20.
 * Данные на выход: Целое положительное число.
 */
#include <stdio.h> 
#include <locale.h> 
int factorial (int n)
{
	int f=1;
	for (int i = 1; i <=n; i++)
	{
		f*=i;
		printf ("i=%d f=%d\n",i,f);
	}
	return f;
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("Введите положительное число не более 20: ");
	scanf ("%d", &a);
	printf("Факториал числа %d равно: %d\n",a,factorial (a));
	return 0;
}

