/*
 * ep_d8_hw_les7_2.c 
 * ОТ A ДО B
 * Составить рекурсивную функцию, которая выводит все числа от А до В включительно, в порядке возрастания, если A<B, или в порядке убывания в противном случае.
 * Данные для входа: Два целых числа через пробел
 * Данные на выход: Последовательность целых чисел через пробел.
 */
#include <stdio.h> 
#include <locale.h> 
void print_num (int a, int b)
{
	if (a>b)
	{
		printf ("%d ",a);
		//printf ("a=%d ",a);
		print_num (a-1,b);
	}
	if (a<b)
	{
		print_num (a,b-1);
		printf ("%d ",b);
		//printf ("b=%d ",b);
	}
	if (a==b)
		printf("%d ",a);
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a,b;
	printf("Введите целое число:");
	scanf ("%d%d", &a,&b); 
	 print_num (a,b);
	return 0;
}

