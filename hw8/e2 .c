/*
 * e2.c
 * ����� �������
 * ������ � ���������� ������ �� 5 ���������, ����� ������� �� ���� ��������� �������.
 * ������ �� �����: 5 ����� ��������� ����� ����� ������
 * ������ �� ������: ���� ����� �����
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
int Min (int arr [], int len) // ���������� ������������ �� ���� ��������� ������� arr[] ������ len
{
	int min = arr[0];
	for (int i = 1; i < len; i++)
	{
		if (min > arr [i])
			min = arr [i];
	}
	return min; 
}

int main(int argc, char **argv)
{
	const int SIZE = 5; // ������ ������� ��� 5 ����� �����
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("������� %d ����� ����� ����� ������: \n", SIZE);
	Input (arr,SIZE);
	printf ("%d ", Min(arr ,SIZE)); // ����� ������������ �� ���� ��������� ������� arr[] ������ SIZE
	return 0;
}

