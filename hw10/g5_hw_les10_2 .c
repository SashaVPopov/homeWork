/*
 * g5_hw_les10_2.c
 * Заменить a на b
 * 
 * В файле .txt дана символьная строка из не более 1000 символов. Необходимо заменить все буквы "a" на буквы "b" и наоборот, как заглавные, так и строчные.
 * Результат записать в файл .txt.
 * 
 * Данные на входе: Строка из маленьких английских букв, знаков препинания и пробелов не более 1000 символов.
 * Данные на выходе: Строка из маленьких английских букв, знаков препинания и пробелов.
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
	while (((c = getc(fp))!= EOF)&&(c!='\n')) // почему бы и нет?!
	{
		if (c == 'a')
			line [count++] = 'b';
		else if (c == 'b')
			line [count++] = 'a';
		else if (c == 'A')
			line [count++] = 'B';
		else if (c == 'B')
			line [count++] = 'A';
		else 
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
		fprintf (fp, "%c", line [i]);
	}
	fclose(fp);
	return 0;
}

