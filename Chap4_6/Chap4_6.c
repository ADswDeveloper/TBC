// Chap4_6.cpp : 명백한 상수들

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
// limits.h 가보면 자료형의 min,max값이 #define 으로 정의되어있음.
// 프로그래머들이 자료형 범위헷갈릴때 편하게 쓸 수 있음.
#include <float.h>

#define PI 3.141592 // manifest constants, symbolic constatns

// define 이용해 선언된 상수를 manifest constants 라고 부름.
// 명백한 상수들 이라는 뜻. 기호 사용해서 상수하니 obvious 하다.
// 

int main()
{
    printf("Biggest int is %d\n", INT_MAX); // 헤더에서 가져와서 복사붙여넣기.
    return 0;
}

