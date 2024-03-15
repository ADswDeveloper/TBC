// Chap 8_8.c : 내가만든코드
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main1()
{
    char c;

    while (1)
    {
        printf("Enter the letter of your choice: \n");
        printf("a. avengers\tb.beep\n");
        printf("c. count\tq.quit\n");
        c = getchar();

        if (c == 'a')
        {
            printf("Avengers assemble!\n");
        }
        else if (c == 'b')
        {
            putchar(7);
        }
        else if (c == 'c')
        {
            printf("Entet an integer :\n");
            int a;
            scanf("%d", &a);
            for (int i = 1; i <= a; i++)
            {
                printf("%d\n", i);
            }
        }
        else if(c == 'q')
        {
            break;
        }
        else
        {

        }
        getchar();
    }
    return 0;
}

