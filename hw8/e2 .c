/*
 * e2.c
 * Найти минимум
 * Ввести с клавиатуры массив из 5 элементов, найти минимум из всех элементов массива.
 * Данные на входе: 5 целых ненулевых чисел через пробел
 * Данные на выходе: Одно целое число
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
int Min (int arr [], int len) // нахождение минимального из всех элементов массива arr[] длиной len
{
	int min = arr[0];
	for (int i = 1; i < len; i++)
	{
		if (min > arr [i])
			min = arr [i];
	}
	return min; 
}

int main(int argc, char **argv)
{
	const int SIZE = 5; // размер массива для 5 целых чисел
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("Введите %d целых чисел через пробел: \n", SIZE);
	Input (arr,SIZE);
	printf ("%d ", Min(arr ,SIZE)); // вывод минимального из всех элементов массива arr[] длиной SIZE
	return 0;
}

