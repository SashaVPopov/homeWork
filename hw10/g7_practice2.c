/*
 * g7_practice2.c
 * Количество букв
 * 
 * В файле .txt считать символьную строку, не более 1000 символов. Посчитать количество строчных (маленьких) и прописных (больших) букв в введенной строке. 
 * Учитывать только английские буквы. Результат записать в файл .txt.
 * Данные на входе: Строка состоящая из английских букв, цифр, пробелов и знаков припинания.
 * Данные на выходе: Два целых числа. Количество строчных букв и количество заглавных букв.
 */


#include <stdio.h>
#include <string.h>

const int LINE_WHIDTH = 1000;
int countCharRange (char *line,char char_start, char char_end)
{\
	int len = strlen (line), count = 0;
	for (int i = 0; i < len; i++)
	{
		if ((line [i] >= char_start)&&(line [i] <= char_end))
		{
			count ++;
		}
	}
	return count;
}
int main(void)
{
	char *input = "input.txt";
	char *output = "output.txt";
	char line [LINE_WHIDTH];
	FILE *fp;
	fp = fopen (input,"r");
	fscanf (fp,"%[^\n]", line);
	fclose (fp);
	fp = fopen (output, "w");
	fprintf (fp, "%d %d", countCharRange(line,'a','z'),countCharRange(line,'A','Z'));
	fclose(fp);
	return 0;
}

