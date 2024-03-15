// Chap 10_8.c : 두 개의 포인터로 배열을 함수에게 전달해주는 방법
// 강의 요약 
// 1. 어쨌든 double average(double* start) , start는 average함수에서 받을 때, 포인터로 받음.
// 2. 근데 마침 arr, 변수명은 배열의 첫번째원소의 주소임. 마치 포인터 변수처럼 동작하는 놈이므로 함수에 인자로 들어감.
// 3. 또, 배열은 순차적으로(일렬로) 메모리를 사용한다는 특징 때문에 포인터 연산이 가능해짐. 
// 4. 이 성질을 이용해 Chap10_8.c에서 average 함수에서 원소의 주소(arr1, arr1 + 5)를 직접 인자로 넣어주고, 포인터 연산을 통해 인자로 들어온 배열 원소에 접근
// 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

double average(double*, double*);

int main()
{
    double arr1[5] = { 10,13,12,7,8 };
    printf("Avg = %f\n", average(arr1, arr1 + 5)); // '포인터 + 정수' 꼴이므로, 여기서 정수는 int 리터럴 5가 아니라, int 단위 * 5 만큼 주소가 더해짐.
    return 0;
}

// 사실 많이 쓰는 프로토타입 형태는 아님. (double arr[], int n) 요렇게 많이 사용.
double average(double* start, double* end) // 아 double형 포인터변수가 들어오겠구나 , 내지는 double 형 배열이 들어오겠구나.
{   
    double sum = 0.0;
    int count = end - start; // 주의 : start는 while문 안에서 변해서 미리 반복문 들어가기 전에 계산해놔야 함.
    while (start < end)
    {
        sum += *start++;
        //count++;
    }
    sum = sum / (double)count;

    return sum;
}
