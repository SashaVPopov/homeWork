/*
 * e16_hw_les8_6.c
 * „аще других
 * ƒан массив из 10 элементов. ќпределить, какое число в массиве встречаетс€ чаще всего.
 * √арантируетс€, что такое число равно 1.
 * ƒанные на входе: 10 целых элементов массива через пробел
 * ƒанные на выходе: ќдно число, которое встречаетс€ чаще других. 
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

void arrSuperNum (int *arr, int len) // выводит число в массиве, которое встречаетс€ чаще всего
{
	int superarr [len];
	for (int i = 0; i < len ; i++)
	{
		superarr [i] = arrNumCount (arr, i, len); //заполнение массива superarr[], сколько раз встречаетс€ элемент в массиве arr[]
		//printf ("%d ",superarr [i]);
	}
	//printf ("\n");
	printf ("%d ",arr[iMax (superarr, len)]);
}

int main(int argc, char **argv)
{
	const int SIZE = 10; // размер массива дл€ 10 целых чисел
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("¬ведите %d целых чисел через пробел: \n", SIZE);
	arrInput (arr, SIZE);
	arrSuperNum (arr, SIZE);
	return 0;
}

