/*
 * e18.c
 * Крастность прежде всего
 * В диапазоне натуральных чисел от 2 до N определить, сколько из них кратны любому из чисел в диапазоне от 2 до 9.
 * Данные на входе: Одно целое число N, больше 2 и не больше 10000
 * Данные на выходе: Все числа от 2 до 9 в формате: 2 количество чисел кратных 2 3 количество чисел кратных 3 ...
 * ...8 количество чисел кратных 8 9 количество чисел кратных 9
 */


#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

void arrPrint (int arr[],int count_arr[]) // вывод (печать) массивов arr[] и count_arr[] поэлементно последовательно
{
	for (int i = 0; i < 8; i++)
	{
		printf ("%d %d ", arr [i], count_arr[i]);
	}
}

void arrMultiCounter (int *arr,int *count_arr, int n) // ввод(заполнение) массива count_arr  сколько из чисел от 2 до n кратны любому из чисел в диапазоне от 2 до 9
{
	for (int i = 2; i <= n ; i++)
	{
		for (int j = 0; j < 8 ; j++)
		{
			if (!(i%(arr[j])))
			{
				(count_arr [j])++;
			}
		}
	}
}

int main(int argc, char **argv)
{
	setlocale (LC_ALL, "Rus");
	int n;
	int arr2to9[8] = {2}; // îò 2 äî 9
	int count_arr [8] = {0};
	for (int i = 1; i < 8; i++)
	{
		arr2to9[i] = arr2to9[i-1]+1;
	}
	printf ("Введите одно целое число (от 2 до 10000): \n");
	scanf ("%d", &n);
	arrMultiCounter (arr2to9,count_arr,n);
	arrPrint(arr2to9,count_arr);
	return 0;
}

