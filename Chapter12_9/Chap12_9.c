// Chap 12_9.c : 정적 변수의 내부 연결 internal linkage. 
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int g_int = 123; // defining declaration. 은 한곳에서만 가능..

static int sg_int; // 이러면 다른 파일에서 extern int sg_int; 로 referencing declaration. 해도 링크에러발생.
// static 키워드로 외부 파일과 링키지 막아줌. 

int main()
{
    
    printf("Hello");
    return 0;
}

