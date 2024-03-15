// Chap 14_6.c : 
// ���� ��� 

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
    struct friend* girl_friend; // friend ��� ����ü�� ����Ű�� ������. ����ü ������.

    girl_friend = &my_friends[0];
    printf("%zd\n", sizeof(struct friend)); // 60
    printf("%lld %s\n", (long long)girl_friend, girl_friend->full_name.given); // full_name�� �����Ͱ� �ƴ�. dot���� ���ٰ���.
    // -> : indirect member access operator.

    girl_friend++; // struct friend �ڷ��� ũ�� ��ŭ �����ֱ�.

    printf("%lld %s\n", (long long)girl_friend, (*girl_friend).full_name.given); // �ּ� ���� 60 ���̳�.
    // . has higher precedence than * ...

    

    printf("Hello");


    printf("Hello");
    return 0;
}

