// Chap 9_14.c : 포인터와 코딩 스타일.
// 강의 요약 : 포인터 변수 선언 시,asterisk 위치의 차이는 스타일일 뿐, 차이는 없다. 
// int* a; 의 해석 -> int형 변수의 주소를 담는 포인터 변수 a를 선언.
// int* a = 3; 혹은 int* a; 에서 *는 포인터 변수라고 선언하는 용도
// *a 는 redirection, dereference 의 의미.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    // int *a_ptr vs int* a_ptr; 후자가 cpp 스타일. 그냥 포인터 변수가 아닌 int 변수의 주소를 저장하는 포인터 변수라는 의미가 더 와닿음.
    // int *myptr, sec_ptr; sec_ptr은 포인터 변수아님.

    int* a, b; // a만 포인터 변수, b는 int임. 
    
    // cpp 스타일. cpp가 주류로 사용되서 자동으로 int에 붙어버림.
    int* a; // int 변수의 주소를 저장하는 a
    int* b; // 

   

    printf("Hello");
    return 0;
}

