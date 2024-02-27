/*
 * g8_hw_les10_3.c
 * Числа в массив
 * 
 * В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые числа и иные символы.
 * Требуется все числа, которые встречаются в строке, поместить в отдельный целочисленный массив. 
 * Вывести массив по возрастанию в файл .txt.
 * 
 * Данные на входе: Строка из английских букв, цифр и знаков припинания.
 * Данные на выходе: Последовательность целых чисел отсортированная по возрастанию.
 */


#include <stdio.h>
#include <string.h>

const int LINE_WHIDTH = 1000;

void aSwap (int a[], int i, int j) // поменять элементов массива местами 
{
	int flag = a[i];
	a [i] = a [j];
	a [j] = flag;
}

void sortArray (int size, int a[])
{
	int noSwap;
	for (int i = size-1; i >= 0 ; i--)
	{
		noSwap = 1;
		for (int j=0; j < i; j++)
		{
			if ((a[j]) > (a[j+1]))
			{
				aSwap (a, j , j+1);
				noSwap = 0;
			}
		}
		if (noSwap)
		break;
	}
}

int inputArrNum (FILE *fp, int *arr) // ввод (заполнение) массива arr[] числами, не разделенными символами, из потока ввода 
{
	int i=0;
	char ch;
	while (((ch = getc(fp))!= EOF)&&(ch!='\n'))
	{
		if ((ch>='0')&&(ch<='9'))
		{
			int num = 0;
			do
			{
				num = (num*10) + (ch-'0');
				ch = getc (fp);
			}while ((ch>='0')&&(ch<='9'));
			arr [i++] = num;
			if ((ch == EOF)&&(ch=='\n'))
				break;
		}
	}
	return i;
}
void fprintfArr (FILE *fp, int *arr, int len) //тестовая печать массива с символами
{
	for (int i = 0; i < len; i++)
	{
		fprintf (fp,"%d ",arr [i]);
	}
}
int main(void)
{
	char *input = "input.txt";
	char *output = "output.txt";
	int arr_num [LINE_WHIDTH];
	int len;
	FILE *fp;
	fp = fopen (input,"r");
	len = inputArrNum (fp, arr_num);
	fclose (fp);
	sortArray (len, arr_num);
	fp = fopen (output, "w");
	fprintfArr (fp, arr_num,len);
	fclose(fp);
	return 0;
}

