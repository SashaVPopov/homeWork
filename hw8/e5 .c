/*
 * e5.c
 * Сумма положительных элементов
 * Считать массив из 10 элементов и посчитать сумму положительных элементов массива.
 * Данные на входе: 10 целых чисел через пробел
 * Данные на выходе: Одно целое число - сумма положительных элементов массива.
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
int Sum (int arr [], int len) // нахождение суммы положительных элементов массива arr[] длиной len
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr [i]>0)
			sum += arr [i];
	}
	return sum; 
}

int main(int argc, char **argv)
{
	const int SIZE = 10; // размер массива для 10 целых чисел
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("Введите %d целых чисел через пробел: \n", SIZE);
	Input (arr,SIZE);
	printf ("Сумма положительных элементов равна: %d ", Sum (arr ,SIZE)); //сумма положительных элементов массива arr[] длиной SIZE
	return 0;
}

