// Chap 4_10.c : scanf()의 사용법
// 강의 요약 

// 1, 많은 인자를 넣어줄 시, 구분자는 space
// 2, 소수 입력시, double이면 l 붙여주기.
// 3, width 설정 가능, 문자열의 경우 특정 길이 만큼만 입력받을 수 있음. 
// 4, 정수 입력시(%i), 커맨드창 인풋에 문자가 섞여있으면 문자를 만나기 전까지만 넣어줌.
// 5, %c로 입력받는 경우,, blank 도 입력받으므로 조심
// 6, scanf() 출력값 -> 단순히 입력한 인자 개수가 아니라, successfully matching 된 인자 개수임.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <inttypes.h>

int main()
{
    /* mulitple inputs with blank seperator*/
    //{
    //    int i;
    //    float f; // scanf는 printf와 다르게 double은 %lf로 읽어들여야 함.
    //    char str[10]; // c언어에서 문자열은 char 배열이거나 "" 안에 넣음. 

    //    scanf("%d %f %s", &i, &f, str); // 빈 칸을 만나면 다음 인자로 해석. 스페이스가 구분자.
    //    // 배열은 입력받을때 &를 떼도 됨.
    //    printf("%d %f %s\n", i, f, str); // 

    //}

    /* character */
    //{
    //    char c;
    //    scanf("%c", &c);
    //    printf("%c\n", c); // 블랭크도 입력받으므로 조심.
    //}

    /* Unsigned as signed*/
    //{
    //    unsigned int i;
    //    scanf("%i", &i); // -123
    //    printf("%i", i); // -123

    //    // 변수에 값을 할당할 시, 초기화혹은 대입은 해당 변수의 자료형 규칙대로 저장됨.
    //    // 하지만 scanf 로 값을 입력하는 경우, 할당받은 메모리 공간의 사이즈만 유효하고,
    //    // 저장 방식은 scanf의 format specifier를 따른다. 
    //}

    /* Unsigned as unsigned*/
    //{
    //    unsigned i;
    //    scanf("%u", &i); // -123
    //    printf("%u", i); // 4756479348. unsigned 형식으로 음수를 저장해서 이상한 값이 저장됨  
    //}
    
    /* floating point number*/
    //{
    //    // l for double for %f,%e,%E,%g 
    //    double d = 0.0;
    //    scanf("%f", &d); // 3.2
    //    printf("%f\n", d); // 0.0000 나옴. printf 와 달리 scanf는 double이면 l을 붙여줘야함.
    //}

    /*width */
    //char str[30];
    //scanf("%5s", str); // 받고 싶은 길이까지만 받을 수 있음.
    //printf("%s\n", str); // 

    /* h modifier */
    //char i;
    //scanf("%hhd", &i); // h 하나당 나누기 2라고 생각하면 편함. 
    //printf("%i", i); 

    /* integer with characters*/
    //int i;
    //scanf("%i", &i); // a를 만나기 전까지만 읽음.
    //printf("%i", i);

    /* j modifier */
    //intmax_t i;
    //scanf("%ji", &i);
    //printf("%ji", i); // j -> intmax_t 또는 uintmax_t의 자료형

    /* Regular characters*/
    //int a, b;
    //scanf("%d,%d", &a, &b); // comma seperator
    //scanf("%d ,%d", &a, &b); // 입력으로 들어온 숫자 사이의 blank를 무시한다 라는 뜻.
    //scanf("%d, %d", &a, &b);
    //scanf("%dA%d", &a, &b); 
    //printf("%d %d", a, b); // 원하는 구분자 지정가능.

    /* return value of scanf() */
    //int a, b;
    //int i = scanf("%d%d", &a, &b);
    //printf("%d",i); // 입력받은 인자의 개수.

    /* *modifier for printf() */ // flag 값을 인자로 넣어줄때..
    //int i = 123;
    //int width = 5;
    //scanf("%d", &width);
    //printf("%*d\n", width, i); // printf의 flag 입력 받을 수 있음.

    /* *modifier for scanf() */ // suppress.
    int i; 
    scanf("%*d%*d%d", &i); // 첫, 두번째로 들어온 값을 무시해버림.
    printf("%d", i);
    
    return 0;
}

