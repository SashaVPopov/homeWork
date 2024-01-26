/*
 * ep_d1_decided.c 
 * От 1 до N
 * Составить рекурсивную функцию печати всех чисел от 1 до N.
 * Данные для входа: Одно натуральное число
 * Данные на выход: Последовательность чисел от 1 до введенного числа.
 */
#include <stdio.h> 
#include <locale.h> 
void print_num (int num)
{
	if (num>1)
		print_num(num-1);
	printf ("%d ",num);
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("Ââåäèòå öåëîå ÷èñëî: ");
	scanf ("%d", &a); 
	print_num (a); 
	return 0;
}
