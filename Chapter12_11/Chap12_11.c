// Chap 12_11.c : 함수의 저장 공간 분류
// 강의 요약 : 함수는 기본적으로 extern, 파일 내부로 scope를 한정시키고 싶으면
// static을 사용할 것. 
// 이는 모듈화에 도움이 됨. 기능 별 파일에서 각 파일 내부로 함수의 scope를 한정,
// 즉 다른 모듈에서 함수를 못쓰게 하고 싶으면 static으로 선언할 것. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int g_int = 123;
/*
    Storage Classes and function
    - Functions external(by default) or static
    - A function declaration is assumed to be extern
*/

void func();
void fun_second();
// extern void func();
// extern void fun_second(); extern이 생략되있는 형태임.

int main()
{

    func();
    fun_second();
    
    return 0;
}

void func()
{
    // int g_int; // 에러 발생. 지역변수는 초기화 해줘야함.
    // int g_int = 0; // name hiding 발생.
    extern int g_int;
    g_int += 1;
    printf("g_int in fun() %d %p\n", g_int, &g_int);
}

