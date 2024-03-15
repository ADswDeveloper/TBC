// Chap 10_10.c : const와 배열과 포인터
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    // type qualifiers : const, volatile, ... qualify : 자격을 준다. 
    // 값이 변할 수 있는 변수를 값이 고정되는 상수로 한정. 
    const double PI = 3.14159;
    //PI = 2.14159; const 상수는 값을 못 바꿈.
    
    const double arr2[3] = { 2.0, 3.0, 4.0 };
    // arr[0] = 2.3; const 로 선언시 애도 불가.

    const double* pd = arr2;
    //*pd = 3.0; // is equal to pd[0] = 1.0; 배열처럼 대괄호로 접근 가능.
    //pd[2] = 1024.0;

    printf("%f %f", pd[2], arr2[2]); // 1024, 1024
    // 그런데 프로그래머 의도는 arr2를 바꾸지말라고 const 로 해놓은 것. 
    // 근데 주소에 접근해서 값을 바꿔버림.
    // 그래서 const double* pd = arr2; 해버리면 됨.
    
    pd++; // allowed...근데 증감연산자는 또 됨. 
    // 포인터 변수의 값 자체는 바꿀 수 있음.(주소값은 바꿀 수 있음.)
    printf("%f %f", pd[2], arr2[2]); // pd[2] 쓰레기값 나옴.
    // pd++ 했으므로, pd는 배열 첫번째 원소 가리키다가, 두번째 원소를 가리키게됨.
    // 두번째 원소로부터 [2] 만큼 이동하므로, 쓰레기값이 나옴. 

    //pd++ 도 못하게 만들고 싶으면,
    //const double* const pd = arr2; // 이렇게 쓰면됨.
    printf("Hello");
    return 0;
}

