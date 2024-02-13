/*
 * e19_hw_les8_7.c
 * Цифры по порядку
 * Вывести в порядке следования цифры, входящие в десятичную запись натурального числа N.
 * Данные на входе: Одно натуральное число N
 * Данные на выходе: Цифры через пробел
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
	arrPrint(arr,countNum (n));
	return 0;
}
