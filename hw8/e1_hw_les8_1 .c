/*
 * e1_hw_les8_1.c
 * Среднее арифметическое чисел
 * Ввести с клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива.
 * Данные на входе: 5 целых ненулевых чисел через пробел
 * Данные на выходе: Одно число в формате "%.3f"
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
float Middle (int arr [], int len) // вычисление среднее арифметическое всех элементов массива arr[] длиной len
{
	float sum=0;
	for (int i = 0; i < len; i++)
	{
		sum+= arr[i];
	}
	return (sum/(float)len); 
}

int main(int argc, char **argv)
{
	const int SIZE = 5; // размер массива для 5 целых чисел
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("Введите %d целых чисел через пробел: \n", SIZE);
	Input (arr,SIZE);
	printf ("Cреднее арифметическое всех элементов равно: %.3f ", Middle(arr ,SIZE)); // âûâîä ñðåäíåå àðèôìåòè÷åñêîå âñåõ ýëåìåíòîâ ìàññèâà arr[] äëèíîé SIZE
	return 0;
}

