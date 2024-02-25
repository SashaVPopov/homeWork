/*
 * f9.c
 * Поменять местами
 * 
 * Написать функцию и программу, демонстрирующую работу данной функции, которая в массиве находит максимальный из отрицательных элементов и менять его местами с последним элементом массива.
 * Гарантируется, что в массиве только один такой элемент или же такой элемент отсутствтует. 
 * Если отрицательных элементов нет - массив не менять.
 * Прототип функции:
 * void swap_negmax_last (int size, int a[])
 * Данные на входе: функция принимает на вход размер массива и указатель на начало массива
 * Данные на выходе: Массив состоит из целых чисел
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

void aSwap (int a[], int i, int j) // поменять элементов массива местами 
{
	int flag = a[i];
	a [i] = a [j];
	a [j] = flag;
}

void swapNegmaxLast (int size, int a[])
{
	int neg_max = 0,j;
	for (int i=0; i < size-1; i++)
		{
			if (a[i]<0)
			{
				if (!(neg_max))
				{
					neg_max = a [i];
					j=i;
					continue;
				}
				if (neg_max < a [i])
				{
					neg_max = a [i];
					j=i;
				}
			}
		}
	if (neg_max)
		aSwap (a,size-1,j);
}

int main(int argc, char **argv)
{
	int SIZE = 100;
	int num_arr [SIZE];
	printf ("Input numbers and the end press ctrl+z and enter:\n");
	int size_arr = arrInput (num_arr,SIZE); 
	arrPrint (num_arr, size_arr);
	printf ("\n");
	swapNegmaxLast (size_arr, num_arr);
	arrPrint (num_arr, size_arr);
	printf ("\n");
	return 0;
}

