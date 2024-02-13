/*
 * e17.c
 * “олько один раз
 * ƒан массив из 10 элементов. ¬ массиве найти элементы, которые в нем встречаютс€ только один раз. » вывести их на экран.
 * ƒанные на входе: 10 целых элементов массива через пробел
 * ƒанные на выходе: Ёлементы, которые встречаютс€ только один раз через пробел. 
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
int arrNumCount (int arr[], int n, int len) // возвращает сколько раз встречаетс€ n-й элемент в массиве arr длиной len 
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

void arrNumOnlyOnce (int *arr, int len) // выводит числа из массива, которые в нем встречаютс€ только один раз
{
	int count_arr [len];
	for (int i = 0; i < len ; i++)
	{
		count_arr [i] = arrNumCount (arr, i, len); //заполнение массива count_arr[], сколько раз встречаетс€ элемент в массиве arr[]
		if (count_arr [i]==1)
		{
			printf ("%d ",arr [i]);
		}
	}
}

int main(int argc, char **argv)
{
	const int SIZE = 10; // размер массива дл€ 10 целых чисел
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("¬ведите %d целых чисел через пробел: \n", SIZE);
	arrInput (arr, SIZE);
	arrNumOnlyOnce (arr, SIZE);
	return 0;
}

