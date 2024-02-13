/*
 * e13_hw_les8_5.c
 * ������ � ����� - ����
 * ������� ������ �� 10 ��������� � �������� � ������ ������ ��� �����, � ������� ������ � ����� ����� (����� ��������) - ����.
 * ������ �� �����: 10 ����� ��������� ������� ����� ������
 * ������ �� ������: ����� ����� ����� ������, � ������� ������ � ����� ����� - ����
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
int secondNumFromEndZero (int arr[],int zeroarr[], int len) 
// ���� (����������) ������� zeroarr[] ���������� �� ������� arr[] ��� ������ ����� ����� � ����� - 0, ����������  ����� ������� zeroarr
{
	int j = 0;
	for (int i = 0; i < len; i++)
	{
		if (!(((arr [i])/10)%10))
		{
		zeroarr [j] = arr [i];
		j++;
		//printf ("%d ", arr [i]);
		}
	}
	return j;
}

int main(int argc, char **argv)
{
	const int SIZE = 10; // ������ ������� ��� 10 ����� �����
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	int zeroarr[SIZE];
	printf ("������� %d ����� ����� ����� ������: \n", SIZE);
	Input (arr, SIZE);
	//arrPrint(arr,SIZE);
	//printf ("\n");
	int zeroarrsize = secondNumFromEndZero (arr,zeroarr,SIZE);
	arrPrint(zeroarr,zeroarrsize);
	return 0;
}

