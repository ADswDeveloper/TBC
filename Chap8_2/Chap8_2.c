// Chap 8_2.c : 파일의 끝
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{   
    //stream -> 데이터의 흐름.

    int c;
    //EOF랑 다른 동안
    while ((c = getchar()) != EOF) // EOF : -1로 되어있음.
    {
        putchar(c);
    }
    //더 이상 입력받을게 없다 라고하면 -1반환. 라고 알려줌. 누구에게? os에게.
    // getchar의 eof -> ctrl + z
    return 0;
}

