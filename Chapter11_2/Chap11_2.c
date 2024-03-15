// Chap 11_2.c : 메모리 레이아웃과 문자열
// 강의 요약 : C언어에서 문자열은 Text Segment에 저장됨 -> read only라 값 못바꿈.
// 따라서 char* 포인터로 선언 및 초기화한 문자열은 바꿀 수 없음. 
// 포인터 변수 자체는 스택영역에 선언(지역변수로 선언시), 
// 포인터 변수의 주소와 포인터 변수 자체를(문자열의 주소값) 찍어보면 둘이 포맷이 다르다는 것을 알 수 있음.
//
// 노션 그림 참고.
// 배열로 선언된 문자열, char*로 선언된 문자열의 차이

// 문자열 리터럴이 같으면, 포인터 변수1, 포인터 변수2에 저장해도 같은 주소를 가리킴.
///// test
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    char ar[] = "Hello, world!"; // 
    // 배열은 그 자체로 메모리를 가지고 잇음. 내용물이 배열로 복사가 되며 초기화됨.

    const char* str = "Hello, world!"; // 어차피 str로 접근해서 문자열 수정하려하면 에러가뜨지만
    // 강조의 의미에서 const 사용
    // 문자열의 첫번째 주소를 가리키고만 있는 상황. 
    // str[0] = 'M'; // const 떼도 런타임 에러 발생함.

    // 저장 위치 비교.
    {
        const char* pt2 = "I am a string!";
        const char* pt3 = "I am a string!";
        const char* pt4 = "I am a string!!!"; // different

        char arr[] = "I am a string!";
        char arr1[] = "I am a string!";
        char arr2[] = "I am a string!!!";

        char* p6 = (char*)malloc(sizeof(char) * 100);

        printf("rodata low \t%llu %llu %llu %llu\n",
            (unsigned long long)pt2, (unsigned long long)pt3, (unsigned long long)pt4,
            (unsigned long long)"I am a string!");
        // 문자열 리터럴 자체가 주소로 쓰임.
        // pt4 제외 다 같은 주소를 가리킴을 알 수 있음. 
        printf("stack high \t%llu %llu %llu\n",
            (unsigned long long)arr, (unsigned long long)arr1, (unsigned long long)arr2);

        printf("Heap middle \t%llu\n", (unsigned long long)p6);
    }

    //* array versus pointer */
    {
        const char* pt2 = "I am a string!";
        char arr[] = "I am a string!";
        pt2++; 
        puts(pt2); // 한칸 앞으로 가서 출력. pt2에 담겨있는건 주소임을 유의.
        // arr++; // 불가능.
    }

    //array and pointer differences
    {
        char heart[] = "I love Kelly!";
        const char* head = "I love Helly!";

        for (int i = 0; i < 6; i++)
        {
            putchar(heart[i]);
        }
        putchar('\n');

        for (int i = 0; i < 6; i++)
        {
            putchar(head[i]); 
        }
        putchar('\n');

        // pointer addition

        for (int i = 0; i < 6; i++)
        {
            putchar(*(heart + i));
        }
        putchar('\n');

        for (int i = 0; i < 6; i++)
        {
            putchar(*(head + i));
        }
        putchar('\n');

        while (*(head) != '\0')
        {
            putchar(*(head++)); // *head++ 하면 참조한다음 가리키는 문자에 +1 함. 
        } // 괄호 꼭 주의!
        
        // head = heart; // 가능. (포인터) 변수에 값(주소) 저장.
        // heart = head;  // 불가능. 배열 이름은 주소 그 자체. lvalue가 아님. lvalue는 heart[0] 이런 것.

    }

    {
        char* word = "Goggle";
        word[2] = 'o'; // 불가능. 텍스트 세그먼트에 저장된 문자열 수정 불가.
        
        const char* str1 = "When";
        const char* str2;
        str2 = str1; // shallow copy?
        
        printf("%s %p %p\n", str1, str1, &str1); // 마지막 주소는 다름. 두번째 %p 와 세번째 %p 크기가 다름 -> 다른 메모리 영역에 저장됨을 유추 가능.
        printf("%s %p %p\n", str2, str2, &str2);
    }
    return 0;
}

