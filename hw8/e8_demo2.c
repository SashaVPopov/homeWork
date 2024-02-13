/*
 * e8_demo2.c
 * �������� ������ �����
 * ������� ������ �� 12 ��������� � ��������� �������� ��� ������ ����� �������.
 * ������ �� �����: 12 ����� ��������� ������� ����� ������
 * ������ �� ������: 12 ����� ��������� ������� ����� ������
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
void arrInversion (int *arr, int len) // �������� ��������� �������  
{
	for (int i = 0, j = (len - 1); i < j; i++, j--)
	{
		int flag = arr[i];
		arr [i] = arr [j];
		arr [j] = flag;
	} 
}

int main(int argc, char **argv)
{
	const int SIZE = 12; // ������ ������� ��� 12 ����� �����
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("������� %d ����� ����� ����� ������: \n", SIZE);
	Input (arr, SIZE);
	//arrPrint(arr,SIZE);
	//printf ("\n");
	for (int i = 0; i < 3; i++)
	{
		arrInversion (arr + (i*SIZE/3), SIZE/3);
		arrPrint(arr + (i*SIZE/3), SIZE/3);
	}
	
	return 0;
}

