/*
    ep1_b1_les5_demo1.c 
    �������� � ����.
    
    ������ ����������� �����, ������� �������� � ���� ���� ����� �� 1 �� ����� �����.
    ����� �� ������  ������������ 100.
    ������ ��� �����: ���� ����� ����� �� ������������� 100. 
    ������ �� �����: ��� ������� �� ����� �� 1 �� ��������� ����� ���������� ������� ����� � ��� ���.
 */


#include <stdio.h> // ���������� � �������� ����� ����������� ������������ ���� "stdio.h", ������� �������� ����������� ������� �����/������
#include <locale.h> // ���������� � �������� ����� ����������� ������������ ���� "local.h", ������� �������� ����������� ������� ����������� ���� 

int main(int argc, char **argv)
{
	setlocale (LC_ALL, "Rus");
	 
    
    int a;    // ���������t ���������� ���� char (-128 �� 127)
	printf("������� ����� ����� (�� ������ 100) : \n");
    scanf ("%d", &a); // ������ ��� ����� � �������� �� �� ������ a � b
    //printf ("�������� ����� %d \n",a); // ����� ����� �� ������ ���������� a 
    for (int i = 1; i<=a; i++)
    {
		printf ("%d %d %d\n",i,i*i,i*i*i); // ����� ������������� � ������������ ����� � ������� �����������
		
	}
    //	
		
	return 0;
}
