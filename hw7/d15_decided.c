/*
 * ep_d15_decided.c 
 * Найти наибольшее
 * Дана последовательность ненулевых целых чисел, завершающаяся числом 0. Ноль в последовательность не входит.
 * Определите наибольшее значение числа в этой последовательности.
 * Необходимо реализовать рекурсивную фцнуцию.
 * int max_find (int max)
 * Данные для входа: Последовательность ненулевых целых чисел. В конце 0.
 * Данные на выход: Одно число - максимум последовательности.
 */
#include <stdio.h> 
#include <locale.h> 
int max_find (int max)
{
	int input;
	scanf ("%d", &input);
	if (input == 0)
	{
		return max;
	}
	if ((max == 0)||(input > max))
	{
		max = input;
	}
	return max_find(max);
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	printf("Введите последовательность ненулевых целых чисел через пробел:\n");
	printf("%d", max_find(0));
	return 0;
}
