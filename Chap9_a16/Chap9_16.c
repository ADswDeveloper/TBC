// Chap 9_15.c : 
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

// memory 창에서 실제로 메모리 볼 수 있음. 

int main()
{
    int a = 3, b = 5, c = 7, d = 9;
    int* a_ptr = &a, * b_ptr = &b, * c_ptr = &c, * d_ptr = &d;
    printf("%p %p %p %p", &a, &b, &c, &d); 
    printf("%p %p %p %p", a_ptr, b_ptr, c_ptr, d_ptr);

    
    return 0;
}

