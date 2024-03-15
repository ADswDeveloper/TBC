// Chap 9_3.c : 재귀호출 
// 강의 요약 


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

// 무한 루프를 돌리는데 재귀 함수를 사용하지는 않음.
// 왜냐면, 하기 코드를 실행시켜본 것처럼, 메모리가 감당할 수 가 없을 정도로 메모리에 계속 변수가 쌓임.
// void my_func(int n)
//{
//    printf("Level %d, address of variable n = %p\n", n, &n); // stack overflow error 발생.
//    my_func(n + 1);
//
//}
// 종료 조건을 같이 구현해주어야 함.

void my_func(int n)
{
    printf("Level %d, address of variable n = %p\n", n, &n); // stack overflow error 발생.
    if(n < 4) // stop condition
        my_func(n + 1);
    // 호출 못하고 있다가 더 이상 my_func 호출하지 않을 때, 호출. 인셉션 꿈 생각.
    printf("Level %d, address of variable n = %p\n", n, &n); // 다시 돌아오면서 실행.

    //Todo : stop condition
    //Todo : tail recursion
}
// 