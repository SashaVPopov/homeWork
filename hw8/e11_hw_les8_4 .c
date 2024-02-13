/*
 * e11_hw_les8_4.c
 * Отсортировать по последней 
 * Считать массив из 10 элементов и отсортировать его по последней цифре.
 * Данные на входе: 10 целых элементов массива через пробел
 * Данные на выходе: 10 целых элементов массива через пробел отсортированных по последней цифре 
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
void arrSortLastN (int *arr, int len)
{
	int noSwap;
	for (int i = len-1; i >= 0 ; i--)
	{
		noSwap = 1;
		for (int j=0; j < i; j++)
		{
			if ((arr[j])%10 > (arr[j+1])%10)
			{
				arrSwap (arr, j , j+1);
				noSwap = 0;
			}
			arrPrint(arr,len);
			printf ("\n");
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
	arrSortLastN (arr, SIZE);
	arrPrint(arr,SIZE);
	return 0;
}

