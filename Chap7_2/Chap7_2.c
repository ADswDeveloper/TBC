// Chap 7_2.c : 표준 입출력 함수들 getchar(), putchar() 예제
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // getchar putchar
#include <string.h>
#include <limits.h>

int main()
{
    //char ch;
    //ch = getchar(); // 문자 한글자씩 읽는 함수. 
    ////putchar(ch); // 문자 한글자씩 출력

    //while (ch != '\n')
    //{
    //    putchar(ch);
    //    ch = getchar(ch); // 버퍼에 저장해놓았다가 while 루프 돌면서 한꺼번에 출력됨.
    //    // getchar로 입력하지 않았음에도 버퍼에 저장해놓은 문자들이 프린트됨. 
    //} // 첫 getchar() 후 다음 getchar()가 실행될때, 굳이 커맨드 윈도우에서 입력을 받지 않고,
    // 버퍼에 쌓인 값을 먼저 getchar()로 읽어온 후 버퍼가 소진되면 다시 입력을 받는 것.

    // 위 코드는 하기와 같음. 훨씬 간결하게 짤 수 있음.
    //char ch;
    //while ((ch = getchar()) != '\n') // 대입 연산도 평가되면, 할당받은 값을 반환.
    //{
    //    putchar(ch);
    //}

    /* Convert numbers to asterisks */
    //char ch;
    //while ((ch = getchar()) != '\n')
    //{
    //    if (ch >= '0' && ch <= '9') // 내부적으로 정수로 다뤄지는 것을 아니까 이렇게 쓸 수 있는 것.
    //        ch = '*';
    //    putchar(ch);
    //}

    /*Lower charaters to Upper characters */
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'a' && ch <= 'z')
            ch -= 'A' - 'a';
        putchar(ch);
    }

    return 0;
}

