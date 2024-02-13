/*
 * e9.c
 * Циклический сдвиг массива вправо
 * Считать массив из 10 элементов и выполнить циклический сдвиг ВПРАВО на 1.
 * Данные на входе: 10 целых элементов массива через пробел
 * Данные на выходе: 10 целых элементов массива через пробел сдвинутых на 1 элемент циклически
 */

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

void Input (int arr[], int len) // ввод (заполнение) массива arr[] длиной len
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
void arrShiftRight (int *arr, int len)
{
	for (int i = len-1; i > 0 ; i--)
	{
		arrSwap (arr, i-1 , i);
		//arrPrint (arr, len);
		//printf("\n");
	}
}

int main(int argc, char **argv)
{
	const int SIZE = 10; // размер массива для 10 целых чисел
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("Введите %d целых чисел через пробел: \n", SIZE);
	Input (arr, SIZE);
	arrShiftRight(arr,SIZE);
	arrPrint(arr,SIZE);
	printf("\n");
	return 0;
}

