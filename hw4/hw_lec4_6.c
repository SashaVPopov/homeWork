/*
    hw_lec4_6.c
    ������ ��� �����. 
    ���� ������ ����� ������ �������, �� ��������� �������� ����� Above.
    ���� ������ ����� ������ �������, �� ��������� �������� ����� Less.
    � ���� ����� �����, ��������� ���������� ��������� Equale.
    ������ ��� �����: ��� ����� �����
    ������ �� �����: ���� ������������ ����� : Above, Less, Equale
 */


#include <stdio.h> // ���������� � �������� ����� ����������� ������������ ���� "stdio.h", ������� �������� ����������� ������� �����/������
#include <locale.h> // ���������� � �������� ����� ����������� ������������ ���� "local.h", ������� �������� ����������� ������� ����������� ���� 

int main(int argc, char **argv)
{
	setlocale (LC_ALL, "Rus");
	 
    
    int a, b;    // ���������� ����������
	printf("������� ��� ����� ����� ����� ������ : \n");
    scanf ("%d%d", &a, &b); // ������ ��� ����� � �������� �� �� ������ a � b
    //printf ("������ ����� %d\n",a); // ����� ����� �� ������ ���������� a 
    //printf ("������ ����� %d\n",b); // ����� ����� �� ������ ���������� b
   
    //printf ("������������ ����� %d\n",((a>b)?a:b)); // ����� ������������� �����
    //printf ("����������� ����� %d\n",((a<b)?a:b)); // ����� ������������ �����
    
    if (a==b) printf ("Equal"); //���� ����� �����, ����� Equale.
    else (a>b)?	printf ("Above"):printf ("Less"); // ��������� �������� �� ����� Above ��� Less
		
	return 0;
}

