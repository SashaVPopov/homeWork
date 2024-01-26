/*
 * ep_d3_practice.c 
 * В обратном порядке
 * Дано целое неотрицательное число. Вывести все его цифры по одной, в обратном порядке, разделяя их пробелами или новыми строками.
 * Данные для входа: Одно неотрицательное число
 * Данные на выход: Последовательность цифр введенного числа в обратном порядке через пробел.
 */
#include <stdio.h> 
#include <locale.h> 
void recursNum (int num)
{
	if (num>0)
	{
		printf ("%d ",num%10);
		recursNum(num/10);
	}
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("Введите целое число: ");
	scanf ("%d", &a); 
	 recursNum (a);
	return 0;
}
