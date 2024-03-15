// Chap 7_3.c : ctype.h 문자함수들
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

int main()
{
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);

        if (isdigit(ch) != 0) // cpp style if
            ch = '*';

        putchar(ch);
    }
    printf("Hello");
    return 0;
}

