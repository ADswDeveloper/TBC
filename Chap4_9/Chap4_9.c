// Chap 4_9.c : printf() 함수가 인자들을 해석하는 과정.
// 강의 요약 - printf : 함수가 실행될때, 인자로 들어온 지역변수들 각각에 접근하는 것이 아니라,
// 들어온 순서대로 스택에 쌓이는데, 스택에 쌓이는 순서대로 접근해서 형식 지정자가 정한 크기, 저장 방식대로 읽어옴.
// 그래서 형식 지정자를 잘못 정하면 엉뚱한 값을 읽어올 수 있다.
// 1, double 을 %d로 읽는 경우 : 4바이트씩 읽어서 엉뚱한 값.
// 2, double 을 %lld로 읽는 경우 : 8바이트씩 읽지만, 읽어오는 방식이 부동소수점 방식이므로 역시 엉뚱한 값 읽어옴.



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

//prinft() -> double형 변수나 float형 변수나 모두 %f로 읽어들임.

int main()
{
    
    float n1 = 3.14; // 4 bytes
    double n2 = 1.234; // 8 bytes
    int n3 = 10024;
    printf("%f %f %d\n", n1, n2, n3);

    
    printf("%d %d %d\n", n1, n2, n3);// 인자로 들어온 변수들이 스택에 저장됨.
    // 즉, 일렬로 쭉 저장됨(이 모형을 상상해야함)
    // 정수로 변환해서 출력하겠다1 -> conversion specifier.
    // n1, n2 모두 printf로 들어오면 double로 변환함. 
    // 8바이트 n1,n2를 다시 int(4byte)로 변환하는 상황.
    // 스택에서, n1의 4바이트만큼만 읽어서 해석함.
    // 다음 변환 지정자에서 n1의 나머지 4바이트를 읽음.
    // 다음 변환 지정자에서 n2의 4바이트를 읽어옴.
    // 결과적으로 세개 모두 이상한 값이 출력됨.
    printf("%lld %lld %d\n", n1, n2, n3);
    // 부동소수점 방식(이진수 규칙remind)으로 저장되있는 n1을 강제로 정수로 읽어오려하니 에러 발생.
    printf("%f %d %d\n", n1, n2, n3);
    // 
    printf("%f %lld %d\n", n1, n2, n3);
    // 맨 뒤에거만 정상적으로 출력.
    
    printf("Hello");
    return 0;
}

