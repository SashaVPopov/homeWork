/*
 * e19_hw_les8_7.c
 * ����� �� �������
 * ������� � ������� ���������� �����, �������� � ���������� ������ ������������ ����� N.
 * ������ �� �����: ���� ����������� ����� N
 * ������ �� ������: ����� ����� ������
 */

#include <stdio.h> 
#include <locale.h> 

void arrPrint (int arr[], int len) // ����� (������) ������� arr[] ������ len
{
	for (int i = 0; i < len; i++)
	{
		printf ("%d ", arr [i]);
	}
}

int countNum (int num) // ������� ���������� ���� � �����
{
	int count = 1;
	if (num>0&&num>9)
	{
		count=countNum(num/10)+1;
		
	}
	return count;
}
void arrNumInput (int *arr, int n, int len) // ���� (����������) ������� arr[] ������ len ������� ����� n
{
	for (int i = len-1; i >= 0; i--,n/=10)
	{
		arr[i] = (n%10);
	}
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int n;
	printf("������� ����� �����:\n");
	scanf ("%d", &n);
	printf ("\n");
	//printf ("%d ",countNum (n));
	int arr[countNum (n)];
	arrNumInput (arr,n,countNum (n));
	arrPrint(arr,countNum (n));
	return 0;
}
