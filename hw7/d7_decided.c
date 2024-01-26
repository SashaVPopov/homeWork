<<<<<<< HEAD
/*
 * ep_d7_decided.c 
 * От N до 1
 * Составить рекурсивную функцию печати всех чисел от 1 до N.
 * Данные для входа: Одно натуральное число
 * Данные на выход: Последовательность чисел от 1 до введенного числа.
 */
#include <stdio.h> 
#include <locale.h> 
void print_num (int num)
{
	printf ("%d ",num);
	if (num>1)
		print_num(num-1);
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("Введите целое число: ");
	scanf ("%d", &a); 
	print_num (a); 
	return 0;
}

=======
/*
 * ep_d7_decided.c 
 * От N до 1
 * Составить рекурсивную функцию печати всех чисел от 1 до N.
 * Данные для входа: Одно натуральное число
 * Данные на выход: Последовательность чисел от 1 до введенного числа.
 */
#include <stdio.h> 
#include <locale.h> 
void print_num (int num)
{
	printf ("%d ",num);
	if (num>1)
		print_num(num-1);
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("Введите целое число: ");
	scanf ("%d", &a); 
	print_num (a); 
	return 0;
}

>>>>>>> 50d092cf354843ddc37e949cb799fe76c4eb1143
