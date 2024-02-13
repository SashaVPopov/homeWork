/*
 * e15_practice3.c
 * ѕоложительные и отрицательные
 * —читать 10 чисел в диапазоне от -500 до 500 и разложить по двум массивам:
 * в один помещать только положительные, во второй - отрицательные. „исла равные 0 игнорировать.
 * ¬ывести на экран все элементы обоих массивов.
 * ƒанные на входе: 10 целых чисел через пробел
 * ƒанные на выходе: —перва положительные числа, потом отрицательные числа, через пробел
 */


#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

void positiveNegativeNumInput (int *positive_num_arr,int *negative_num_arr, int *p_arr_size, int *n_arr_size)
// ввод (заполнение) двух массивов positive_num_arr[] и negative_num_arr[] длиной p_arr_size и n_arr_size из потока ввода
{
	for (int i = 0; i < 10; i++)
	{
		int num;
		scanf ("%d", &num);
		if (num)
		{
			if (num>0)
			{
				positive_num_arr[*p_arr_size] = num;
				++(*p_arr_size);
			}
			else
			{
				negative_num_arr [*n_arr_size] = num;
				++(*n_arr_size);
			}
		}
	}
}
void arrPrint (int arr[], int len) // вывод (печать) массива arr[] длиной len
{
	for (int i = 0; i < len; i++)
	{
		printf ("%d ", arr [i]);
	}
}

int main(int argc, char **argv)
{
	const int SIZE = 10; // размер массива дл€ 10 целых чисел
	setlocale (LC_ALL, "Rus");
	int positive_num_arr[SIZE];
	int negative_num_arr[SIZE];
	int pos_arr_size = 0, neg_arr_size = 0;
	printf ("¬ведите %d целых чисел через пробел: \n", SIZE);
	positiveNegativeNumInput (positive_num_arr, negative_num_arr, &pos_arr_size, &neg_arr_size);
	arrPrint(positive_num_arr,pos_arr_size);
	arrPrint(negative_num_arr,neg_arr_size);
	//printf ("\n");
	
	return 0;
}

