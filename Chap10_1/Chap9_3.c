// Chap 10_2.c : 배열의 기본적인 사용 방법
// 강의 요약 : 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MONTHS 12 // symbolic constant, macro
// 

int main()
{
    int high[MONTHS];
    for (int i = 0; i < MONTHS; i++)
    {
        high[i] = i + 1;
    }

    // Addresses
    {
        printf("%p %p", high, &high[0]); // high는 마치 포인터처럼 작동을 함. high[n] 은 변수처럼 작동.

        for (int i = 0; i < MONTHS; i++)
        {
            printf("%lld\n", (long long)&high[i]); // 주소가 4바이트씩 차이남을 알 수 있음.
        }
    }
    
    // Compiler doesn't check whether indices are valid.
    // 그 이유 : 컴파일러는 프로그래머를 믿는 다는 것이 기본 철학이기 때문.
    {
        high[12] = 4; // high 가 할당받은 메모리를 벗어난 메모리에 값을 할당.
        high[-1] = 123; // 근데 실행은 됨. 왜 실행이 되냐? c철학 : 프로그래머를 믿는다. 의도가 있을거라고 생각.
    }

    // const and array.
    {
        const int arr[10];
    }

    // When array is not initialized
    {
        static int not_init_static[10];
        int not_init[10];
        for (int i = 0; i < 10; i++)
        {
            printf("%d\n", not_init[i]); // 쓰레기 값.
        }
        for (int i = 0; i < 10; i++)
        {
            printf("%d\n", not_init_static[i]); // 전부 0으로 초기화됨. 나중에 storage class 공부할때 다시.. 
        }
        
        int partially_init[4] = { 1,2 };
        for (int i = 0; i < 4; i++)
        {
            printf("%d\n", partially_init[i]); // 부분적으로 할당하면 나머지 0으로 채워줌. 깜박했구나 라고 생각.
        }
    }

    // omitting size. 생략.
    {
        int arr[] = { 1,2,4,8 };//알아서 array size를 4로 만들어줌. 
        // 그럼 길이를 모르지 않냐, 라고 할 수 있는데,
        int length = sizeof arr / sizeof arr[0];  // 알 수 있음. 
    }

    //참고
    // int arr[array size]에서, array size는 반드시 양의 정수이어야 함. 
    // 

    return 0;
}

