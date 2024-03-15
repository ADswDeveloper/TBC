// Chap 9_15.c : NULL 포인터와 런타임 에러.
// 강의 요약 : 포인터변수는 초기화할때부터 null 값 할당.

// int* ptr; 혹은 int* ptr = 123; 처럼 초기화문에서 asterisk는 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int a; 
    // 변수를 선언하면 변수는 선언함과 동시에 변수는 메모리를 가지게 됨. 오브젝트가 됨. 데이터 공간을 가지게 되고, 존재하게 됨.
    printf("%p\n", &a); // 초기화 필요.
    printf("%d\n", a); // 쓰레기값 할당됨. 

    // 포인터는 얘기가 다름. 선언함과 동시에 메모리 공간을 가짐. 

    int* ptr; 
    // 포인터 변수 자체도 메모리 공간은 가지나, 쓰레기값(쓰레기 주소)을 가짐. 아무렇게나 적은 주소에다 뭐 배달해주세요 하면 되나!

    printf("%p\n", ptr); 
    printf("%d\n", *ptr); 
    // rte 에러 발생.

    int* ptr_ = 1234; 
    // ptr_ 이라는 포인터를 선언함과 동시에 값을 1234로 초기화.(리터럴 값 123을 메모리 주소로 저장.)
    //내가 마치 os가 된것 처럼 이 주소로 가서 뭘 해봐 라는 형태. 
    //ptr_이 가리키는 주소로 갔더니, chap9_15.c 파일이 쓰라고 할당받은 메모리 공간이 아님. os가 강제종료 시켜버림.  실행시켜보면 암.
    printf("%p\n", ptr_); // 나오긴 나옴. 
    printf("%d\n", *ptr_);  // 에러.


    {
        int* safer_ptr = NULL; // int 포인터 변수 safer_ptr 에 NULL값(주소) 대입. 
        // 왜 null을 대입하냐? 로직 흐름제어에 따라 safer_ptr에 주소값이 할당되지 않으면, 쓰레기 주소값이 할당되는데, 위에서 본 것처럼 에러를 발생시킴.(프로그램에 허용되지않은 주소라거나..)
        // 관습적으로 많이 null을 넣는다!
        int a = 123;
    }
    
    return 0;
}

