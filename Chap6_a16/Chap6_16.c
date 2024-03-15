// Chap 6_16.c : 배열과 런타임 에러
// 강의 요약 - 배열 이름은 포인터 변수처럼 생각하면 편함. 안에 주소가 담겨있음. 배열명[index] 혹은 배열명[offsets] 로 , 배열명으로부터 index만큼 떨어진 곳의 값을 가져올 수 있음. 

// 배열 비유 : 택배 배달을 할 때 배달해야할 집들이 띄엄띄엄 떨어져있으면 힘듦. 배열도 연속한 메모리위에 존재.
// 배열의 장점 : 변수 사용을 줄일 수 있고, for문과 결합하면 편하게 접근 가능. 연관성있는 데이터를 모아놓아 한꺼번에 접근하기 편함.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define NUM_DAYS 365 
// 참고. c언어에서 const 상수는 런타임에 결정됨. 배열의 크기는 프로그램 실행 전, 반드시 컴파일 타임에 결정되어야 하므로, const 상수로 배열의 크기를 지정할 수 없음.

int main()
{
    char my_chars[] = "Hello, World!";

    int daily_temperature[NUM_DAYS];
    double stock_prices_history[NUM_DAYS]; // 쭉 나열되어있는 2920바이트 할당받아서, 첫 주소를 stock_prices_에 대입.

    printf("%zd", sizeof(daily_temperature)); // 2920
    printf("%zd", sizeof(double) * NUM_DAYS); // 2920
    printf("%zd", sizeof(stock_prices_history[0])); //8


    {
        int my_numbers[5];
        my_numbers[0] = 1; // subscripts, indices, offsets. 
        // 101호부터 0번째 떨어져있는 집은 101호. 그래서 offset이라고 부르기도함. 첫번째 주소로부터 얼마나 떨어져있는가.
        my_numbers[1] = 2;
        my_numbers[2] = 3;
        my_numbers[3] = 4;
        my_numbers[4] = 5;

        scanf("%d\n", &(my_numbers[0])); // 마치 변수를 넣는 것처럼 작용.
        scanf("%d\n", my_numbers); // array는 arryay 이름 자체가 주소임. 결과적으로 위 문장과 같은 결과를 도출.
        
        my_numbers[5] = 123; // runtime error. out of bound. 할당받아온 메모리의 경계를 넘어가는 주소에 접근하면 에러 발생.
        // 근데 런타임 에러가 발생할 뿐, 저장되기는 하더라. my_numbers로부터 5 단위 떨어진 곳이 어쨌든 메모리에 존재하기는 하니까 할당은 하긴 함.
        //my_numbers = 7; // 이건 아예 compile error. 주소에다 7을 대입.
    }
    


    printf("Hello");
    return 0;
}

