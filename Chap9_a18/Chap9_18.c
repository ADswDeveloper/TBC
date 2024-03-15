// Chap 9_18.c : 포인터형 매개변수
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

// c언어는 어쩔 수 없이 반환값이 하나. 

// 값에 의한 호출.call by value 라고도 부름
void swap(int a, int b) // a의 값이 123, b의 값이 456으로 복사가 된것일뿐, main의 a,b와는 아예 다른 변수.
{   
    printf("%p %p\n", &a, &b); // main의 a,b와 주소도 다름. 
    int temp = a; // a 123 b 456
    a = b; // 
    b = temp;
}

void swap_by_pointer(int* a, int* b) // 포인터를 받도록. 즉 주소를 넣어주도록.
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 123;
    int b = 456;

    // swap. but nothing happen.
    printf("%p %p\n", &a, &b);
    swap(a, b);
    printf("%d %d\n", a, b);

    swap_by_pointer(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

