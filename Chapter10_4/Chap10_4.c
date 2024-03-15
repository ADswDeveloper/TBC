// Chap 10_4.c : 포인터와 배열
// 강의 요약 : arr를 포인터 변수에 선언해서, 포인터 연산을 통해 배열 원소 접근 가능.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int arr[10]; // 이렇게 잘 안씀. 나중에 동적할당을 더 많이 사용.
    
    int num = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < num; i++)
    {
        arr[i] = (i + 1) * 100;
    }
    
    // 포인터 변수, arr , arr[0] 모두 주소 같음.
    int* ptr = arr; // arr도 주소니까 포인터 변수에 대입 가능. 
    printf("%p %p %p\n", ptr, arr, &arr[0]); // 포인터 끼리 빼는 것.
    
    // 포인터 연산
    ptr += 2;
    printf("%p %p %p\n", ptr, arr, &arr[2]); //8만큼 차이남(10진수 상으로.. 16진수 헷갈리지 말기)
    //arr += 2; 포인터 변수에 할당해서 포인터 연산을 하는 건 괜찮은데, arr은 안됨. 배정받은 주소에다 2더하면 배열 사라질건가...


    // 포인터 dereference.
    printf("%d %d %d\n", *(ptr + 1), *(arr + 3), arr[3]); // 4번째 원소.
    
    {
        int* ptr = arr;
        for (int i = 0; i < num; i++)
        {
            //printf("%d %d\n", *ptr++, arr[i]); // * 연산자가 먼저 수행되고 ++가 수행됨. *(ptr++) 와 같음. 먼저 ptr 역참조 후 ptr을 ++.
            //printf("%d %d\n", *ptr, arr[i]);
            //ptr++;
            // 헷갈리면 이렇게 해도됨. 둘이 크게 차이 없음.
            printf("%d %d\n", *ptr + i, arr[i]); 
        }
    }
   


    printf("Hello");
    return 0;
}

