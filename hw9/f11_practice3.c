/*
 * f11_practice3.c
 * Сумма минимальна
 * 
 * Написать функцию и программу, демонстрирующую работу данной функции.
 * Дан целочисленный массив из 30 элементов. Элементы массива могут принимать произвольные целые значения помещающиеся в int. 
 * Необходимо создать функцию, которая находит и выводит в порядке возростания номера двух элементов массива, сумма которых минимальна.
 * Данные на входе: Последовательность из 30 целых чисел через пробел
 * Данные на выходе: Два целых числа через пробел.
 */


#include <stdio.h>
#include <string.h>

void arrInput (int len, int arr[]) 
{
	for (int i = 0; i < len; i++)
	{
		scanf ("%d", &arr[i]);
	}
}
void printSumMinArray (int len, int arr[])
{
	int min = arr [0] + arr [1], first = 0, second = 1;
	for (int i = 0; i < len-1; i++)
	{
		for (int j = i+1; j < len; j++)
		{
			if (min > (arr [i] + arr [j]))
			{
				min = arr [i] + arr [j];
				first = i;
				second = j;
			}
		}
	}
	printf ("%d %d \n", first, second);
}

int main(int argc, char **argv)
{
	int SIZE = 30;
	int num_arr [SIZE];
	printf ("Input %d numbers:\n", SIZE);
	arrInput (SIZE, num_arr);
	printSumMinArray (SIZE, num_arr);
	return 0;
}

