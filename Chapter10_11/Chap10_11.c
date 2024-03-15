// Chap 10_11.c : 배열 매개변수와 const
// 강의 요약 : 함수 인자로 배열을 받을 시, 해당 함수가 배열의 값을 바꾸는 기능이 아니라면,
// const int arr[] 로 바꿔줘서 휴먼에러를 방지할 수 있다. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
//
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void add_value(int arr[], int n, int val) // 반환형이 void임에도 불구하고 배열 바뀜.
{
    for (int i = 0; i < n; i++)
    {
        arr[i] += val;
    }
}
// 내부적으로 포인터변수로 다루기 때문. 주소로 접근하기 때문에 바꿀 수 있음. 

int sum(const int arr[], const int n) // const로 바꿔놓으면 배열이 바뀌지 않음. 휴먼 에러 방지 가능.
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += arr[i];
        ///total += arr[i]++; // 이렇게 실수(배열 원소에 1씩 더해짐)했다고 치면, const로 잡아줄 수 있음.
    }
    return total;
}


int main()
{
    int arr[] = { 1,2,3,4,5 }; // 해당 scope에서 값이 바뀌면 안되는 배열인 경우, const로 지정해줌.
    const int n = sizeof(arr) / sizeof(arr[0]); // n 도 바뀌면 안된다는 것을 암시해줌.
    return 0;
}

