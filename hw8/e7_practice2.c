/*
 * e7_practice2.c
 * Инверсия половинок
 * Считать массив из 10 элементов и выполнить инверсию для 1ой и 2ой половинок массива.
 * Необходимо изменить считанный массив и напечатать его одним циклом.
 * Данные на входе: 10 целых элементов массива через пробел
 * Данные на выходе: 10 целых элементов массива через пробел
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
void arrPrint (int arr[], int len) // вывод (печать) массива arr[] длиной len
{
	for (int i = 0; i < len; i++)
	{
		printf ("%d ", arr [i]);
	}
}
void arrInversion (int *arr, int len) // инверсия элементов массива  
{
	for (int i = 0, j = (len - 1); i < j; i++, j--)
	{
		int flag = arr[i];
		arr [i] = arr [j];
		arr [j] = flag;
	} 
}

int main(int argc, char **argv)
{
	const int SIZE = 10; // размер массива для 10 целых чисел
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("Введите %d целых чисел через пробел: \n", SIZE);
	Input (arr, SIZE);
	//arrPrint(arr,SIZE);
	//printf ("\n");
	for (int i = 0; i < 2; i++)
	{
		arrInversion (arr + (i*SIZE/2), SIZE/2);
		arrPrint(arr + (i*SIZE/2), SIZE/2);
	}
	return 0;
}

