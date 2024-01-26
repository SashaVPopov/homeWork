/*
 * ep_d4_hw_les7_1.c 
 * В прямом порядке
 * Дано натуральное число N. Выведите все его цифры по одной, в прямом порядке, разделяя их пробелами или новыми строками.
 * Необходимо реализовать рекурсивную фцнуцию.
 * void print_num(int num)
 * Данные для входа: Одно неотрицательное число
 * Данные на выход: Последовательность цифр введенного числа в обратном порядке через пробел.
 */
#include <stdio.h> 
#include <locale.h> 
void print_num (int num)
{
	if (num>0&&num>9)
	{
		print_num(num/10);
		//printf ("%d \n",num);
	}
	printf ("%d ",num%10);
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("Введите целое число:\n");
	scanf ("%d", &a); 
	 print_num (a);
	return 0;
}
