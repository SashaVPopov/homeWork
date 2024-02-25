/*
 * f1_demo.c
 * Сортировать по возрастанию
 * 
 * Написать функцию и программу, демонстрирующую работу данной функции, которая сортирует массив по возрастанию.
 * Строго согласно прототипу. Имя функции и все аргументы должны быть:
 * void sort_array (int size, int a[])
 * 
 * Данные на входе: Функция принимает на вход: первый аргумент - размер массива, второй аргумент - адрес нулевого аргумента.
 * Данные на выходе: Функция ничего не возвращает. Производит сортировку переданного ей массива по возрастанию.
 */


#include <stdio.h>
#include <string.h>


int InputNum (int arr[]) // ввод (заполнение) массива arr[] числами, не разделенными символами, из потока ввода 
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

void arrPrint (int arr[], int len) // вывод (печать) массива arr[] длиной len
{
	for (int i = 0; i < len; i++)
	{
		printf ("%d ", arr [i]);
	}
}

void aSwap (int a[], int i, int j) // поменять элементов массива местами 
{
	int flag = a[i];
	a [i] = a [j];
	a [j] = flag;
}

void sortArray (int size, int a[])
{
	int noSwap;
	for (int i = size-1; i >= 0 ; i--)
	{
		noSwap = 1;
		for (int j=0; j < i; j++)
		{
			if ((a[j]) > (a[j+1]))
			{
				aSwap (a, j , j+1);
				noSwap = 0;
			}
		}
		if (noSwap)
		break;
	}
}


int main(int argc, char **argv)
{
	int SIZE = 100;
	int num_arr [SIZE];
	int size_arr = InputNum (num_arr); //заполняем массив числами и сохраняем длину массива в перемнную size_arr
	arrPrint (num_arr, size_arr);
	printf ("\n");
	sortArray (size_arr, num_arr);
	arrPrint (num_arr, size_arr);
	return 0;
}

