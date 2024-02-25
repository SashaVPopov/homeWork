/*
 * f13.c
 * В заданном интервале
 * 
 * Написать функцию и программу, демонстрирующую работу данной функции, которая возвращает количество элементов на заданном отрезке [from,to] для массива.
 * 
 * Прототип функции:
 * int count_between (int from, int to, int size, int a[])
 * Данные на входе: функция принимает значения клнцов отрезка from и to, размер массива, массив целых чисел.
 * Данные на выходе: функция возвращает целое число - количество чисел в интервале [from,to]
 */


#include <stdio.h>
#include <string.h>


int arrInput (int arr[], int len) // ввод (заполнение) массива arr[] длиной len
{
	int i = 0, num;
	while (scanf ("%d", &num)==1)
		arr [i++] = num;
	return i;
}
int countBetween (int from, int to, int size, int a[])
{
	int count=0;
	for (int i = from-1; i < to; i++)
		count++;
	return count;
}

int main(int argc, char **argv)
{
	int SIZE = 100, from = 0, to = 0;
	int num_arr [SIZE];
	printf ("Input two numbers interval (from to):\n");
	scanf ("%d %d", &from, &to);
	printf ("Input numbers and the end press ctrl+z and enter:\n");
	printf ("%d",countBetween (from, to, arrInput(num_arr,SIZE),num_arr));
	return 0;
}

