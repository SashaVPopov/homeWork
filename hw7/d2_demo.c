/*
 * ep_d2_demo.c 
 * Сумма чисел от 1 до N
 * Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N.
 * Данные для входа: Одно натуральное число
 * Данные на выход: Сумма чисел от 1 до введенного числа.
 */
#include <stdio.h> 
#include <locale.h> 
int recurSumNum (int num)
{
	return (num==1)?1:num+recurSumNum(num-1);
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("Введите целое число: ");
	scanf ("%d", &a); 
	printf ("Сумма чисел от 1 до введенного числа равна: %d ",recurSumNum(a)); 
	return 0;
}

