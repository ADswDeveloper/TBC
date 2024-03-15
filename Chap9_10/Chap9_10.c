// Chap 9_10.cpp : �Ǻ���ġ ������ ��� ȣ���� �����
// ���� ��� : ���ȣ�� -> 
// 1, �޸𸮸� ��ȿ�������� ���.(�޸� ����� �������(�� ���� ��))
// 2, double recursion�� ���, �ߺ����� �ҷ���. 5�� ���� f(4), f(3) �� ���. f(4)�� �ٽ� f(3)�� �ҷ��´ٶ�� ��.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

/*
    Fibonacci sequence
    1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

    ex) fibonacci(5) = 3 + 2 = fibonacci(4) + fibonacci(3)
*/
int fibonacci(int number);

int main()
{
    for (int count = 1; count < 13; count++)
        printf("%d ,", fibonacci(count));

    printf("Hello");
    return 0;
}

int fibonacci(int number)
{
    if (number == 1 || number == 2)
    {
        return 1;
    }

    return fibonacci(number - 2) + fibonacci(number - 1);
        
}

// Note : memory inefficiency(���ÿ� ���̴� ���� + �Լ�ȣ�⿡���Ǵ� �޸𸮷ε�) , redundant computation(�ߺ��� ȣ��. �ѹ��� �Լ��� ȣ���ϴ°� �ƴ�)
// ������ ���������� ���������� �޸𸮵� �� ���� ��� �Ѵ�. There is no free lunch!
// 