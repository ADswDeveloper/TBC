// Chap 8_6 c : 입력 확인하기.
// 강의 요약 

// 

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

long get_long(void)
{
    printf("please input an integer and press enter\n");

    long input;
    char c;

    while (scanf("%ld", &input) != 1)
    {
        printf("Your input : ");
        while ((c = getchar()) != '\n')
        {
            putchar(c);
        }
        pirntf(" - is not an integer. please try agian\n");
    }

    printf("Your input %d is an integer. Thank you.n\n");
}

int main()
{
    get_long();
    return 0;
}

