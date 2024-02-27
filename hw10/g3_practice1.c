/*
 * g3_practice1.c
 * Последний номер символа
 * 
 * В файле .txt дана строка из не более 1000 символов. Показать номера символов, совпадающих с последним символом строки.
 * Результат записать в файл .txt.
 * 
 * Данные на входе: Строка не более 1000 символов.
 * Данные на выходе: Целые числа через пробел - номера символов, который совпадают с последним символом строки.
 */


#include <stdio.h>

const int LINE_WHIDTH = 1000;

int main(void)
{
	char *input_fn = "input.txt";
	char *output_fn = "output.txt";
	char line[LINE_WHIDTH];
	char c;
	FILE *fp;
	if ((fp = fopen (input_fn, "r"))==NULL)
	{
		perror ("Error");
		return 1;
	}
	int count = 0;
	while (((c = getc(fp))!= EOF)&&(c!='\n'))
	{
		line [count++] = c;
	}
	line [count] = '\0';
	fclose(fp);
	if ((fp = fopen (output_fn, "w"))==NULL)
	{
		perror ("Error");
		return 1;
	}
	for (int i = 0; i < count-1; i++)
	{
		if ((line [i])==(line [count-1]))
		fprintf (fp,"%d ",i);
	}
	fprintf (fp, "%c ", line [count-1]);
	fclose(fp);
	return 0;
}

