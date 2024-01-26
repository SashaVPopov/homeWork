/*
 * ep_d17_hw_les7_5.c 
 * Функция Аккермана
 * Функция Аккермана определяется рекурсивно для неотрицательных целых чисел m и n следующим образом:
 * A(0,m)     = m + 1;
 * A(n+1,0)   = A(n,1);
 * A(n+1,m+1) = A(n,A(n+1,m));
 * Реализуйте данную функцию по прототипу.
 * int akkerman(int m, int n);
 * Данные для входа: Два неотрицательных целых числа m и n.
 * Данные на выход: Одно целое число.
 */
#include <stdio.h> 
#include <locale.h> 
int akkerman(int n, int m) // int akkerman(int m, int n) - возможно опечатка в задании. Чтобы не было путаници делаю по примеру A(0,m)=m+1;
{
	if (n==0)
	{
		//printf ("n=%d, m =%d \n",n,m);
		printf ("A(0,%d)",m);
		return m+1;
	}
	else if (m==0)
	{
		//printf ("n=%d, m =%d \n",n,m);
		printf ("A(%d,1)\n",n-1);
		return akkerman(n-1,1);
	}
	else
	{
		//printf ("n=%d, m =%d \n",n,m);
		printf ("A(%d,A(%d,%d)",n-1,n,m-1);
		return akkerman(n-1,akkerman(n,m-1));
	}
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int n,m;
	printf("Введите два неотрицательных целых числа m и n через пробел:\n");
	scanf ("%d%d", &n, &m);
	printf ("\n %d",akkerman(n,m));
	
	return 0;
}

