// Chap 12_7.c : 블록 영역의 정적 변수.
// 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

void count()
{
    int ct = 0;
    printf("Count = %d %lld\n", ct, (long long)&ct);
    ct++;
} // 함수 종료시 스택에 올라와있던 ct 소멸.

void static_count()
{ 
    static int ct = 0; // initiallzed only once! 초기화가 한번만 진행.
    // 스택에 저장x, data or bss segment 에 저장. 
    // 프로그램 시작 후부터 종료까지 static하게 유지되는 메모리에 저장.
    // static int ct;
    // ct = 0; 이렇게 하면 완전히 달라짐. 
    printf("Count = %d %lld\n", ct, (long long)&ct);
    ct++;
}

void counter_caller()
{
    count();
}

void static_counter_caller()
{
    static_count();
}

int func(static int i)
{
    // 함수가 실행될때는 새로운 스택 프레임이 배정됨.
    // 함수 파라미터는 함수가 실행될 때 스택 프레임 내에 메모리를 받음.
    // 함수의 매개변수가 static 이라면 , 함수를 호출할 때마다 새롭게 static 변수를 선언하고 정의..
    // 이는 static 특성과 맞지 않음. 
    // static 변수는 프로그램 내내 메모리가 유지되면서 한번 생성되면 그 변수를 scope 내에서
    // 프로그램 실행 내내 재사용할 수 있는데, 여러번 static 변수들을 새롭게 또 만들고 만들고 할거면
    // 굳이 매개변수를 static으로 선언해줄 이유는 없음. 
}


int main()
{
    count();
    count(); // 메모리 주소 같은 곳 사용하는 것처럼 보임. main에서 count()밖에 실행안되서..
    counter_caller();// count_caller()의 스택 안에서 count()호출. 그래서 다름.

    static_count();
    static_count();
    static_counter_caller(); // 메모리 주소가 항상 같음. 
    // 메모리 레이아웃 전체로 봤을 때 메모리가 좀 떨어져있다. 주소값틀이 다름.
    return 0;
}


int* count()
{
    int ct = 0;
    printf("Count = %d %lld\n", ct, (long long)&ct);
    ct++;
    return &ct; // warning. 어차피 사라질 메모리인데 주소를 반납하므로.
} // 함수 종료시 스택에 올라와있던 ct 소멸.

int* static_count()
{
    static int ct = 0; // initiallzed only once! 초기화가 한번만 진행.
    // 스택에 저장x, data or bss segment 에 저장. 
    // 프로그램 시작 후부터 종료까지 static하게 유지되는 메모리에 저장.
    // static int ct;
    // ct = 0; 이렇게 하면 완전히 달라짐. 
    printf("Count = %d %lld\n", ct, (long long)&ct);
    ct++;
    return &ct; // 이것도 가능은 하나, 밖에서 ct의 주소를 받아서 ct값을 변경하고 싶으면,
    // 굳이 static 으로 선언할 이유가 없음. 그냥 전역변수로 선언하면 됨. 
}