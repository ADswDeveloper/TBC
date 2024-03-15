// Chap 7_6.c : 소수 판단 예제
// 강의 요약
// 
// 컴퓨터 연산은 존나 빠르다. 그러니까 모든 경우의 수를 다 해보는 무식한 방법으로 
// 해를 찾을 수 있다. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>



int main()
{
    unsigned num;
    bool isPrime; // 내가 수행한 결과에 대해 상태를 임시로 표현하는 것 -> 플래그.
    // c언어에선선플래그를 보통 int로 사용.
    //  그런데 이냐 아니냐 딱 두가지로 나뉘니까 boolean 사용하는것도 좋음. 
    // stdbool.h 인클루드해서

    scanf("%u", &num);
    isPrime = true;
    /*for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            isPrime = false;
    }*/

    // 더 간결하게 이렇게 작성 가능
    for (int i = 2; i * i <= num; i++)
    {   
        // 소수가 아닌 수는 약수를 가진다 라는 전제조건을 알아야 함.
        // 
        // 
        // i로 나눠서 나머지가 0이라는 말은, i 에 대응되는 숫자와 i 를 곱해서 num이 나온다는 뜻.
        // 12를 예롤 들면,  굳이 6으로 나눠줄 필요 없이 2로만 나눴는데 나머지가 0이면 그 수는 소수가 아님. 여기서 2와 6이 약수들이라는 것에 유의.
        // 12의 약수는 1,2,3,4,6,12
        // 그런데 여기서 약수의 기준점이 되는 숫자가 3, 정확히는 제곱근, 루트 12임. 루트12 곱하기 루트12는 12니까.
        // 그래서 12는 3까지만 해주면 됨. i <= sqrt(num) 인데, i^2 <= num 임.
        // 
        // 근본적으로, 소수를 판별해내는 알고리즘이 아니라, 소수가 아닌 수를 판별해내는 알고리즘임을 유의
        // 소수가 아닌 수는 약수를 가지고, 약수를 가지면 제곱근까지만 나눠줘도 소수가 아님을 판별할 수 있다는 것임.
        if (num % i == 0)
        {
            isPrime = false;
            if (num == i * i)
            {
                printf("%d is divisible by %d\n", num, i);
            }
            else
            {
                printf("%d is divisible by %d and %d\n", num, i, num/i);
            }
        }
    }

    if (isPrime)
        printf("%u is a prime number. \n", num);
    else
        printf("%u is not prime number. \n", num);
    return 0;
}

