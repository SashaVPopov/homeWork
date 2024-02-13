/*
 * e10_hw_les8_3.c
 * Циклический сдвиг массива вправо на 4
 * Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.
 * Данные на входе: 12 целых элементов массива через пробел
 * Данные на выходе: 12 целых элементов массива через пробел сдвинутых на 4 элемента циклически
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
	}
}

int main(int argc, char **argv)
{
	const int SIZE = 12; // размер массива для 12 целых чисел
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("Введите %d целых чисел через пробел: \n", SIZE);
	Input (arr, SIZE);
	for (int i = 0; i < 4; i++)
	{
		arrShiftRight (arr,SIZE);
	}
	arrPrint(arr,SIZE);
	return 0;
}

