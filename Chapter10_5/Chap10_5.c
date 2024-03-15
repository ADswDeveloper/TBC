// Chap 10_5.c : 2차원 배열과 메모리
// 강의 요약 : 2차원 배열도 메모리 관점에서 보면 1차원으로 쭉 늘어선 형태.
// 따라서 2차원 배열을 포인터 변수에 할당해서 single 배열 접근연산자로 인덱싱 가능. ptr[] 가능.
// 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int arr[2][3] = { {1,2,3},
                      {4,5,6} }; // 중괄호 한개에 몰아넣어도 됨.
    
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%d ", arr[j][i]); // 안쪽 for문 변수를 안쪽 subscript에 넣으면 더 빠름.(for문에서 메모리에 접근할 때, 메모리에 배열이 저장된 순서대로 접근하므로)
        }
        printf("\n");
    }

    // 2차원 배열도 메모리로 보면 1차원임.
    {
        int* ptr = &arr[0][0];
        for (int k = 0; k < 6; k++)
        {
            printf("%d", ptr[k]); // 배열 주소를 포인터 변수에 할당 후, 포인터 변수에[] 로 인덱싱 가능. 내부적으로는 어차피 1차원 배열임.
            // ptr[1] is equal to *(ptr + 1)
        }
    }

    // 3개짜리가 2개. 
    printf("%zd %zd", sizeof(arr), sizeof(arr[0])); // 24 12 나옴. arr[0]은 int 3개짜리 집합.

    // 고차원 배열도 많이 사용함. 
    return 0;
}

