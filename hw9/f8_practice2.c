/*
 * f8_practice2.c
 * Пропущенное число
 * 
 * Написать функцию и программу, демонстрирующую работу данной функции.
 * В последовательность записать целые число от M до N (M<N, M>=1) в произвольном порядке, но одно из чисел пропущено (остальные встречаются ровно по одному разу). N не превосходит 1000. Последовательность заканчивается числом 0. Определить пропущенное число. 
 * 
 * Данные на входе: Послндовательность целых чисел от M до N. M,N не превосходит 1000
 * Данные на выходе: Одно целое число.
 */


#include <stdio.h>
#include <string.h>


int InputNum (int arr[]) // ввод (заполнение) массива arr[] числами, не разделенными символами, из потока ввода 
{
	int i=0;
	char ch;
	while((ch=getchar ())!='0')
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
int missingNum (int size, int a[]) // одно из чисел массива пропущено (остальные встречаются ровно по одному разу
{
	for (int i=0; i < size-1; i++)
		{
			if (!((a[i]+1) == (a[i+1])))
			{
				
				return (a[i]+1);
			}
		}
	return 1;
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
	printf ("\n");
	printf("%d \n",missingNum (size_arr, num_arr));
	return 0;
}

