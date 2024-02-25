/*
 * f3_demo2.c
 * Цифры по возрастанию
 * 
 * Написать функцию и программу, демонстрирующую работу данной функции.
 * Вывести в порядке возрастания цифры, входящие в десятичную запись натурального числа N, не более 1000цифр.
 * Цифра, пробел, сколько раз данная цифра встречается в числе.
 * Данные на входе: Натуральное число не более 1000 цифр.
 * Данные на выходе: Цифры входящие в число, через пробел в порядке возрастания. От самой младшей до самой старшей и количество.
 */


#include <stdio.h>
#include <string.h>

void arrPrint (int arr[], int len) 
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i]>0)
			printf ("%d %d \n",i, arr [i]);
	}
}

void countDidits (char n[], int res[])
{

	for(int i = 0; n[i]!=0; i++)
	{
		res [n[i] - '0']++;
	}

}

int main(int argc, char **argv)
{
	int SIZE = 1000;
	char str_arr [SIZE];
	int res [10] = {0};
	scanf ("%s", str_arr);
	countDidits (str_arr, res);
	arrPrint (res, 10);
	return 0;
}

