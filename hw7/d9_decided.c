<<<<<<< HEAD
/*
 * ep_d9_decided.c 
 * Сумма цифр числа
 * Дано натуральное число N. Вычислите сумму его цифр.
 * Необходимо реализовать рекурсивную фцнуцию.
 * int sum_digits(int n)
 * Данные для входа: Одно неотрицательное число
 * Данные на выход: Целое число - сумму цифр введенного числа.
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
	printf("Введите целое число:\n");
	scanf ("%d", &a); 
	 printf("%d ",sum_digits (a));
	return 0;
}

=======
/*
 * ep_d9_decided.c 
 * Сумма цифр числа
 * Дано натуральное число N. Вычислите сумму его цифр.
 * Необходимо реализовать рекурсивную фцнуцию.
 * int sum_digits(int n)
 * Данные для входа: Одно неотрицательное число
 * Данные на выход: Целое число - сумму цифр введенного числа.
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
	printf("Введите целое число:\n");
	scanf ("%d", &a); 
	 printf("%d ",sum_digits (a));
	return 0;
}

>>>>>>> 50d092cf354843ddc37e949cb799fe76c4eb1143
