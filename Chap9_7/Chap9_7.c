// Chap 9_7 : 재귀호출과 스택

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

void my_func(int n);

int main()
{
    my_func(1);
    return 0;
}


void my_func(int n)
{
    printf("Level %d, address of variable n = %p\n", n, &n); 
    if (n < 4) 
        my_func(n + 1);
    printf("Level %d, address of variable n = %p\n", n, &n);
}
