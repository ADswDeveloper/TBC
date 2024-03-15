// Chap 12_3.c : 변수의 영역과 연결 상태, 객체의 지속 기간
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

/*
    variable scopes(visibility). (ex visibility -> main 지역변수는 다른 함수에서 안보임.)
    - block, function, function prototype, file(file 전체.)
    file scope를 가지면 보통 전역변수라고 부름. 

*/

int g_i = 123; // global variable.(file scope, file내 모든 곳에서 사용가능)
int g_j;


void func1()
{
    g_i++;
}

void func2()
{
    g_i += 2;
}


int main()
{
    int local = 1234;

    func1();
    func2();

    printf("%d\n", g_i); // 126
    printf("%d\n", g_j); // 0. 초기화되지 않은 전역,정적변수는 0으로 초기화됨.
    printf("%d\n", local); // 1234
    

    

    return 0;
}

