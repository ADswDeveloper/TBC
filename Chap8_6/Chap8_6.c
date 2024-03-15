// Chap 8_6 c : 입력 확인하기.
// 강의 요약 : 사용자는 어떤 입력을 넣을지 예측할 수 없음. 가능한 모든 경우에 대처하는 코드짤 수 있도록.
// 내 의도에 맞게 들어온 입력인지 확인하는 과정 필요.

// 

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

long get_long(void);

int main()
{
    while (1)
    {
        long input = get_long;
        if (1 < input && input < 100)
        {
            printf("Right input. Your input is %d\n", input);
            break;
        } // 원하는 경우만 break로 탈출.
        else
        {
            printf("Wrong input. please try again.");
        } // 1부터 100사이 아니면 무한루프.

    }
    return 0;
}

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
        printf(" - is not an integer. please try agian\n");
    }

    printf("Your input %d is an integer. Thank you.n\n", input);

    return input;
}