<<<<<<< HEAD
/*
 * ep_d10_demo.c 
 * Проверка на простоту
 * Дано натуральное число n>=1. Проверьте, является ли оно, простым. 
 * Программа должна вывести слово YES, если число простое или NO в противном случае.
 * Необходимо составить рекурсивную функцию и использовать ее.
 * int is_prime (int n, int divider)
 * Данные для входа: Одно натуральное число
 * Данные на выход: YES или NO.
 */
#include <stdio.h> 
#include <locale.h> 
int is_prime (int n, int divider)
{
	if (n==divider)
		return 1;
	if ((n>1)&&(n%divider != 0))
		return is_prime(n,divider+1);
	else 
		return 0;
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("Введите целое число:: ");
	scanf ("%d", &a); 
	is_prime(a,2) ? printf ("YES"):printf ("NO"); 
	return 0;
}

=======
/*
 * ep_d10_demo.c 
 * Ïðîâåðêà íà ïðîñòîòó
 * Äàíî íàòóðàëüíîå ÷èñëî n>=1. Ïðîâåðüòå, ÿâëÿåòñÿ ëè îíî, ïðîñòûì. 
 * Ïðîãðàììà äîëæíà âûâåñòè ñëîâî YES, åñëè ÷èñëî ïðîñòîå èëè NO â ïðîòèâíîì ñëó÷àå.
 * Íåîáõîäèìî ñîñòàâèòü ðåêóðñèâíóþ ôóíêöèþ è èñïîëüçîâàòü åå.
 * int is_prime (int n, int divider)
 * Äàííûå äëÿ âõîäà: Îäíî íàòóðàëüíîå ÷èñëî
 * Äàííûå íà âûõîä: YES èëè NO.
 */
#include <stdio.h> 
#include <locale.h> 
int is_prime (int n, int divider)
{
	if (n==divider)
		return 1;
	if ((n>1)&&(n%divider != 0))
		return is_prime(n,divider+1);
	else 
		return 0;
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a;
	printf("Ââåäèòå öåëîå ÷èñëî: ");
	scanf ("%d", &a); 
	is_prime(a,2) ? printf ("YES"):printf ("NO"); 
	return 0;
}

>>>>>>> 50d092cf354843ddc37e949cb799fe76c4eb1143
