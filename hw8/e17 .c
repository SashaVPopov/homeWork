/*
 * e17.c
 * ������ ���� ���
 * ��� ������ �� 10 ���������. � ������� ����� ��������, ������� � ��� ����������� ������ ���� ���. � ������� �� �� �����.
 * ������ �� �����: 10 ����� ��������� ������� ����� ������
 * ������ �� ������: ��������, ������� ����������� ������ ���� ��� ����� ������. 
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

void arrNumOnlyOnce (int *arr, int len) // ������� ����� �� �������, ������� � ��� ����������� ������ ���� ���
{
	int count_arr [len];
	for (int i = 0; i < len ; i++)
	{
		count_arr [i] = arrNumCount (arr, i, len); //���������� ������� count_arr[], ������� ��� ����������� ������� � ������� arr[]
		if (count_arr [i]==1)
		{
			printf ("%d ",arr [i]);
		}
	}
}

int main(int argc, char **argv)
{
	const int SIZE = 10; // ������ ������� ��� 10 ����� �����
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("������� %d ����� ����� ����� ������: \n", SIZE);
	arrInput (arr, SIZE);
	arrNumOnlyOnce (arr, SIZE);
	return 0;
}

