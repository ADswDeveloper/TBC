// Chap 9_9.c : 이진수 변환 예제
// 이진수 십진수 보고 싶으면 앞 강의 보기. 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>



/*
*   10을 이진수로 변환.
    10
    10 / 2 =5, remainder = 0
    5 / 2 = 2, remainder = 1
    2 / 2 = 1, remainder = 0
    1 / 2 = 1, remainder = 1
*/

void print_binary(unsigned long n);
void print_binary_loop(unsigned long n);

int main()
{
    unsigned long num = 10;
    print_binary(num);
    print_binary_loop(num);
    printf("\n");
    return 0;
}

void print_binary(unsigned long n) /// 반대로 나오긴 함.
{   
    while (1)
    {
        int quotient = n / 2;
        int remainder = n % 2;
        printf("%d", remainder);
        n = quotient;
        if (n == 0) break;
    }
    printf("\n");
}

void print_binary_loop(unsigned long n) // n을 2로 나눈 나머지값 구하고 f(n/2) 실행 후 나머지 print.
{
    int remainder = n % 2;
    if (n >= 2)
    {
        print_binary_loop(n / 2);
    }
    printf("%d", remainder);
    // 스택에 쌓였다가 순차적으로 반납하는 상황 생각. 자기 자신을 만나면 타고 들어가서 멈춰있다가 자기 자신 이후 코드부터 실행되는 상황 생각.
}