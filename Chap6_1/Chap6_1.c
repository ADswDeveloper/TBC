// Chap 6_1.c : 
// ���� ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int sum = 0;
    /*while (1)
    {
        int input;
        int i = scanf("%d", &input);
        if (i == 0)
        {
            printf("%d", sum);
            break;
        }

        else if (i == 1)
        {
            if (count == 0)
            {
                printf("Enter an integer (q to quit) : %d\n", input);
            }
            else
            {
                printf("Enger next integer (q to quit) : %d\n", input);
            }
        }
        sum += input;
        count++;
    }*/

    printf("Enter an integer (q to quit) : ");
    while (1)
    {
        int input;
        int i = scanf("%d", &input);
        if (i == 0)
        {
            printf("sum = %d", sum);
            break;
        }

        else if (i == 1)
        {
            printf("Enger next integer (q to quit) : ");
        }
        sum += input;
    }
    
    // C style shorcut
    // while(scanf("%d", &num) == 1) { }
    // �̰� ������ scanf �ι����� ���ŷο��� �ذ��� �� ����. 
    // �׻� �ݺ��Ǵ� �κ��� ��� �ذ����� ���... �Լ��� ���ų� ������ c style shortcut ���ų�..
    return 0;
}

