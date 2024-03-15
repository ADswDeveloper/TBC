// Chap 9_13.c : 포인터의 작동 원리.
// 강의 요약 : 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int a, b;
    a = 123;

    int (*a_ptr); // * : asterisk. 
    a_ptr = &a; // & : adress-of operator.
    // a가 실제로 사용하는 메모리 공간의 주소, 실제로 사용하는 공간 중에서도 첫 번째 주소를 반환.

    printf("%d %d %p\n", a, *a_ptr, a_ptr);// *a_ptr : redirection operator 이용. a_ptr이 가리키고 있는 주소로 가서 값 가져오기.
    //a_ptr 주소값은 16진수로 출력(%p)되고, 실행시킬때마다 달라짐.

    *a_ptr = 456;
    printf("%d %d %p\n", a, *a_ptr, a_ptr);// a는 계속 동일한 주소값을 가짐

    a = 1004;
    printf("%d %d %p\n", a, *a_ptr, a_ptr);// a는 계속 동일한 주소값을 가짐

    b = a_ptr; // warning : int' differs in levels of indirection from 'int *'. (indiretion은 redirecition으로 생각하면됨.)
    // b = *a_ptr 이거 하려고 했던거 아니니? 라고 경고해주는 것.
    // 에러가 아니라 워닝 띄워주는 이유는, 혹시 프로그래머가 주소값을 강제로 캐스팅 하고 있는 것 아닌가? 라고 추측해서 그럼.
    // b = (int)a_ptr; 이렇게 쓰는 거 아닌가 하고 에러는 띄우지 않음. 자유롭다는 철학.
    // 어쨌든 주소값도 내부적으로 숫자값이니 int에 저장할 수는 있으나, 실무에서 사용하는 경우는 거의 없음. 
    
    b = *a_ptr; // 앞에 redirection 붙여서 값을 저장. 

    printf("%d", b);
    return 0;
}

