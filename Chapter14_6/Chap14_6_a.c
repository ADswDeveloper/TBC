// Chap 14_6.c : 
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#define LEN 20

struct names {
    char given[LEN];
    char family[LEN];
};

struct friend{
    struct names full_name;
    char mobile[LEN];
};


int main()
{
    struct friend my_friends[2] = {
        {{"Ariana","Grande"}, "1234-1234"},
        {{"Taylor", "Swift"}, "6550-8888"}
    };
    struct friend* girl_friend; // friend 라는 구조체를 가리키는 포인터. 구조체 포인터.

    girl_friend = &my_friends[0];
    printf("%zd\n", sizeof(struct friend)); // 60
    printf("%lld %s\n", (long long)girl_friend, girl_friend->full_name.given); // full_name은 포인터가 아님. dot으로 접근가능.
    // -> : indirect member access operator.

    girl_friend++; // struct friend 자료형 크기 만큼 더해주기.

    printf("%lld %s\n", (long long)girl_friend, (*girl_friend).full_name.given); // 주소 찍어보면 60 차이남.
    // . has higher precedence than * ...

    

    printf("Hello");


    printf("Hello");
    return 0;
}

