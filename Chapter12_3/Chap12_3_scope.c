// 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

void f1(int hello, double world); // hello와 world의 scope
// function prototype 끝날때까지임. line 8에서 시작해서 line8에서 끝남.
// 이 원리 때문에 변수명 생략가능. 즉, void f1(int, double)로 적을 수 있음.

double func_block(double d)
{
    double p = 0.0; // function block.
    {
        p = 3.14; // block 과 function scope를 구분하는 이유.
    }
    int i;
}

int main()
{
    return 0;
}

