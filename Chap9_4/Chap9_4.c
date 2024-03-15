// Chap 9_4.cpp : 변수의 영역과 지역 변수
// 강의 요약 : 변수는 변수의 유효한 범위가 있다. 그 안에서만 볼 수있고, 사용할 수 있다.
// 지역변수는 중괄호 안에 선언되는 변수. 이 때, 중괄호 안과 밖에 선언되는 변수의 이름이 같다면, 안에서는 안에서 선언한 변수의 우선순위가 더 크다. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int a; // 파일 전체에서 사용 가능. 

int int_max(int i, int j);


int int_max(int i, int j)
{
    //지역변수 - 중괄호 안에서 사용되는 변수. 
    int m; // m이 유효한 범위는 int_max 안에서만 한정. 왜 그러냐? stack frame.나중에 배울 것.
    m = i > j ? i : j;
    return m;
}

int main()
{
    // m = 123; undefined specifier
    int a; // 변수는 변수를 사용할 수 있는, 변수가 유효한 범위가 있음. 그 범위안에서만 변수를 볼 수 있고, 사용할 수 있음.
    a = int_max(1, 2);
    
    // 변수
    // 메모리 상에 어떤 공간을 의미하는 명칭. 메모리 주소 자체를 다루며 직접 하기엔 어렵기 때문에,
    // 사람이 인식하는 인식자로서, 메모리 공간에 접근할 수 있도록 만들어줌. 
    // 변수는 결국 메모리 상의 어떤 공간이고, 주소를 통해 접근한다. 
    {
        printf("%d\n", a); 
        printf("%p\n", &a);
        {
            a = int_max(4, 5);
            printf("%d\n", a);
            printf("%p\n", &a);

            int b = 123;
        }
        printf("%d\n", a);
        printf("%p\n", &a);
        // 주소가 모두 동일. 같은 변수구나.
    }

    // nested block 안에서 a 새롭게 선언하고 주소 찍어보기.
    {
        printf("%d\n", a);
        printf("%p\n", &a);
        {
            int a; // 변수 이름이 오히려 모든 블록에서 겹치지 않게 만드는게 힘들어짐. 그래서 어느 정도 자유를 부여한 것.
            a = int_max(4, 5);
            printf("%d\n", a);
            printf("%p\n", &a); // 주소가 다르게 출력됨.
            int b = 123;
        }
        printf("%d\n", a);
        printf("%p\n", &a); // 여기선 또 주소가 같아짐.
    }

    return 0;
}

