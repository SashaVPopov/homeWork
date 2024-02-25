/*
 * f6_hw_les9_3.c
 * Два одинаковых
 * 
 * Написать функцию и программу, демонстрирующую работу данной функции, которая определяет, верно ли, что среди элементов массива есть два одинаковых. 
 * Если ответ "да", функция возвращает 1; если ответ "нет", то 0.
 * Функция должна строго соответствовать прототипу.
 * int is_two_same (int size, int a [])
 * Данные на входе: Массив состоящий из целых чисел. 
 * Данные на выходе: функция возвращает 1 или 0.
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
int isTwoSame (int size, int a []) //определяет есть ли два одинаковых, если "да", функция возвращает 1; если ответ "нет", то 0. 
{
	for (int i = 0; i < size ; ++i)
	{
		for (int j = i+1; j < size ; ++j)
		{
			if (a[i]==a[j])
			{
				return 1;
			}
		}
	}
	return 0;
}

int main(int argc, char **argv)
{
	int SIZE = 1000;
	int num_arr [SIZE];
	printf ("%d \n", isTwoSame (numInput(num_arr), num_arr));
	return 0;
}

