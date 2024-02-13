/*
 * e6.c
 * ������� �������������� �������
 * ������� ������ �� 12 ��������� � ��������� ������� �������������� ��������� �������.
 * ������ �� �����: 12 ����� ����� ����� ������
 * ������ �� ������: ���� ����� � ������� "%.2f"
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
float Middle (int arr [], int len) // ���������� ������� �������������� ���� ��������� ������� arr[] ������ len
{
	float sum=0;
	for (int i = 0; i < len; i++)
	{
		sum+= arr[i];
	}
	return (sum/(float)len); 
}

int main(int argc, char **argv)
{
	const int SIZE = 12; // ������ ������� ��� 12 ����� �����
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("������� %d ����� ����� ����� ������: \n", SIZE);
	Input (arr,SIZE);
	printf ("C������ �������������� ���� ��������� �����: %.2f ", Middle(arr ,SIZE)); // ����� ������� �������������� ���� ��������� ������� arr[] ������ SIZE
	return 0;
}

