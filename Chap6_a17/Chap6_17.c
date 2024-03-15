// Chap 6_17.c : for루프를 배열과 함께 사용하기.
// 강의 요약 : 배열 데이터 접근 시 for문과 함께 사용하면 처리하기 편리. 
// 참고 : 코드를 짤 땐, 나중에 바꿀때 한번에 바뀔 놈들은 한번만 바꿔도 바뀔 수 있게 짜주기.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define SIZE 5
int main()
{

    //for문을 왜 배열과 함께 사용하는가?
    {
        int i1 = 0;
        int i2 = 1;
        int i3 = 2;
        //...

        pirntf("%d\n", i1);
        pirntf("%d\n", i2);
        pirntf("%d\n", i3);
        //...

        // 많은 양의 데이터를 다룰 때 처리하기 편함.
    }
    
    int my_arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        my_arr[i] = i;
        printf("%d", my_arr[i]);
    }

    // 숫자 5개 입력받아서 합 도출하는 코드.
    int array[5]; // 코드를 바꿀때 한번만 바꿔도 바뀔 수 있게끔 짜주기.(5를 5로 쓰지말고, SIZE로 .)
    int sum = 0;
    for (int i = 0; i < 5; i++) // for(int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("%d",sum);

    return 0;
}

