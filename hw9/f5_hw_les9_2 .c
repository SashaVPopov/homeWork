/*
 * f5_hw_les9_2.c
 * Максимум в массиве
 * 
 * Написать функцию и программу, демонстрирующую работу данной функции, которая находит саксимальный элемент в массиве. 
 * Функция должна строго соответствовать прототипу.
 * int find_max_array (int size, int a [])
 * Данные на входе: Массив состоящий из целых чисел. Первый аргумент, размер массива, второй адрес нулевого элемента.
 * Данные на выходе: Одно целое число.
 */


#include <stdio.h>
#include <string.h>

int numInput (int arr[]) // ввод (заполнение) массива arr[] числами, не разделенными символами, из потока ввода 
{
	int i=0;
	char ch;
	while((ch=getchar ())!='\n')
	{
		if ((ch>='0')&&(ch<='9'))
		{
			int num = 0;
			do
			{
				num = (num*10) + (ch-'0');
				ch = getchar ();
			}while ((ch>='0')&&(ch<='9'));
			arr[i++] = num;
			//printf ("num = %d \n", num);
			//printf ("ch = %c \n", ch);
			if (ch == '\n')
			{
				break;
			}
		}
	}
	return i;
}
int findMaxArray (int len, int arr[])
{
	int max = arr [0];
	for (int i = 1; i < len; i++)
	{
		if (max < arr [i])
		{
			max = arr [i];
		}
	}
	return max;
}

int main(int argc, char **argv)
{
	int SIZE = 1000;
	int num_arr [SIZE];
	printf ("%d \n", findMaxArray (numInput(num_arr), num_arr));	
	return 0;
}

