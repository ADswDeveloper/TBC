// Chap 11_3.c : 문자열의 배열
// 강의 요약 
// 마치 int[2][3] , int* parr[2] 와 같은.. 포인터와 다차원배열 비교하는 것과 비슷.
// char*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    const char* mythings[5] = {
        "Dancing in the rain",
        "Couting apples",
        "Watching movies with friends",
        "Writing sad letters",
        "Studying the C language"
    }; // char 타입 포인터가 5개 있는 배열 
    // 각 배열 원소가 주소(char * 타입), 데이터 세그먼트에 저장된 문자열을 가리키고 있음. 

    // mythings 디버거로 찍어보면 Value 자체가 0x008ffa28 로 나옴. 즉, 주소라는 거임. 하지만 변수처럼 object는 아님. mythings[0]이 object.
    // 
    char yourthings[5][40] = {
        "Studying the C++ language",
        "Eating",
        "Watching Netflix",
        "Walking around till dark",
        "Deleting spam emails"
    };  // 이렇게 선언하면 메모리에 두 카피가 존재.(텍스트 세그먼트, 스택 세그먼트에 문자열 존재)
    //yourthings 도 디버거로 찍어보면 Value에 0x008ff958 이라는 주소가 나옴.
    //yourthings[0] 도 0x008ff958

    const char* temp1 = "Dancing in the rain"; // 
    const char* temp2 = "Studying the C language";

    printf("%s %u %u %u\n", mythings[0], &(unsigned)mythings[0], (unsigned)mythings[0], (unsigned)temp1); // 텍스트 세그먼트에 있는 내용들.
    printf("%s %u %u\n", yourthings[0], (unsigned)yourthings[0], (unsigned)temp2);


    printf("size of char* pointer array : %zd char[] array : %zd", sizeof(mythings), sizeof(yourthings));
    //20, 200 나옴.(주소 사이즈 4바이트 곱하기 5)
    
    {
        // 디버거실행시키고 메모리 찍어보기.
        // %u %s 이런것들도 보임.프로그램이 저장된 공간. 
        // yourthings 메모리로 찍어보면 문자열 사이에 ....이 가득한걸 볼 수 있음. 이건 40바이트 중 안쓰는 배열 나머지 공간을 0으로 채워준것.
        //
    }

    char ch;
    for (int i = 0; i < 100; i++)
    {
        ch = mythings[0][i];
        printf("%c", ch);
    } // 메모리에 있는걸 쭈욱 출력하는구나 (메모리가 일렬로 되있음을 아니까) 라는걸 알지만, 권장되지는 않음.
    // 글자 수보다 i의 상한이 매칭되지 않으니까.
    // c 프로그래머를 믿는 C언어의 철학때문에 되는 것들임.
    printf("\n");
    printf("Hello");
    return 0;
}

