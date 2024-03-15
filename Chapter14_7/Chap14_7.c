// Chap 14_7.c : ����ü�� �Լ��� �����ϴ� ���
// ���� ��� 

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
//double sum(struct fortune my_fortune) //argument�� �־��� my_fortune �� my_fortune(�Լ� �� ��������)���� ���簡 ��. 
//{
//    return my_fortune.bank_saving + my_fortune.fund_invest;
//} // �׷��� �̷��� ���簡 �Ǹ� ������, structure �� size�� ����ϴٸ�, ����Ǵ� ���� ������ �޸𸮿� ���ϰ� �ɸ�. �׷��� �̷��Ե� ���ϰ�.

// Case 3
double sum(const struct fortune* my_fortune) //argument�� �־��� my_fortune �� my_fortune(�Լ� �� ��������)���� ���簡 ��. 
{
    return my_fortune->bank_saving + my_fortune->fund_invest;
} // �׷��� �̷��� ���簡 �Ǹ� ������, structure �� size�� ����ϴٸ�, ����Ǵ� ���� ������ �޸𸮿� ���ϰ� �ɸ�. �׷��� �̷��Ե� ���ϰ�.

// const�� �ٿ��༭ ���� ���� ���� �ȹٲ�� �����ֱ�. �ܼ� ����ü �����͸� �о���⸸ �ϴ°Ŵϱ�
// ���� �ش� ����ü ������ ����� �����ؼ� ���� �ٲٰ� ������ const�� ���ֱ�.