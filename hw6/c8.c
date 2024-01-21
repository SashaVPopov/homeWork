/*
 * ep_c8.c
 * Большими буквами
 * Составить функцию, которая переводит латинскую строчную букву в заглавную. И показать пример ее использования
 * Данные для входа: Строка состоящая из английских букв, пробелов и запятых. В конце строки символ точка.
 * Данные на выход: Исходная строка в которой маленькие английские буквы заменены заглавными.
 */
#include <stdio.h> 
#include <locale.h>
char upperCase (char a);
int main(void)
{
	setlocale (LC_ALL, "Rus");
	char input;
	while (1)
	{
		scanf ("%c", &input);
		if (input == '.')
			break;
		printf("%c",upperCase(input));
	
	}
	return 0;
}
char upperCase (char a)
{
	return ((a>='a')&&(a<='z'))? (a - 32):a;
}

