/*
 * e5.c
 * ����� ������������� ���������
 * ������� ������ �� 10 ��������� � ��������� ����� ������������� ��������� �������.
 * ������ �� �����: 10 ����� ����� ����� ������
 * ������ �� ������: ���� ����� ����� - ����� ������������� ��������� �������.
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
int Sum (int arr [], int len) // ���������� ����� ������������� ��������� ������� arr[] ������ len
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr [i]>0)
			sum += arr [i];
	}
	return sum; 
}

int main(int argc, char **argv)
{
	const int SIZE = 10; // ������ ������� ��� 10 ����� �����
	setlocale (LC_ALL, "Rus");
	int arr[SIZE];
	printf ("������� %d ����� ����� ����� ������: \n", SIZE);
	Input (arr,SIZE);
	printf ("����� ������������� ��������� �����: %d ", Sum (arr ,SIZE)); //����� ������������� ��������� ������� arr[] ������ SIZE
	return 0;
}

