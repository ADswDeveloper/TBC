// Chap 9_3.cpp : 함수의 자료형과 반환값
// 강의 요약 : return 만나면 함수 종료. 함수 자료형은 default값이 int.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int_min(int, int); // int 반환형은 생략 가능. 컴파일러도 반환형 없으면 int라고 인식.

int main()
{
    int i1, i2;

    while (1)
    {
        printf("Input two integers : ");
        if (scanf("%d %d", &i1, &i2) != 2) break;
        int lesser = int_min(i1, i2);
        printf("The lesser of %d and %d is %d\n", i1, i2, lesser);
    }
    
    printf("Hello");
    return 0;
}

int int_min(int i, int j)
{
    int min; // 지역 변수.
    if (i < j)
        min = i;
    else
        min = j;
    return min;
}