// Chap 9_3.cpp : 
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

struct my_data {
    int a;
    char c;
    float arr[2];
};


int main()
{
    struct my_data d1 = { 1234, 'A', };
    d1.arr[0] = 1.1f;
    d1.arr[1] = 2.2f;
    
    printf("%d %c %lld\n", d1.a, d1.c, (long long)d1.arr); // 36
    printf("%f %f \n", d1.arr[0], d1.arr[1]);
    printf("%lld %lld \n", (long long)&d1.arr[0], (long long)&d1.arr[1]); // 36, 40

    struct my_data d2 = d1; // d2에 d1 대입 -> 값들이 '복사'되서 들어감.

    printf("%d %c %lld\n", d2.a, d2.c, (long long)d2.arr); // 12
    printf("%f %f \n", d2.arr[0], d2.arr[1]);
    printf("%lld %lld \n", (long long)&d2.arr[0], (long long)&d2.arr[1]); // 12, 16

    // 각 구조체에 들어있는 배열은 다른 배열. 즉, 주소가 다름.

    printf("Hello");
    return 0;
}

