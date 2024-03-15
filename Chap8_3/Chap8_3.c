// Chap 8_3.c : 입출력 방향 재지정
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    //printf("I love apple.\n");

    char str[100];
    scanf("%s", str);
    printf("I love %s\n", str);


    // Chap8_3.exe > output.txt 출력방향 재지정
    // Chap8_3.exe < Input.txt 입력방향 재지정

    return 0;
}

