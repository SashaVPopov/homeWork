/*
 * ep_d12_decided.c 
 * Монотонная последовательность
 * Дана монотонная последовательность, в которой каждое натуральное число k встречается ровно k  раз: 1,2,2,3,3,3,4,4,4,4,5...
 * Выведите первые n членов этой последовательности. Только один цикл For
 * Данные для входа: Одно натуральное число
 * Данные на выход: Последовательность целых чисел.
 */
#include <stdio.h> 
#include <locale.h> 
void print_sequence (int n, int k)
{
	for (int i=1;i<=k;i++)
	{
		printf ("%d ",k);
		n--;
		if (n==0)
			return;
	}
	print_sequence(n, k+1);
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("Введите целое число: ");
	scanf ("%d", &a); 
	print_sequence (a,1); 
	return 0;
}

