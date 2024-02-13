/*
 * e1_hw_les8_1.c
 * ������� �������������� �����
 * ������ � ���������� ������ �� 5 ���������, ����� ������� �������������� ���� ��������� �������.
 * ������ �� �����: 5 ����� ��������� ����� ����� ������
 * ������ �� ������: ���� ����� � ������� "%.3f"
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
	const int SIZE = 5; // ������ ������� ��� 5 ����� �����
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("������� %d ����� ����� ����� ������: \n", SIZE);
	Input (arr,SIZE);
	printf ("C������ �������������� ���� ��������� �����: %.3f ", Middle(arr ,SIZE)); // ����� ������� �������������� ���� ��������� ������� arr[] ������ SIZE
	return 0;
}

