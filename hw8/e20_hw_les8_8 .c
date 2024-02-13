/*
 * e20_hw_les8_8.c
 * ����������� �����
 * ����������� ����� � ����� ���, ����� ���������� ������������ �����.
 * ������ �� �����: ���� ����� ��������������� �����
 * ������ �� ������: ����� ��������������� ����� ���������� �� ��������� ���������� ��� ���������� ����
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
void arrSwap (int *arr, int i, int j) // �������� ��������� ������� ������� 
{
	int flag = arr[i];
	arr [i] = arr [j];
	arr [j] = flag;
}
void arrSort (int *arr, int len) // ���������� ������� �� �������� (��� ������ ������� ���������� ������������ �����)
{
	int noSwap;
	for (int i = len-1; i >= 0 ; i--)
	{
		noSwap = 1;
		for (int j=0; j < i; j++)
		{
			if ((arr[j]) < (arr[j+1]))
			{
				arrSwap (arr, j , j+1);
				noSwap = 0;
			}
			//arrPrint(arr,len);
			//printf ("\n");
		}
		if (noSwap)
		break;
	}
}
int numItemArr (int arr[], int len) // ���������� ����� �� �������� �� ��������� ������� arr[] ������ len
{
	int res = 0;
	for (int i = 0; i < len; i++)
	{
		res *=10;
		res += arr [i];
	}
	return res;
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
	arrSort (arr,countNum (n));
	//arrPrint(arr,countNum (n));
	//printf ("\n");
	printf ("%d ",numItemArr (arr,countNum (n)));
	return 0;
}
