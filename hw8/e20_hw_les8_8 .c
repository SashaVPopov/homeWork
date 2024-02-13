/*
 * e20_hw_les8_8.c
 * Переставить цифры
 * Переставить цифры в числе так, чтобы получилось максимальное число.
 * Данные на входе: Одно целое неотрицательное число
 * Данные на выходе: Целое неотрицательное число наибольшее из возможных комбинаций его составлных цифр
 */

#include <stdio.h> 
#include <locale.h> 

void arrPrint (int arr[], int len) // вывод (печать) массива arr[] длиной len
{
	for (int i = 0; i < len; i++)
	{
		printf ("%d ", arr [i]);
	}
}

int countNum (int num) // считаем количество цифр в числе
{
	int count = 1;
	if (num>0&&num>9)
	{
		count=countNum(num/10)+1;
		
	}
	return count;
}
void arrNumInput (int *arr, int n, int len) // ввод (заполнение) массива arr[] длиной len цифрами числа n
{
	for (int i = len-1; i >= 0; i--,n/=10)
	{
		arr[i] = (n%10);
	}
}
void arrSwap (int *arr, int i, int j) // поменять элементов массива местами 
{
	int flag = arr[i];
	arr [i] = arr [j];
	arr [j] = flag;
}
void arrSort (int *arr, int len) // сортировка массива по убыванию (при выводе массива получается максимальное число)
{
	int noSwap;
	for (int i = len-1; i >= 0 ; i--)
	{
		noSwap = 1;
		for (int j=0; j < i; j++)
		{
			if ((arr[j]) < (arr[j+1]))
			{
				arrSwap (arr, j , j+1);
				noSwap = 0;
			}
			//arrPrint(arr,len);
			//printf ("\n");
		}
		if (noSwap)
		break;
	}
}
int numItemArr (int arr[], int len) // возвращает число по позициям из элементов массива arr[] длиной len
{
	int res = 0;
	for (int i = 0; i < len; i++)
	{
		res *=10;
		res += arr [i];
	}
	return res;
}

int main(void)
{
	setlocale (LC_ALL, "Rus");
	int n;
	printf("Введите целое число:\n");
	scanf ("%d", &n);
	printf ("\n");
	//printf ("%d ",countNum (n));
	int arr[countNum (n)];
	arrNumInput (arr,n,countNum (n));
	arrSort (arr,countNum (n));
	//arrPrint(arr,countNum (n));
	//printf ("\n");
	printf ("%d ",numItemArr (arr,countNum (n)));
	return 0;
}
