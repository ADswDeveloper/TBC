// Chap 12_6.c : 레지스터 변수
// 강의 요약 : 

// 자료형 앞에 레지스터 키워드 붙여서, 레지스터에 위치하게 해주세요
// 하고 요청은 할 수 있지만,
// 컴파일러가 꼭 그걸 받아들이지는 않음. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

void temp(register int r)
{
    //
}

int main()
{
    register int r;
    r = 123;
    
    int* ptr = &r; 
    // 못가져옴. 
    // 우리가 지금까지 가져온 주소는 주 기억장치, 메모리의 주소.
    // 레지스터의 주소를 가져온다는건 오류발생

    // 임베디드 쪽에서 쓰더라. 
    
    return 0;
}

