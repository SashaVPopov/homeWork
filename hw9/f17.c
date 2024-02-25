/*
 * f17.c
 * След матрицы
 * 
 * Написать функцию и программу, демонстрирующую работу данной функции, которая находит след матрицы в двумерном массиве. Показать пример ее работы на матрице из 5 на 5 элементов.
 * след матрицы - это сумма элементов на главной диагонали.
 * Данные на входе: 25 целых чисел через пробел
 * Данные на выходе: Одно целое число.
 */


#include <stdio.h>
#include <string.h>

void arrTwoInput (int len, int arr[][len]) 
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			scanf ("%d", &arr[i][j]);
		}
	}
}
void printTwoArray (int len, int arr[][len])
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			printf ("%d",arr [i][j]);
		}
		printf ("\n");
	}
}
int SumTraceMatrix (int len, int arr[][len])
{
	int sum = 0;
	for (int j = 0; j < len; j++)
	{
		sum += arr [j][j];
	}
	return sum;
}

int main(int argc, char **argv)
{
	int SIZE = 5;
	int arr [SIZE][SIZE];
	printf ("Input %d numbers:\n", SIZE*SIZE);
	arrTwoInput (SIZE, arr);
	printTwoArray (SIZE, arr);
	printf ("\n");
	printf ("%d ", SumTraceMatrix (SIZE, arr));
	return 0;
}

