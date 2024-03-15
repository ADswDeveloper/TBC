// Chap 14_4.c : 구조체를 다른 구조체의 멤버로 사용하기.
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define LEN 20  

struct names {
    char given[LEN]; // first name 이름
    char family[LEN]; // Last name 성
};

struct reservation {    // Another structure
    struct names guest; //  a nested structure  
    struct names host;  // one more nested structure
    char food[LEN];
    char place[LEN];

    int year;
    int month;
    int day;
    int hours;
    int minutes;
};

int main()
{
    struct reservatoin res = {
        .guest = {"Nick", "Carraway"},
        .host = {"Jay","Gatsby"},
        .place = {"The Gatsby mansion"},
        .food = {"Escargot"},
        .year = 1925,
        .month = 4,
        .day = 10,
        .hours = 18,
        .minutes = 30
    };

    const char* printff = "";
    printf(printff, res.guest.given);
    printf("Hello");
    return 0;
}

