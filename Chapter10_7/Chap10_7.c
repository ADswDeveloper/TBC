// Chap 10_7.c : 배열을 함수에게 전달해주는 방법
// 강의 요약 : 함수에 배열을 인수로 넘길 때 실제로 넘어가는 것은 배열의 첫 주소, 즉 포인터.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

// 배열의 평균 구하는 함수. 
double avreage(double arr1[5]) // 이렇게 배열을 받을 수 있지 않을까?
{
    printf("Size of array is %zd in fuction avreage\n", sizeof(arr1));
    // real : 4
    // expected : 40(double 8 곱하기 5)
    // 즉, 포인터의 사이즈가 나옴.(x64로 돌려보면 8나옴). 만약 진짜 배열을 받았다면 배열 사이즈인 40이 나왔겠지. sizeof(배열 변수) -> 배열 크기, sizeof(포인터 변수) -> 주소크기 나오니까.
    // 왜 이런 결과가 나왔는가?
    // 
    // 배열의 이름은 포인터와 유사.. 배열 특성상 데이터가 많기 때문에 데이터를 통째로 복사해서 가져오려는게 아니라, 포인터로 받음. 내부적으로 포인터로 처리. 중요중요중요!!
    // 배열의 원소가 100만개라면 함수로 들어올때마다 지역변수로 복사되면 메모리 낭비..
    // 
    // 포인터는 첫 번째 주소.. 인자로 들어가는 array size 5는 아무 쓸모가 없음. 인자로 double arr1[] 을 넣어줘도 같은 결과가 나옴.
    // double avreage(double* arr1) 프로토타입만 바꿔줘도 똑같음. 
    // 하지만 포인터로 받음에도 불구하고, double arr[] 로 받는 이유는, 다른 사람들이 봤을 때 아 여기엔 배열이 들어가는 구나 라고 의미를 전달하기 위함. 
    // 동적할당 사용하면 포인터 쓰는게 더 마음 편해질 것. 

    //double avreage(double *)
    //double avreage(double []) 이렇게도 쓸 수 있음. 두 경우 모두 c 프로그래머라면 아 배열이 들어오고 , 배열 길이까지 넣어주는구나라고 생각할 수 있음.
    // 함수에서 인자로 배열 받을때는 포인터로 받음! 
    // c, cpp 에선 동적 할당 배열 사용 빈번, 이 경우 포인터로 받음. 


    double avg = 0;

    for (int i = 0; i < 5; i++)
    {
        avg += arr1[i];
    }
    return avg / 5;
}

// After refactoring. 
// 배열의 길이를 인자로 전달 -> 함수를 매개변수화, 함수를 확장함. 
double avreage(double arr[], int n) // 항상 조심. 뒤에 []가 있다고 array인가보다 하지 마라, 포인터이기때문에 sizeof 로 배열 길이 알 수 없음. 개수 정보 n을 따로 넣어줘야 함.
{
    double avg = 0;

    for (int i = 0; i < n; i++)
    {
        avg += arr[i];
    }
    return avg / n;
}


int main()
{   // 배열의 평균 구하는 함수. 
    double arr1[5] = { 10,13,12,7,8 };
    double arr2[5] = { 1.8, -0.2, 6.3,13.9,20.5 };
    double arr3[3] = { 1.8, -0.2, 6.3 }; // size is different
    printf("%f\n", avreage(arr1));
    printf("%f\n", avreage(arr2));
    printf("%f\n", avreage(arr3)); // 18482358 이런식으로 이상하게 출력됨. avreage 함수안에서 5 번 돌리기 때문에, arr3에 허용된 인덱스 범위를 넘어서는 곳을 참조.


    printf("Hello");
    return 0;
}

