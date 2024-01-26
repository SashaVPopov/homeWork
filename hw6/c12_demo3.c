/*
 * ep_c12_demo3.c
 * Вычислить sin
 * Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
 * sin(x) = x - x3/3! + x5/5! - x7/7! + … (x в радианах)
 * Прототип функции: float sinus(float x)
 * Данные для входа: Одно число от 0 до 90
 * Данные на выход: Вещественное число в формате "%.3f".
 */
#include <stdio.h> 
#include <locale.h> 
#define _USE_MATH_DEFINES
#include <math.h>
 
double sinx(double x)
{
	double Xn = x;
	double sum = 0.0;
	int i = 1;
	do
		{
		sum += Xn;
		Xn *= -1.0 * x * x / ((2 * i) * (2 * i + 1));
		i++;
		}
	while (fabs(Xn) > 0.001);
	return sum;
}
int main(void)
{
	double x;
	scanf("%lf",&x);
	x *= M_PI/180.0;
	printf("%.3f",sinx(x));
	return 0;
}

