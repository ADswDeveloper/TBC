// Chap 10_13.c : 포인터의 배열과 2차원 배열
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    {
        // Two of 1D arrays.
        int arr0[3] = { 1,2,3 };
        int arr1[3] = { 4,5,6 };

        int* ptr = arr0;
        printf("%p %p %p", arr0, &arr0, ptr);

        int* parr[2] = { arr0, arr1 }; // array of pointers
        // 포인터가 담길수 있는 공간을 2개 확보한 배열. 포인터의 배열.

        for (int j = 0; j < 2; ++j)
        {
            for (int i = 0; i < 3; ++i)
            {
                printf("%d(==%d, %d)", parr[j][i], *(parr[j] + i), *(*(parr + j) + i));
            }
        }
    }
    // 배열명은 포인터 이름처럼 사용할 수 있다. 
    {
        int arr[2][3] = { {1, 2, 3}, {4,5,6} };

        int* parr0 = arr[0];
        int* parr1 = arr[1];

        //혹은
        int* parr[2];
        parr[0] = arr[0];
        parr[1] = arr[1];
    }

    {
        int arr[2][3] = { {1, 2, 3}, {4,5,6} };
        int* parr[2]; // parr 은 8바이트 공간 매모리 첫 주소.
        parr[0] = arr[0];
        parr[1] = arr[1];

        printf("&p\n", &parr[0]); // 애 만 다르고.
        printf("&p\n", parr[0]); // 나머지 다 같음.
        printf("&p\n", arr);
        printf("&p\n", &arr[0]);
        printf("&p\n", arr[0]);
        printf("&p\n", &arr[0][0]);
    }
    
    // 포인터 배열 사용 예시- 문자열.
    {
        char* name[] = { "Aladdin", "Jasmine", "Magic Carpet", "Genie" };
        // name이라는 char타입에 대한 포인터의 배열에는, A가 저장된 위치, J가 저장된 위치, .. , G가 저장된 위치가 들어감.
        // name안에는 4개의 char* 포인터가 존재. 
        
        const int n = sizeof(name) / sizeof(char*);// 4
        // name 전체의 크기 나누기 char* 포인터 크기..
        // name 은 포인터의 배열임을 상기하시오! 포인터크기 * 포인터(원소)개수 / 포인터크기

        for (int i = 0; i < n; i++)
        {
            printf("%s at %u\n", name[i], (unsigned)name[i]); // %s로 하면, 주소지만 문자열이 출력됨.
        }

        char aname[][15]= {"Aladdin", "Jasmine", "Magic Carpet", "Genie", "Jafar"};
        const int n = sizeof(name) / sizeof(char[15]);// 5
        for (int i = 0; i < n; i++)
        {
            printf("%s at %u\n", aname[i], (unsigned)&aname[i]); // %s로 하면, 주소지만 문자열이 출력됨.
        }

    }


    printf("Hello");
    return 0;
}

