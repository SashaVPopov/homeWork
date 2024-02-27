/*
 * g4_hw_les10_1.c
 * По одному разу
 * 
 * В файле .txt даны два слова не более 100 символов каждое, разделенные одним пробелом.Найдите только те символы строк, которые встречаются в обоих словах только один раз.
 * Напечатать их через пробел в файл .txt в лексиграфическом порядке.
 * 
 * Данные на входе: Два слова из маленьких английских букв через пробел. Длина каждого слова не больше 100 символов.
 * Данные на выходе: Маленькие английские буквы через пробел.
 */


#include <stdio.h>


void charInputArr (FILE *fp, char ch,int arrchar []) // заполняет массив сколько раз символ встречается в строке в алфовитном порядке
{
	
	while (((ch = getc(fp))!= EOF)&&(ch!='\n')&&(ch!=' '))
	{
		(arrchar [ch - 'a']) ++;
	}
}

void fprintfOneSame (FILE *fp, int *arr1,int *arr2, int len) // основная запись в файл
{
	for (int i = 0; i <len; i++)
	{
		if ((arr1[i]==1)&&(arr2[i]==1))
			fprintf (fp,"%c",('a'+i));
	}
}
void fprintfCharSame (FILE *fp, int *arr, int len) //тестовая печать массива с символами
{
	for (int i = 0; i < len; i++)
	{
		fprintf (fp,"%d",arr [i]);
	}
}

int main(void)
{
	int CHAR_SMALL_LEN = 26; // кол-во строчных символов в алфовите
	char *input_fn = "input.txt";
	char *output_fn = "output.txt";
	int char_word1 [26] = {0};
	int char_word2 [26] = {0};
	char c = 'a';
	FILE *fp;
	if ((fp = fopen (input_fn, "r"))==NULL)
	{
		perror ("Error");
		return 1;
	}
	charInputArr (fp,c,char_word1);
	charInputArr (fp,c,char_word2);
	fclose(fp);
	if ((fp = fopen (output_fn, "w"))==NULL)
	{
		perror ("Error");
		return 1;
	}
	fprintfCharSame (fp, char_word1, CHAR_SMALL_LEN);
	fprintf (fp,"\n");
	fprintfCharSame (fp, char_word2, CHAR_SMALL_LEN);
	fprintf (fp,"\n");
	fprintfOneSame (fp, char_word1,char_word2, CHAR_SMALL_LEN);
	fclose(fp);
	return 0;
}

