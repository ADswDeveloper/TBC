// Chap4_7.cpp : printf 함수의 변환 지정자들
#include <iostream>
#include <limits.h>

// printf의 기본적인 사용법
// printf(제어-문자열, 아이템1, 아이템2, ...) (아이템 -> 변수, 상수, 표현식 등)

// 형식지정자(Conversion specifier)
// %[flags][width][.precision][length]specifier
// printf("%+10.5hi", 256);

// %a : 부동 소수점수, 16진수, p-표기법
// %A : 부동 소수점수, 16진수, P-표기법(p가 소문자냐 대문자냐 차이
// %e : 부동 소수점수
// %d or %i : 부호가 있는 10진 정수(decimal integer)
// %e : 부동소수점수 ,e-표기법
// %f : 부동 소수점수, 10진수 표기
// %g : 값에 따라서 %e나 %f 사용. 더 작은 값으로 해줌.
// %o : 8진 정수
// %p : 포인터
// %s : 문자열
// %u : 부호가 없는 10진 정수
// %x : 부호가 없는 16진 정수(char 문자랑 헷갈리지 말기)


int main()
{
    double d = 3.14159265389732846264338327950288419716;

    // char 는 작은따옴표 사용.
    printf("%c\n", 'A'); 
    printf("%s\n", "I love you"); 

    // i는 부호가 있는 10진 정수를 나타내기 때문에, Unsigned int max는 오버플로우 발생
    printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX);// 1004 1234 2147...7 -1
    printf("%u %u %u \n", 1024, -1, UINT_MAX); // -1도 오버플로우 발생

    // printf 관습 -> float를 출력하려고 하면 내부적으로 double로 바뀌어서 출력됨.
    // 그래서 lf의 l은 무시됨.(어차피 double로 출력되니까)
    printf("%f %f %lf\n", 3.141592f, d, d);

    // 문단 스타일 맞춰주기.
    {
        
        printf("%9d\n", 12345); // 출력 형식을 9자리로 맞춰줌. 오른쪽 정렬.
        printf("%09d\n", 12345); // 나머지 자리를 0으로 채워줌,.
        printf("%.2f\n", 3.141592); // 소수점 둘째자리까지 출력
        printf("%.20f , %.20lf\n", d,d); // 소수점 20째 자리까지 출력이나, 
        // f가 나타낼 수 있는 자릿수의 한계때문에 가능한 자리까지만 표시
        // 주의! double로 출력됨. 

    }
    
    //printf 도 출력값이 있음.
    {
        printf("%\n");
        int n_counted = printf("Counting!");
        printf("%u\n", n_counted);
    }
}

