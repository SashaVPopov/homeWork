/*
 * f15.c
 * Больше по модулю
 * 
 * Написать функцию и программу, демонстрирующую работу данной функции, которая определяет в массиве, состоящим из положительных и отрицательных чмсел, сколько элементов превосходят по модулю максимальный элемент.
 * Прототип функции
 * in count_bigger_abs (int n, int a [])
 * Данные на входе: Функция принимает на вход размер массива и массив чисел типа int 
 * Данные на выходе: Функция возвращает целое число равное количеству элементов превосходящих по модулю максимальный элемент
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int arrInput (int n, int a []) 
{
	int i = 0, num;
	while (scanf ("%d", &num)==1)
		a [i++] = num;
	return i;
}

int countBiggerAbs (int n, int a[]) 
{
	int max = a [0];
	for (int i = 1; i < n; i++)
	{
		if (max < a [i])
		{
			max = a [i];
		}
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < abs(a[i]))
		{
			count++;
		}
	}
	return count; 
}
int main(int argc, char **argv)
{
	int SIZE = 100;
	int arr[SIZE];
	printf ("Input numbers and the end press ctrl+z and enter:\n");
	int sizearr = arrInput(SIZE,arr);
	printf ("%d", countBiggerAbs (sizearr,arr));
	return 0;
}

