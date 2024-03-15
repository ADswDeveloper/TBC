// Chap 8_7.c : 입력 스트림과 숫자
// 강의 요약 : 어쩌다보니 scanf 형식 문자열에 \n 을 붙였는데, 이러면 좃댐.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

char str[255];
int i, i2;
double d;

int main()
{
    char str[255];
    int i, i2;
    double d;
    char c;

    scanf("%s %d %lf", str, &i, &d); // scanf 는 double 받을때 printf랑 다르게 l 붙여줘야함,.
    printf("%s %d %f\n", str, i, d); 


    scanf("%s %d %lf", str, &i, &i2); // abc 456 1.2345 입력.
    printf("%s %d %d\n", str, i, i2);


    while ((c = getchar()) != '\n')
    {
        putchar(c);
    }

    putchar(7);
    //scanf 의 특징
    // 1, 공백이 입력의 구분자.
    // 2, cLI 창에 입력한 인풋은 문자(문자열, string)로 받아들이고 , scanf 에서 내부적으로 다시 숫자로 받아들임.
    // 3, %d -> 정수로 받아라!, 문자긴 한데 문자로 1을  받았는데, scanf 내부적으로는 .을 받고 숫자 입력은 끝났나보다 라고 생각. '.'은 숫자로 못바꾸니까.
    // 4, 버퍼에는 .2345 가 남아있게 됨.. 

    // 지금은 내부적으로 문자로 처리한다 정도만. 이도 결국엔 이진수로 바뀌어서 전송됨.
    printf("Hello");
    return 0;
}

