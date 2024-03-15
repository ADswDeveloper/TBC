// Chap 9_17.c  : 포인터 변수의 크기 
// 강의 요약 : 주소의 크기는 다 같더라.(x86, x64에 따라 차이는 있음.)
// 다양한 자료형에 대한 포인터 변수의 크기가 같음.
// 메모리 주소의 값을 저장하는 것이 포인터이기때문에 이런 현상이 나타남.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    char a = 1;
    float b = 3;
    double c = 5;
    
    char* ptr_a = &a;
    float* ptr_b = &b;
    double* ptr_c = &c;

    printf("%zd %zd %zd\n", sizeof(a), sizeof(b), sizeof(c)); // 1 4 8
    printf("%zd %zd %zd\n", sizeof(ptr_a), sizeof(ptr_b), sizeof(ptr_c)); // 4 4 4
    printf("%zd %zd %zd\n", sizeof(&a), sizeof(&b), sizeof(&c)); // 4 4 4
    printf("%zd %zd %zd\n", sizeof(char*), sizeof(float*), sizeof(double*)); // 4 4 4

    // 4바이트씩.
    // 1바이트형 변수의 주소의 크기나, 4바이트형 변수의 주소의 크기나, 8바이트형 변수의 주소의 크기는 같음.
    // 건물 크기는 달라도 우편 번호는 같은 것과 동일.


    return 0;
}