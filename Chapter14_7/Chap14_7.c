// Chap 14_7.c : 구조체를 함수로 전달하는 방법
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#define FUNDLEN 50

//test
struct fortune {
    char bank_name[FUNDLEN];
    double bank_saving;
    char fund_name[FUNDLEN];
    double fund_invest;
};

//double sum(double* x, double* y);
//double sum(struct fortune my_fortune);
double sum(struct fortune* my_fortune);
int main()
{
    
    struct fortune my_fortune = {
        "Wells-Fargo",
        4032.27,
        "JPMorgan Chase",
        8543.94
    };
    //Case 1
    //printf("Total : $%.2f.\n", sum(&my_fortune.bank_saving, &my_fortune.fund_invest)); 

    //Case 2
    //printf("Total : $%.2f.\n", sum(my_fortune));

    //Case 3
    printf("Total : $%.2f.\n", sum(&my_fortune));
    return 0;
}

// Case 1
//double sum(double* x, double* y)
//{
//    return *x + *y;
//}

// Case 2
//double sum(struct fortune my_fortune) //argument로 넣어준 my_fortune 이 my_fortune(함수 내 지역변수)으로 복사가 됨. 
//{
//    return my_fortune.bank_saving + my_fortune.fund_invest;
//} // 그런데 이렇게 복사가 되면 문제가, structure 의 size가 방대하다면, 복사되는 양이 많아져 메모리에 부하가 걸림. 그래서 이렇게도 안하고.

// Case 3
double sum(const struct fortune* my_fortune) //argument로 넣어준 my_fortune 이 my_fortune(함수 내 지역변수)으로 복사가 됨. 
{
    return my_fortune->bank_saving + my_fortune->fund_invest;
} // 그런데 이렇게 복사가 되면 문제가, structure 의 size가 방대하다면, 복사되는 양이 많아져 메모리에 부하가 걸림. 그래서 이렇게도 안하고.

// const도 붙여줘서 간접 접근 값이 안바뀌도록 막아주기. 단순 구조체 데이터를 읽어오기만 하는거니까
// 만약 해당 구조체 변수의 멤버에 접근해서 값을 바꾸고 싶으면 const는 빼주기.