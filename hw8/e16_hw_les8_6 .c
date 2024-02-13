/*
 * e16_hw_les8_6.c
 * Чаще других
 * Дан массив из 10 элементов. Определить, какое число в массиве встречается чаще всего.
 * Гарантируется, что такое число равно 1.
 * Данные на входе: 10 целых элементов массива через пробел
 * Данные на выходе: Одно число, которое встречается чаще других. 
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

int iMax (int arr[], int len) // возвращает индекс массива максимального числа
{
	int max = arr [0];
	int imax = 0;
	for (int i = 0; i < len ; i++)
	{
		if (max < arr[i])
		{
			max = arr [i];
			imax = i;
		}
	}
	return imax;
}

void arrSuperNum (int *arr, int len) // выводит число в массиве, которое встречается чаще всего
{
	int superarr [len];
	for (int i = 0; i < len ; i++)
	{
		superarr [i] = arrNumCount (arr, i, len); //заполнение массива superarr[], сколько раз встречается элемент в массиве arr[]
		//printf ("%d ",superarr [i]);
	}
	//printf ("\n");
	printf ("%d ",arr[iMax (superarr, len)]);
}

int main(int argc, char **argv)
{
	const int SIZE = 10; // размер массива для 10 целых чисел
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("Введите %d целых чисел через пробел: \n", SIZE);
	arrInput (arr, SIZE);
	arrSuperNum (arr, SIZE);
	return 0;
}

