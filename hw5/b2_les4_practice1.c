/*
    ep1_b2_les4_practice1.c 
    �������� �����.
    
    ������ ��� ����� ����� a � b (a<=b) � ������� �������� ���� ����� �� a �� b.
    ����� �� ������ �� ������  ������������ 100.
    ������ ��� �����: ��� ����� ����� �� ������ �� ������ 100. 
    ������ �� �����: �������� ����� �� a �� b.
 */


#include <stdio.h> // ���������� � �������� ����� ����������� ������������ ���� "stdio.h", ������� �������� ����������� ������� �����/������
#include <locale.h> // ���������� � �������� ����� ����������� ������������ ���� "local.h", ������� �������� ����������� ������� ����������� ���� 

int main(int argc, char **argv)
{
	setlocale (LC_ALL, "Rus");
	 
    
    int a, b;    // ���������� ������������� ���������� 
	printf("������� ��� ����� ����� �� ������ (�� ������ 100) (������ ����� ������ �������): \n");
    scanf ("%d%d", &a, &b); // ������� ��� ����� � �������� �� �� ������ a � b
    //printf ("������ ����� %d \n",a); // ����� ����� �� ������ ���������� a 
    //printf ("������ ����� %d \n",b); // ����� ����� �� ������ ���������� b 
    
    for (int i = a; i<=b ;i++)
    {
		//printf ("%d %d\n",i,i*i); // ����� 
		printf ("%d",i*i);
	}
    //	
		
	return 0;
}

