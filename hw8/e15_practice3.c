/*
 * e15_practice3.c
 * ������������� � �������������
 * ������� 10 ����� � ��������� �� -500 �� 500 � ��������� �� ���� ��������:
 * � ���� �������� ������ �������������, �� ������ - �������������. ����� ������ 0 ������������.
 * ������� �� ����� ��� �������� ����� ��������.
 * ������ �� �����: 10 ����� ����� ����� ������
 * ������ �� ������: ������ ������������� �����, ����� ������������� �����, ����� ������
 */


#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

void positiveNegativeNumInput (int *positive_num_arr,int *negative_num_arr, int *p_arr_size, int *n_arr_size)
// ���� (����������) ���� �������� positive_num_arr[] � negative_num_arr[] ������ p_arr_size � n_arr_size �� ������ �����
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
void arrPrint (int arr[], int len) // ����� (������) ������� arr[] ������ len
{
	for (int i = 0; i < len; i++)
	{
		printf ("%d ", arr [i]);
	}
}

int main(int argc, char **argv)
{
	const int SIZE = 10; // ������ ������� ��� 10 ����� �����
	setlocale (LC_ALL, "Rus");
	int positive_num_arr[SIZE];
	int negative_num_arr[SIZE];
	int pos_arr_size = 0, neg_arr_size = 0;
	printf ("������� %d ����� ����� ����� ������: \n", SIZE);
	positiveNegativeNumInput (positive_num_arr, negative_num_arr, &pos_arr_size, &neg_arr_size);
	arrPrint(positive_num_arr,pos_arr_size);
	arrPrint(negative_num_arr,neg_arr_size);
	//printf ("\n");
	
	return 0;
}

