// Chap 9_3.c : ���ȣ�� 
// ���� ��� 


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

void my_func(int n);

int main()
{
    my_func(1);
    return 0;
}

// ���� ������ �����µ� ��� �Լ��� ��������� ����.
// �ֳĸ�, �ϱ� �ڵ带 ������Ѻ� ��ó��, �޸𸮰� ������ �� �� ���� ������ �޸𸮿� ��� ������ ����.
// void my_func(int n)
//{
//    printf("Level %d, address of variable n = %p\n", n, &n); // stack overflow error �߻�.
//    my_func(n + 1);
//
//}
// ���� ������ ���� �������־�� ��.

void my_func(int n)
{
    printf("Level %d, address of variable n = %p\n", n, &n); // stack overflow error �߻�.
    if(n < 4) // stop condition
        my_func(n + 1);
    // ȣ�� ���ϰ� �ִٰ� �� �̻� my_func ȣ������ ���� ��, ȣ��. �μ��� �� ����.
    printf("Level %d, address of variable n = %p\n", n, &n); // �ٽ� ���ƿ��鼭 ����.

    //Todo : stop condition
    //Todo : tail recursion
}
// 