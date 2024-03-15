// Chap 10_18.c : 복합 리터러과 배열
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int a = 1;
    3;
    3.14f;

    int b[2] = { 3,4 }; // 하나 있을수도 , 두개 있을수도, ..
    (int[2]) {3,4}; // compound literal

    //int c[2] = (int[2]){ 3,4 }; // 요렇겐 못함. 가능할것처럼 보이는데, 불가.

    // 복합 리터럴 쓰이는 곳 : 함수 인자에, 혹은 포인터 초기화 시 넣어줄 수 있음.
    
    printf("%d");

    printf("Hello");
    return 0;
}

