/*
 * f2_hw_les9_1.c
 * Четные в начало
 * 
 * Написать функцию и программу, демонстрирующую работу данной функции, которая ставит в начало массива все четные элементы, а в конец - все нечетные.
 * Не нарушая порядок следования чисел между собой.
 * Строго согласно прототипу. Имя функции и все аргументы должны быть:
 * void sort_even_odd (int n, int a[])
 * 
 * Данные на входе: Функция принимает на вход целые цисла.
 * Данные на выходе: Отсортированный исходный массив.
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

void sortEvenOdd (int n, int a[])
{
	while (n)
	{
		for(int i = 0; i < n-1; ++i)
		{
			if ((a[i]%2)&&(!(a[i+1]%2)))
			{
				//printf ("i = %d, i+1 = %d, n = %d \n", i,i+1,n);
				aSwap (a,i, i+1);
			}
		}
		n--;
	}
}

int main(int argc, char **argv)
{
	int SIZE = 100;
	int num_arr [SIZE];
	int size_arr = InputNum (num_arr); //заполняем массив числами и сохраняем длину массива в перемнную size_arr
	arrPrint (num_arr, size_arr);
	printf ("\n");
	sortEvenOdd (size_arr, num_arr);
	arrPrint (num_arr, size_arr);
	return 0;
}

