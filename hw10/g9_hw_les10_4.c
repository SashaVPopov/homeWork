/*
 * g9_hw_les10_4.c
 * Удалить повторяющиеся символы
 * 
 * В файле .txt строка из маленьких и больших английских букв, знаков припинания и пробелов не более 1000 символов. Требуется удалить из нее повторяющиеся символы и все пробелы. 
 * Результат записать в файл .txt.
 * 
 * Данные на входе: Строка из маленьких и больших английских букв, знаков препинания и пробелов не более 1000 символов.
 * Данные на выходе: Строка из маленьких и большиханглийских букв.
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
		if (c == ' ')
			continue;
		else 
			line [count++] = c;
	}
	line [count] = '\0';
	fclose(fp);
	for (int i = 0; i < count; i++ )
	{
		for (int j = i + 1; j < count; j++ )
		{
			if (line [i] == line [j])
			{
				for (int k = j; k < count; k++)
				{
					line [k] = line [k+1];
				}
			count --;
			}
		}
	}
	if ((fp = fopen (output_fn, "w"))==NULL)
	{
		perror ("Error");
		return 1;
	}
	for (int i = 0; i < count; i++)
	{
		fprintf (fp, "%c", line [i]);
	}
	fclose(fp);
	return 0;
}

