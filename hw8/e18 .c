/*
 * e18.c
 * ���������� ������ �����
 * � ��������� ����������� ����� �� 2 �� N ����������, ������� �� ��� ������ ������ �� ����� � ��������� �� 2 �� 9.
 * ������ �� �����: ���� ����� ����� N, ������ 2 � �� ������ 10000
 * ������ �� ������: ��� ����� �� 2 �� 9 � �������: 2 ���������� ����� ������� 2 3 ���������� ����� ������� 3 ...
 * ...8 ���������� ����� ������� 8 9 ���������� ����� ������� 9
 */


#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

void arrPrint (int arr[],int count_arr[]) // ����� (������) �������� arr[] � count_arr[] ����������� ���������������
{
	for (int i = 0; i < 8; i++)
	{
		printf ("%d %d ", arr [i], count_arr[i]);
	}
}

void arrMultiCounter (int *arr,int *count_arr, int n) // ����(����������) ������� count_arr  ������� �� ����� �� 2 �� n ������ ������ �� ����� � ��������� �� 2 �� 9
{
	for (int i = 2; i <= n ; i++)
	{
		for (int j = 0; j < 8 ; j++)
		{
			if (!(i%(arr[j])))
			{
				(count_arr [j])++;
			}
		}
	}
}

int main(int argc, char **argv)
{
	setlocale (LC_ALL, "Rus");
	int n;
	int arr2to9[8] = {2}; // �� 2 �� 9
	int count_arr [8] = {0};
	for (int i = 1; i < 8; i++)
	{
		arr2to9[i] = arr2to9[i-1]+1;
	}
	printf ("������� ���� ����� ����� (�� 2 �� 10000): \n");
	scanf ("%d", &n);
	arrMultiCounter (arr2to9,count_arr,n);
	arrPrint(arr2to9,count_arr);
	return 0;
}

