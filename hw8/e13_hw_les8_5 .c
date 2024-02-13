/*
 * e13_hw_les8_5.c
 * Вторая с конца - ноль
 * Считать массив из 10 элементов и отобрать в другой массив все числа, у которых вторая с конца цифра (число десятков) - ноль.
 * Данные на входе: 10 целых элементов массива через пробел
 * Данные на выходе: целые числа через пробел, у которых вторая с конца цифра - ноль
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
int secondNumFromEndZero (int arr[],int zeroarr[], int len) 
// ввод (заполнение) массива zeroarr[] элементами из массива arr[] где вторая цифра числа с конца - 0, возвращает  длину массива zeroarr
{
	int j = 0;
	for (int i = 0; i < len; i++)
	{
		if (!(((arr [i])/10)%10))
		{
		zeroarr [j] = arr [i];
		j++;
		//printf ("%d ", arr [i]);
		}
	}
	return j;
}

int main(int argc, char **argv)
{
	const int SIZE = 10; // размер массива для 10 целых чисел
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	int zeroarr[SIZE];
	printf ("Введите %d целых чисел через пробел: \n", SIZE);
	Input (arr, SIZE);
	//arrPrint(arr,SIZE);
	//printf ("\n");
	int zeroarrsize = secondNumFromEndZero (arr,zeroarr,SIZE);
	arrPrint(zeroarr,zeroarrsize);
	return 0;
}

