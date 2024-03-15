// Chap 12_8.c : 
// 강의 요약 


// 참고 - main함수가 들어있는 파일을 main.c 파일이라고도 부름.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

/* 
    static variable with external linkage
    - File scope, linkage, static storage duratin
    - External storage class
    - External variables

*/

int g_int = 0; // static 한 variable들(static 키워드x) 알아서 0으로 초기화해줌.
// int g_int; 
double g_arr[1000]; // 배열도 0으로 초기화해줌.

// initializing External variables.
int a = 2; // ok. constant expression
// int b = 2 * a; // 불가. 변수 초기화 순서에 대한 의존성이 발생할 수 있기 때문.

void func()
{
    printf("g_int in func() %d %p\n", g_int, &g_int);
    g_int++;

}

void func_sec();
int main()
{   
    /*
    Defining declaration vs Referencing declaration.

    */
    extern int g_int; // 이러면 바깥에 있는 녀석을 가져옴.
    // file scope 에 있는 녀석을 쓰겠다는 의지.

    //int g_int = 123; // hides global g_int. name hiding 일어남. 
    // 누가 숨겨지냐? 전역변수가.
    // extern int g_int; 와 같이 쓰면 redefinition 에러 발생.

    extern double g_arr[]; // optional, size is not neccesary

    

    printf("g_int in main() %d %p\n", g_int, &g_int);
    g_int++;
    func();
    func_sec();
    return 0;
}

