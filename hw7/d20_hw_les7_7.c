/*
 * ep_d20_hw_les7_7.c 
 * Возвести в степень
 * Написать рекурсивную функцию возведения числа n в степень p.
 * int recurs_power (int n, int p)
 * Данные для входа: Два целых положительных числа через пробел
 * Данные на выход: Одно целое число n в степени p.
 */
#include <stdio.h> 
#include <locale.h> 
int recurs_power (int n, int p)
{
	int res=1;
	if (p)
	{
		printf("n=%d p=%d \n",n,p);
		res=n*recurs_power (n, p-1);
	} return res;
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int n,p;
	printf("Введите целое число:\n");
	scanf ("%d%d", &n,&p); 
	printf("%d",recurs_power (n,p));
	return 0;
}

