// Chap 9_9.c : ������ ��ȯ ����
// ������ ������ ���� ������ �� ���� ����. 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>



/*
*   10�� �������� ��ȯ.
    10
    10 / 2 =5, remainder = 0
    5 / 2 = 2, remainder = 1
    2 / 2 = 1, remainder = 0
    1 / 2 = 1, remainder = 1
*/

void print_binary(unsigned long n);
void print_binary_loop(unsigned long n);

int main()
{
    unsigned long num = 10;
    print_binary(num);
    print_binary_loop(num);
    printf("\n");
    return 0;
}

void print_binary(unsigned long n) /// �ݴ�� ������ ��.
{   
    while (1)
    {
        int quotient = n / 2;
        int remainder = n % 2;
        printf("%d", remainder);
        n = quotient;
        if (n == 0) break;
    }
    printf("\n");
}

void print_binary_loop(unsigned long n) // n�� 2�� ���� �������� ���ϰ� f(n/2) ���� �� ������ print.
{
    int remainder = n % 2;
    if (n >= 2)
    {
        print_binary_loop(n / 2);
    }
    printf("%d", remainder);
    // ���ÿ� �׿��ٰ� ���������� �ݳ��ϴ� ��Ȳ ����. �ڱ� �ڽ��� ������ Ÿ�� ���� �����ִٰ� �ڱ� �ڽ� ���� �ڵ���� ����Ǵ� ��Ȳ ����.
}