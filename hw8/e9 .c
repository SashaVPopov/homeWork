/*
 * e9.c
 * ����������� ����� ������� ������
 * ������� ������ �� 10 ��������� � ��������� ����������� ����� ������ �� 1.
 * ������ �� �����: 10 ����� ��������� ������� ����� ������
 * ������ �� ������: 10 ����� ��������� ������� ����� ������ ��������� �� 1 ������� ����������
 */


#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

void Input (int arr[], int len) // ���� (����������) ������� arr[] ������ len
{
	for (int i = 0; i < len; i++)
	{
		scanf ("%d", &arr[i]);
	}
}
void arrPrint (int arr[], int len) // ����� (������) ������� arr[] ������ len
{
	for (int i = 0; i < len; i++)
	{
		printf ("%d ", arr [i]);
	}
}
void arrSwap (int *arr, int i, int j) // �������� ��������� ������� ������� 
{
	int flag = arr[i];
	arr [i] = arr [j];
	arr [j] = flag;
}
void arrShiftRight (int *arr, int len)
{
	for (int i = len-1; i > 0 ; i--)
	{
		arrSwap (arr, i-1 , i);
		//arrPrint (arr, len);
		//printf("\n");
	}
}

int main(int argc, char **argv)
{
	const int SIZE = 10; // ������ ������� ��� 10 ����� �����
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("������� %d ����� ����� ����� ������: \n", SIZE);
	Input (arr, SIZE);
	arrShiftRight(arr,SIZE);
	arrPrint(arr,SIZE);
	printf("\n");
	return 0;
}

