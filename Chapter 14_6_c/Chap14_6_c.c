// Chap 9_3.cpp : 
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

struct my_data {
    int a;
    char c;
    float* arr;
};


int main()
{
    struct my_data d1 = { 1234, 'A', NULL};
    d1.arr = (float*)malloc(sizeof(float) * 2);
    d1.arr[0] = 1.1f;
    d1.arr[1] = 2.2f;

    printf("%d %c %lld\n", d1.a, d1.c, (long long)d1.arr); // 80
    printf("%f %f \n", d1.arr[0], d1.arr[1]);
    printf("%lld %lld \n", (long long)&d1.arr[0], (long long)&d1.arr[1]); // 80, 84

    struct my_data d2 = d1; // d2에 d1 대입 -> 값들이 '복사'되서 들어감. 그런데 여기는 주소가 복사되서 들어감. 결과적으로 같은 배열을 가리키게 됨. 두 구조체의 배열은 같음.

    printf("%d %c %lld\n", d2.a, d2.c, (long long)d2.arr); // 80
    printf("%f %f \n", d2.arr[0], d2.arr[1]);
    printf("%lld %lld \n", (long long)&d2.arr[0], (long long)&d2.arr[1]); // 80, 84

    // 각 구조체에 들어있는 배열은 식별자만 다를 뿐, 다른 배열. 즉, 주소가 같음.

    printf("Hello");
    return 0;
}
