/*
    ep1_b0.c ����� ���� �����.
    �� ����������� ������ ����� �������� ��� ����� �����, �� ������ -32000 � �� ������ 32000.
    �� ����������� ������ ������ ����������� ����� ���� �����.
    ������ ��� �����: ����� �������� �� ������. ���������� ������� ����� ������ � ����� ���� �����������. ����� ������ � ���� �����������. 
    ������ �� �����: ����� �����
 */


#include <stdio.h> // ���������� � �������� ����� ����������� ������������ ���� "stdio.h", ������� �������� ����������� ������� �����/������
#include <locale.h> // ���������� � �������� ����� ����������� ������������ ���� "local.h", ������� �������� ����������� ������� ����������� ���� 

int main(int argc, char **argv)
{
	setlocale (LC_ALL, "Rus");
	 
    
    short int a, b;    // ���������� ������������� ����������
	printf("������� ��� ����� ����� (�� -32000 �� 32000) ����� ������ : \n");
    scanf ("%hd%hd", &a, &b); // ������ ��� ����� � �������� �� �� ������ a � b
    //printf ("������ ����� %h\n",a); // ����� ����� �� ������ ���������� a 
    //printf ("������ ����� %h\n",b); // ����� ����� �� ������ ���������� b
   
    //printf ("������������ ����� %h\n",((a>b)?a:b)); // ����� ������������� �����
    //printf ("����������� ����� %h\n",((a<b)?a:b)); // ����� ������������ �����
    printf ("%hd\n",(a+b)); // ����� ������������� � ������������ ����� � ������� �����������
		
		
	return 0;
}

