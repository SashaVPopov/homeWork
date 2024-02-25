/*
 * f18.c
 * Массив максимумов
 * 
 * Написать функцию и программу, демонстрирующую работу данной функции.
 * Дана целочисленная квадратичная матрица 10х10, реализовать алгоритм вычисления суммы максимальных элементов из каждой строки.
 * Напечатать значение этой суммы. Предполагается, что в каждой строке такой элемент единственный. 
 * Реализовать функцию поиска максимума в строке из 10 элементов.
 * Данные на входе: 10 строк сомтоящих из 10 целых чисел через пробел
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
void printMaxLineMatrix (int len, int arr[][len])
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		int max_line = arr [i][0];
		for (int j = 1; j < len; j++)
		{
			if (max_line < arr [i][j])
			{
				max_line = arr [i][j];
			} 
		}
		printf ("max_line %d = %d \n",i,max_line);
		sum += max_line; 
		//printf ("sum_line = %d \n",sum);
	}
	printf ("max_sum = %d\n",sum);
}

int main(int argc, char **argv)
{
	int SIZE = 10;
	int arr [SIZE][SIZE];
	printf ("Input %d numbers:\n", SIZE*SIZE);
	arrTwoInput (SIZE, arr);
	printTwoArray (SIZE, arr);
	printf ("\n");
	printMaxLineMatrix (SIZE, arr);
	return 0;
}

