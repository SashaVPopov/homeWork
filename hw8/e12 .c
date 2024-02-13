/*
 * e12.c
 * По убыванию и возрастанию
 * Считать массив из 10 элементов и отсортировать первую половину по возрастанию, а вторую - по убыванию.
 * Данные на входе: 10 целых элементов массива через пробел
 * Данные на выходе: Исходный массив. Первая часть отсортирована по возрастанию, вторая половина по убыванию. 
 */


#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

void arrInput (int arr[], int len) // ввод (заполнение) массива arr[] длиной len
{
	for (int i = 0; i < len; i++)
	{
		scanf ("%d", &arr[i]);
	}
}
void arrPrint (int arr[], int len) // вывод (печать) массива arr[] длиной len
{
	for (int i = 0; i < len; i++)
	{
		printf ("%d ", arr [i]);
	}
}
void arrSwap (int *arr, int i, int j) // поменять элементов массива местами 
{
	int flag = arr[i];
	arr [i] = arr [j];
	arr [j] = flag;
}
void arrSort (int *arr, int len)
{
	int noSwap;
	for (int i = len-1; i >= 0 ; i--)
	{
		noSwap = 1;
		for (int j=0; j < i; j++)
		{
			if ((arr[j]) > (arr[j+1]))
			{
				arrSwap (arr, j , j+1);
				noSwap = 0;
			}
			//arrPrint(arr,len);
			//printf ("\n");
		}
		if (noSwap)
		break;
	}
}
void arrSortDescending  (int *arr, int len)
{
	int noSwap;
	for (int i = len-1; i >= 0 ; i--)
	{
		noSwap = 1;
		for (int j=0; j < i; j++)
		{
			if ((arr[j]) < (arr[j+1]))
			{
				arrSwap (arr, j , j+1);
				noSwap = 0;
			}
			//arrPrint(arr,len);
			//printf ("\n");
		}
		if (noSwap)
		break;
	}
}

int main(int argc, char **argv)
{
	const int SIZE = 10; // размер массива для 10 целых чисел
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("Введите %d целых чисел через пробел: \n", SIZE);
	arrInput (arr, SIZE);
	arrSort (arr, SIZE/2);
	arrPrint(arr, SIZE/2);
	arrSortDescending ((arr + (SIZE/2)), SIZE/2);
	arrPrint((arr + (SIZE/2)), SIZE/2);
	return 0;
}

