/*
 * e16_hw_les8_6.c
 * ���� ������
 * ��� ������ �� 10 ���������. ����������, ����� ����� � ������� ����������� ���� �����.
 * �������������, ��� ����� ����� ����� 1.
 * ������ �� �����: 10 ����� ��������� ������� ����� ������
 * ������ �� ������: ���� �����, ������� ����������� ���� ������. 
 */


#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

void arrInput (int arr[], int len) // ���� (����������) ������� arr[] ������ len
{
	for (int i = 0; i < len; i++)
	{
		scanf ("%d", &arr[i]);
	}
}
int arrNumCount (int arr[], int n, int len) // ���������� ������� ��� ����������� n-� ������� � ������� arr ������ len 
{
	int count = 0;
	for (int i = 0; i < len ; i++)
	{
		if (arr[i]==arr[n])
		{
			count++;
		}
	}
	return count;
}

int iMax (int arr[], int len) // ���������� ������ ������� ������������� �����
{
	int max = arr [0];
	int imax = 0;
	for (int i = 0; i < len ; i++)
	{
		if (max < arr[i])
		{
			max = arr [i];
			imax = i;
		}
	}
	return imax;
}

void arrSuperNum (int *arr, int len) // ������� ����� � �������, ������� ����������� ���� �����
{
	int superarr [len];
	for (int i = 0; i < len ; i++)
	{
		superarr [i] = arrNumCount (arr, i, len); //���������� ������� superarr[], ������� ��� ����������� ������� � ������� arr[]
		//printf ("%d ",superarr [i]);
	}
	//printf ("\n");
	printf ("%d ",arr[iMax (superarr, len)]);
}

int main(int argc, char **argv)
{
	const int SIZE = 10; // ������ ������� ��� 10 ����� �����
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("������� %d ����� ����� ����� ������: \n", SIZE);
	arrInput (arr, SIZE);
	arrSuperNum (arr, SIZE);
	return 0;
}

