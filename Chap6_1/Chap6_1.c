// Chap 6_1.c : 
// 강의 요약 

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
    // 이걸 넣으면 scanf 두번쓰는 번거로움을 해결할 수 있음. 
    // 항상 반복되는 부분을 어떻게 해결할지 고민... 함수를 쓰거나 위같은 c style shortcut 쓰거나..
    return 0;
}

