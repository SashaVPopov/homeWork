/*
 * ep_c16.c
 * Проверка на простоту
 * int is_prime(int n)
 * Данные для входа: Одно целое не отрицательное число
 * Данные на выход: ВОтвет YES или NO.
 */
#include <stdio.h> 
#include <locale.h> 

 
int is_prime(int n)
{
	int flag = 1;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		flag = 0;
	}
	if ((n==1) && (n==0))
		flag=0;
	return flag;
}
int main()
{
	int a;
	scanf("%d", &a);
	if (is_prime(a))
		printf("YES");
	else
		printf("NO");
	return 0;
}
