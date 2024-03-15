// Chap 14_3.c : 
// 강의 요약 


// 같은 타입의 원소들이 나열된 배열과 다르게 구조체는 다른 타입의 멤버들이 나열.
// 메모리 공간을 효율적으로 사용하기위해 메모리 패딩을 사용


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    struct Aligned
    {
        int a;
        float b;
        double c;
    };
    
    /*
    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
    |int a }flaot b|double c
    
    */

    struct Aligned a1, a2;



    printf("struct Aligned a1\n");
    printf("size of %zd\n", sizeof(struct Aligned)); // 16
    printf("%lld", (long long)&a1);     // a1과 a1.a 주소(첫번째원소) 같음.
    printf("%lld", (long long)&a1.a);   // ~936
    printf("%lld", (long long)&a1.b);   // ~940 int 간격
    printf("%lld", (long long)&a1.c);   // ~944 float 간격

    printf("struct Aligned a2\n");
    printf("size of %zd\n", sizeof(a2));
    printf("%lld", (long long)&a2);
    printf("%lld", (long long)&a2.a);
    printf("%lld", (long long)&a2.b);
    printf("%lld", (long long)&a2.c);

    struct Padded1
    {
        char a;
        float b;
        double c;
    };

    /*
        Padding (struct member alignment
        1 word(4 bytes in x86 8 bytes in x64)

        cpu와 메모리가 데이터를 주고받을 때, 메모리 주소 단위인 1바이트씩 
        주고받을 것 같지만, 그렇게 조금씩 보내면 오히려 부대비용 증가, 
        따라서 1word(4 or 8byte)씩 데이터를 주고받음.

        놀이기구 출발할때 혼자 와도 2인석에 탑승시켜서 보내는것과 유사. 

        double 데이터를 짜르고 보내기 싫어서 패딩을 넣어서 보내는 것.
    */


    /* without padding
    1  2 3 4 5  6 7 8 9 10 11 12 13 14 15 16  17
    |a|float b| double c            |?  ?  ? |
    1 + 4 + 8 = 13

    1바이트, 4바이트, 8바이트 순서로 보내면 8바이트 단위(word 단위)로 보낸다고 치면, 1(char) + 4(float) + 3(double) | 5(double) 이렇게 double이 짤리게됨
    double 안 짜르고 보내려고 패딩을 넣음.
    */ 
    
    /* with padding
    1 2 3 4  5 6 7 8  9 0 10 11 12 13 14 15 16
    |char a |float b| double c
    4(char + 3바이트) + 4 + 8 = 16
    */

    struct Padded1 p1;
    printf("struct Padded p1\n");
    printf("size of %zd\n", sizeof(p1));
    printf("%lld", (long long)&p1);
    printf("%lld", (long long)&p1.a);
    printf("%lld", (long long)&p1.b); // a와 b의 간격이 4바이트.. 1바이트가 아님!
    printf("%lld", (long long)&p1.c);

    struct Padded2
    {
        float a;
        double b;
        char c;
    };

    /*
        |0 1 2 3 4 5 6 7|8 9 10 11 12 13 14 15| 16 17 18 19 20 21 22 23| 24
        |float a        |double b             | char c                 |
        8(float) + 8 + 8(char)
        - float -> 만약에 4바이트씩 보내면, 뒤에 b(double)데이터가 짤림.
        - char -> 마찬가지로 1바이트씩 보내면, 다음에 오는 데이터(전송 단위 8바이트)가 짤려서 들어오는 불편함 존재.
    */
    struct Padded2 p2;
    printf("struct Padded p2\n");
    printf("size of %zd\n", sizeof(p2)); // 24
    printf("%lld", (long long)&p2);
    printf("%lld", (long long)&p2.a);
    printf("%lld", (long long)&p2.b); // 
    printf("%lld", (long long)&p2.c);

    // Padded1 과 Padded2 는 멤버 순서가 다르지만, 사이즈가 훨씬 커졌음. 

    struct Padded3
    {
        char a;
        double b;
        double c;
    };
    struct Padded3 p3;
    printf("struct Padded p3\n");
    printf("size of %zd\n", sizeof(p3)); // 24
    printf("%lld", (long long)&p3);
    printf("%lld", (long long)&p3.a);
    printf("%lld", (long long)&p3.b); // p3.a와 p3.b 는 8차이. char에 7바이트 패딩 생김.

    printf("%lld", (long long)&p3.c);

    struct Person
    {
        char name[41];
        int age;
        float height;
    };

    struct Person mommy;
    printf("struct Padded p3\n");
    printf("%lld", (long long)&mommy.name[0]);
    printf("%lld", (long long)&mommy.age); // char 배열 첫번째 주소와 name 시작 주소 차이 -> 44. 41이 나야할 것 같지만 패딩생김./
    printf("%lld", (long long)&mommy.height); //
    printf("size of %zd\n", sizeof(mommy)); // 41 + 4 + 4 = 49 (x), 41 + 3(padding) + 4 + 4 = 52

    struct Person f[4]; // 구조체 배열
    printf("Size of a structrue array %zd \n", sizeof(f));
    // name age height name age height 쭈루룩 이어짐.

    //project setting > c/c++ > All options > Struct Member Alignment(패딩 설정) 을 1바이트로 하면 패딩끈것과 동일한 효과가 나옴..(패딩 안들어감)
    return 0;
}

