// Chap 10_9.c : 포인터 연산 총 정리.
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int arr[5] = { 100,200,300,400,500 };
    int* ptr1, * ptr2, * ptr3;
    // Assignment.
    {
        ptr1 = arr; //포인터 변수엔 주소를 대입할 수 있음. 일반적인 변수와 달리, 배열은 배열명 자체가 주소와 '비슷한' 기능을 함. int i 였으면 ptr1 = &i 로 했어야 함.
        printf("%p, %d, %p\n", ptr1, *ptr1, &ptr1); // dereferencing,, 주소로 가서 값을 가져옴. &ptr1 포인터 변수의 주소도 가져올 수 있음. 포인터도 어쨌든 변수니까 주소를 가짐.
    }
    // Address - of operator &
    {
        ptr2 = &arr[2]; // 3번째 원소
    }
    
    //Differencing
    {   
        ptr3 = ptr1 + 4; // int 4개만큼.
        printf("%td\n", ptr3 - ptr1); // t 변환지정자 -> 포인터의 차이를 출력시 사용.
        
    }

    // 포인터끼리 비교
    {
        double d = 3.44;
        double* ptr_d = &d; // double 포인터와 int 포인터 크기 같음.

        if (ptr1 == ptr3) // warning 발생. 타입 다르다고 뜸. (int *)로 캐스팅ㄱㄱ
        {
            printf("same\n");
        }
        else
        {
            printf("Different\n");
        }
        // 결국 포인터도 변수다! 포인터끼리 비교하려면 타입 같아야 함.(int* , double*은 다름)
        // 할당되는 주소의 형식과 크기는 같으나, 차이가 존재.
    }
    
    printf("Hello");
    return 0;
}

