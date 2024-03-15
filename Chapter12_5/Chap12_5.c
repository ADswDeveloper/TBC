// Chap 12_5.c : 자동 변수
// 노션참고


// 뭐가 자동이냐? 지속 기간이 자동으로 결정된다는 뜻.
// 강의 요약 

// 링키지도 없음. 지속 기간이 자동이라는 뜻은 메모리에 사라졌다 나타났다 한다는 뜻이니, 링키지가 유지가 안됨.
// 블록 선언될때 스택에 생겼다가 종료되면 '자동으로' 사라짐.

/*
    Automatic storage class
    - Automatic storage class duraiton(블록 벗어나면 메모리(스택) 반납한다는 뜻. )
    - block scope
    - no linkage ( a군이 집에 없는 시간이 더 많은데 집 찾아가봐라. 링키지 못함)
    - Any variable declared in a block or function header.
    
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    auto int a; // keyword auto : a storage-class specifier. automatic storage class..
    // 근데 대부분 안붙힘.
    // cpp는 auto 의미가 아예 다름. 
    //a = 1024; // 지역변수는 메모리에 계속 사라졌다 저장되었다 하기 때문에 0으로 초기화하는게 부담스러움(비용이 있음.)
    // 그래서 지역변수는 프로그래머가 초기화해줘야 함.
    auto int b = a * 3; //  

    int i = 1;
    int j = 2;
    {
        int i = 2; // 제일 안쪽 영역의 변수가 우선순위를 가짐. 바깥쪽 변수는 name hiding.
        printf("%d", j); // j는 블록 안에서 선언되지 않았지만, visible하다. 볼 수 있다.
    }
    // main 함수의 stack frame에 i, j , i(블록 안 i) 가 착착 쌓인다고(push) 생각하면됨.
    // 블록 빠져나가면 i는 pop되고..
    func(5);
    // 근데 func가 호출되는 순간, func의 stack frame으로 바뀜.
    // 그래서 func stack frame안에선 main 함수의 변수를 못 씀. 
    // 
    

    printf("Hello");
    return 0;
}

void func(int k)
{
    int i = k + 2;
    //do something with i and k
    printf("%d", i);
}