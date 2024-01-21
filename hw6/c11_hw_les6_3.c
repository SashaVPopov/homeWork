/*
 * ep_c11_hw_les6_3.c 
 * НОД
 * Составить функцию, которая определяет наибольший общий делитель двух натуральных и привести пример ее использования.
 * int nod(int a, int b) 
 * Данные для входа: Два целых положительных числа.
 * Данные на выход: Одно целое число - наибольший общий делитель.
 */
#include <stdio.h> 
#include <locale.h> 
int nod (int a, int b)
{
	int div_a = 2, div_b = 2;
	int sm_a=1, sm_b=1;
	int nod=1;
	//printf ("a_b%d b_a%d\n",a%b,b%a);
	if (a%b==0||b%a==0)
		return (a>b)?b:a;
	while (a!=1)
	{
		if (a%div_a == 0)
		{
			//printf ("diva=%d\n", div_a);
			sm_a = div_a;
			//printf ("sm_a=%d\n",sm_a);
			
			while (b!=1)
			{
				if (b%div_b == 0)
				{
					//printf ("divb=%d\n", div_b);
					sm_b = div_b;
					//printf ("sm_b=%d\n",sm_b);
					b/=div_b;
					if (sm_a == sm_b)
					{
						
						nod*=sm_a;
						//printf ("nod%d\n", nod);
						break;
					}
					else
						break;
				}
				else
				{
					div_b+=1;
				}
			}
			a/=div_a;
		}
		else
		{
			div_a+=1;
		}
	}
	
	return (nod);
}
int main(void)
{
	setlocale (LC_ALL, "Rus");
	int a,b;
	printf("Введите два положительных числа через пробел для поиска НОД: ");
	scanf ("%d%d", &a, &b);
	printf("\nNOD = %d", nod (a,b));
	return 0;
}

