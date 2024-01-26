<<<<<<< HEAD
/*
 * ep_d13_demo.c 
 * Печать простых множителей
 * Составить рекурсивную функцию печати всех простых множителей числа
 * Данные для входа: Одно натуральное число
 * Данные на выход: Последовательность из всех простых делителей числа через пробел.
 */
#include <stdio.h> 
#include <locale.h> 
void rec (int a, int b)
{
	if (a==1)
		return;
	for (;;)
	{
		if (a%b == 0)
		{
			printf ("%d ",b);
			rec (a/b,b);
			return;
		}
		b++;
	}
	
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("Введите целое число: ");
	scanf ("%d", &a); 
	rec (a,2); 
	return 0;
}

=======
/*
 * ep_d13_demo.c 
 * Печать простых множителей
 * Составить рекурсивную функцию печати всех простых множителей числа
 * Данные для входа: Одно натуральное число
 * Данные на выход: Последовательность из всех простых делителей числа через пробел.
 */
#include <stdio.h> 
#include <locale.h> 
void rec (int a, int b)
{
	if (a==1)
		return;
	for (;;)
	{
		if (a%b == 0)
		{
			printf ("%d ",b);
			rec (a/b,b);
			return;
		}
		b++;
	}
	
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("Введите целое число: ");
	scanf ("%d", &a); 
	rec (a,2); 
	return 0;
}

>>>>>>> 50d092cf354843ddc37e949cb799fe76c4eb1143
