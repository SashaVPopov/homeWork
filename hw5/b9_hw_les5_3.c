/*
    ep1_b9_hw_les5_3.c 
    ��� ����� ������.
    
    ������ ����� ����� � ����������, ����� ��, ��� ��� ��� ����� ������.
    ������ ��� �����: ���� ����� �����
    ������ �� �����: ���� ����� YES ��� NO.
 */


#include <stdio.h> // ���������� � �������� ����� ����������� ������������ ���� "stdio.h", ������� �������� ����������� ������� �����/������
#include <locale.h> // ���������� � �������� ����� ����������� ������������ ���� "local.h", ������� �������� ����������� ������� ����������� ���� 

int main(int argc, char **argv)
{
	setlocale (LC_ALL, "Rus");
	 
    
    int a;    // ���������� ������������� ���������� 
	printf("������� ����� �����: \n");
    scanf ("%d", &a); // ������� ����� � �������� ��� �� ������ a
    //printf ("��������� ����� %d \n",a); // ����� ����� �� ������ ���������� a 
    for (; a>0 ;a/=10)
    {
		//printf ("%d\n",((a%10)%2));
		if ((a%10)%2) 
		{
			printf ("NO\n");
			return 0;
		}
	}
    printf ("YES\n"); // ����� ������ �����		
		
	return 0;
}

