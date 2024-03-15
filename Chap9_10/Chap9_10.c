// Chap 9_10.cpp : 피보나치 예제와 재귀 호출의 장단점
// 강의 요약 : 재귀호출 -> 
// 1, 메모리를 비효율적으로 사용.(메모리 사용의 오버헤드(더 쓰는 것))
// 2, double recursion의 경우, 중복으로 불러옴. 5를 위해 f(4), f(3) 을 계산. f(4)는 다시 f(3)을 불러온다라는 뜻.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

/*
    Fibonacci sequence
    1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

    ex) fibonacci(5) = 3 + 2 = fibonacci(4) + fibonacci(3)
*/
int fibonacci(int number);

int main()
{
    for (int count = 1; count < 13; count++)
        printf("%d ,", fibonacci(count));

    printf("Hello");
    return 0;
}

int fibonacci(int number)
{
    if (number == 1 || number == 2)
    {
        return 1;
    }

    return fibonacci(number - 2) + fibonacci(number - 1);
        
}

// Note : memory inefficiency(스택에 쌓이는 변수 + 함수호출에사용되는 메모리로드) , redundant computation(중복된 호출. 한번만 함수를 호출하는게 아님)
// 구현이 간결해지면 간결해져서 메모리도 더 많이 사용 한다. There is no free lunch!
// 