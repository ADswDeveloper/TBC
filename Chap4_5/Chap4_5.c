// Chap4_5.cpp : 기호적 상수와 전처리기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f

// #define PI = 3.141592f 
// 이렇게 선언하면 앞에 등호까지 같이 복붙해버림.
// 파라미터용도로도 쓰인다.
// 보통 대문자로 쓰는게 관습. 

int main()
{
    const float pi = 3.141592f; //기호적 상수를 정의하는 방법은 매크로말고도 const가 존재.
    //pi = 3.0f; -> const 상수는 한번 선언하면 값을 못바꿈.

    float radius, area;

    printf("Input radius\n");
    
    scanf("%f", &radius);

    area = 3.141592f * radius * radius; // 리터럴로 써넣으면 , 혹시 오타나면 큰일남.
    // 3.141892f 이렇게 쓴다거나..
    // 이럴때 기호적 상수로 쓰면 좋음. 바로 #define.
    // 왜 기호라고 부르냐면, 3.141592f 대신 PI를 넣는다 라고 해서 붙여진 이름.

    area = PI * radius * radius;
    // #define은 간단함. 교체가 됨. 컴파일러 입장에선
    // area = 3.141592f * radius * radius; 랑 똑같음. 
    // 그 후 컴파일러가 컴파일 진행.

    printf("Area is %f\n", area);


    return 0;
}
