/*
 * e17.c
 * Только один раз
 * Дан массив из 10 элементов. В массиве найти элементы, которые в нем встречаются только один раз. И вывести их на экран.
 * Данные на входе: 10 целых элементов массива через пробел
 * Данные на выходе: Элементы, которые встречаются только один раз через пробел. 
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
int arrNumCount (int arr[], int n, int len) // возвращает сколько раз встречается n-й элемент в массиве arr длиной len 
{
	int count = 0;
	for (int i = 0; i < len ; i++)
	{
		if (arr[i]==arr[n])
		{
			count++;
		}
	}
	return count;
}

void arrNumOnlyOnce (int *arr, int len) // выводит числа из массива, которые в нем встречаются только один раз
{
	int count_arr [len];
	for (int i = 0; i < len ; i++)
	{
		count_arr [i] = arrNumCount (arr, i, len);//заполнение массива count_arr[], сколько раз встречается элемент в массиве arr[]
		if (count_arr [i]==1)
		{
			printf ("%d ",arr [i]);
		}
	}
}

int main(int argc, char **argv)
{
	const int SIZE = 10; // размер массива для 10 целых чисел
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("Введите %d целых чисел через пробел: \n", SIZE);
	arrInput (arr, SIZE);
	arrNumOnlyOnce (arr, SIZE);
	return 0;
}

