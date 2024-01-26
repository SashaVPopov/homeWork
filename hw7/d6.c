<<<<<<< HEAD
/*
 * ep_d6_decided.c 
 * Строка наоборот
 * Дана строка, заканчивающаяся символом точка ".". Напечатать строку наоборот.
 * Реализовать рукерсивную функцию, которая считывает строку и печатает строку наоборот.
 * void reverse_string ()
 * Данные для входа: Строка из английских букв и знаков препинания. В конце строки символ ".".
 * Данные на выход: Исходная строка задом наперед.
 */
#include <stdio.h> 
#include <locale.h> 
void reverse_string (void)
{
	char c;
	if ((c=getchar())!= '.')
	{
		reverse_string ();
	}
	if (c != '.')
	{
		putchar (c);
	}
	
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	reverse_string ();
}

=======
/*
 * ep_d6_decided.c 
 * Строка наоборот
 * Дана строка, заканчивающаяся символом точка ".". Напечатать строку наоборот.
 * Реализовать рукерсивную функцию, которая считывает строку и печатает строку наоборот.
 * void reverse_string ()
 * Данные для входа: Строка из английских букв и знаков препинания. В конце строки символ ".".
 * Данные на выход: Исходная строка задом наперед.
 */
#include <stdio.h> 
#include <locale.h> 
void reverse_string (void)
{
	char c;
	if ((c=getchar())!= '.')
	{
		reverse_string ();
	}
	if (c != '.')
	{
		putchar (c);
	}
	
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	reverse_string ();
}

>>>>>>> 50d092cf354843ddc37e949cb799fe76c4eb1143
