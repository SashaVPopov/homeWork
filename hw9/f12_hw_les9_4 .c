/*
 * f12_hw_les9_5.c
 * Поменять местами
 * 
 * Написать функцию и программу, демонстрирующую работу данной функции, которая меняет  в массиве минимальный и максимальный элемент местами.
 * Функция должна строго соответствовать прототипу.
 * void change_max_min (int size, int a [])
 * Данные на входе: Функция принимает на вход размер массива и массив чисел типа int 
 * Данные на выходе: Функция ничего не возвращает, измененный массив сохраняется на месте исходного.
 */
#include <stdio.h>
#include <string.h>
int arrInput (int arr[], int len) // ввод (заполнение) массива arr[] длиной len
{
	int i = 0, num;
	while (scanf ("%d", &num)==1)
		arr [i++] = num;
	return i;
}
void arrPrint (int arr[], int len) // вывод (печать) массива arr[] длиной len
{
	for (int i = 0; i < len; i++)
	{
		printf ("%d ", arr [i]);
	}
}
void aSwap (int arr[], int i, int j) // поменять элементов массива местами 
{
	int flag = arr[i];
	arr [i] = arr [j];
	arr [j] = flag;
}
int Min (int arr [], int len) // нахождение минимального из всех элементов массива arr[] длиной len
{
	int min = arr[0], pmin = 0;
	for (int i = 1; i < len; i++)
	{
		if (min > arr [i])
		{
			min = arr [i];
			pmin = i;
		}
	}
	return pmin; 
}
int Max (int arr[], int len) // возвращает позицию максимального из всех элементов массива arr[] длиной len
{
	int max = arr [0], pmax = 0;
	for (int i = 1; i < len; i++)
	{
		if (max < arr [i])
		{
			max = arr [i];
			pmax = i;
		}
	}
	return pmax;
}
void changeMaxMin (int size, int arr [])
{
	 aSwap (arr,Max (arr, size),Min (arr, size));
}
int main(int argc, char **argv)
{
	int SIZE = 100;
	int num_arr [SIZE];
	printf ("Input numbers and the end press ctrl+z and enter:\n");
	int size_arr = arrInput (num_arr,SIZE); 
	arrPrint (num_arr, size_arr);
	printf ("\n");
	changeMaxMin (size_arr, num_arr);
	arrPrint (num_arr, size_arr);
	printf ("\n");
	return 0;
}

