/*
    hw_lec3_4.c
    ������ ��� �����, ����� �� ������� ��������������. ����� ���������� ������� �������������� �����.
    ������ ��� �����: ��� ����� ����� ����� ������
    ������ �� �����: ������������ ����� � ������� %.2f
 */


#include <stdio.h> // ���������� � �������� ����� ����������� ������������ ���� "stdio.h", ������� �������� ����������� ������� �����/������
#include <locale.h> // ���������� � �������� ����� ����������� ������������ ���� "local.h", ������� �������� ����������� ������� ����������� ���� 

int main(int argc, char **argv)
{
	setlocale (LC_ALL, "Rus");
	 
    //
    int a, b, c;    // ���������� ������������� ����������
	float d;
	printf("������� ��� ����� ����� ����� ������ : \n");
    scanf ("%d%d%d", &a, &b, &c); // ������ ��� ����� � �������� �� �� ������ a,b,c
    //printf ("������ ����� %d\n",a); // ����� ����� �� ������ ���������� a 
    //printf ("������ ����� %d\n",b); // ����� ����� �� ������ ���������� b
    //printf ("������ ����� %d\n",c); // ����� ����� �� ������ ���������� c
	d = (float)(a+b+c)/3; // ���������� ������� �������������� ���� �����
    printf ("%.2f\n",d); //����� ���������� � ������� %.2f
		
		
	return 0;
}
