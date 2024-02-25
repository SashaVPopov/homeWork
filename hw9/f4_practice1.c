/*
 * f4_practice1.c
 * Цифры в строке
 * 
 * Написать функцию и программу, демонстрирующую работу данной функции.
 * Вывести в порядке возрастания цифры, входящие в строку. Цифра -количество. 
 * Функция должна строго соответствовать прототипу.
 * void print_digit (char s [])
 * Данные на входе: Строка из английских букв, пробелов, знаков припинания и цифр
 * Данные на выходе: . Функция принимает на вход строку  и выводит на печать по формату: Цифра пробел количество
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

void printDigit (char s [])
{
	int res [10]={0};
	for (int i=0; s[i]!=0;i++)
	{
		if (((s[i]>='0')&&(s[i]<='9')))
		{
			res [s[i] - '0']++;
			//printf ("s=%c i=%d res=%d \n",s[i],i, res[s[i] - '0']);
		}
	}
	arrPrint (res, 10);
}

int main(int argc, char **argv)
{
	int SIZE = 1000;
	char str_arr [SIZE];
	scanf ("%[^\n]", str_arr);
	printDigit (str_arr);
	return 0;
}

