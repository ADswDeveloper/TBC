// Chap 8_4.c : ����� �������̽��� ģ���ϰ�'
// ���� ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <conio.h>

int main()
{
    int count = 0;
    char c;
    char h;
    //while (1)
    //{
    //    printf("Current count is %d, Continue? (y/n)\n",count);

    //    if ( (c = getchar()) == 'n')
    //        break;
    //    while ((h = getchar()) != '\n')
    //        continue;
    //    // 

    //    // h = getchar(); //�̷��� getchar() �Һ����ָ�, 'y\n' �� �Է����� ���͵� �ι� ������ ���� ���� ������.
    //    count++;
    //}

    int d;
    while (1)
    {
        printf("Current count is %d, Continue? (y/n)\n", count);
        d = getchar();

        if (d == 'n')
            break;
        else if (d == 'y')
            count++;
        else
            printf("please input y or s\n");

        while (getchar() != '\n')
        {
            continue;
        }
        
    }
    
    

    // ����ڴ� ����� �� ���� ������� ����� ��. 
    // �ű⿡ ��� �������� ����س����鼭 ���α׷��� �ϴ°� ����.
    return 0;
}

