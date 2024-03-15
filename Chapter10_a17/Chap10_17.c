// Chap 10_17.c : 가변길이 배열.
// 강의 요약 


// 가변길이 배열이라고 해서, 이미 선언한 배열의 길이가 변하는 것은 아님. 
// 한번 길이가 정해진 배열은 길이가 고정.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n = 5;
    //float my_arr[n]; // 비주얼 스튜디오에서는 지원하지 않음.
    float my_arr[5];
    for (int i = 0; i < n; i++)
    {
        my_arr[i] = (float)i;
    }


    // VLA.. Variable length array
    // c언어 발전과정에서 이런것도 거쳤구나 정도..

    printf("Hello");
    return 0;
}

