// Chap 9_17.c  : ������ ������ ũ�� 
// ���� ��� : �ּ��� ũ��� �� ������.(x86, x64�� ���� ���̴� ����.)
// �پ��� �ڷ����� ���� ������ ������ ũ�Ⱑ ����.
// �޸� �ּ��� ���� �����ϴ� ���� �������̱⶧���� �̷� ������ ��Ÿ��.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    char a = 1;
    float b = 3;
    double c = 5;
    
    char* ptr_a = &a;
    float* ptr_b = &b;
    double* ptr_c = &c;

    printf("%zd %zd %zd\n", sizeof(a), sizeof(b), sizeof(c)); // 1 4 8
    printf("%zd %zd %zd\n", sizeof(ptr_a), sizeof(ptr_b), sizeof(ptr_c)); // 4 4 4
    printf("%zd %zd %zd\n", sizeof(&a), sizeof(&b), sizeof(&c)); // 4 4 4
    printf("%zd %zd %zd\n", sizeof(char*), sizeof(float*), sizeof(double*)); // 4 4 4

    // 4����Ʈ��.
    // 1����Ʈ�� ������ �ּ��� ũ�⳪, 4����Ʈ�� ������ �ּ��� ũ�⳪, 8����Ʈ�� ������ �ּ��� ũ��� ����.
    // �ǹ� ũ��� �޶� ���� ��ȣ�� ���� �Ͱ� ����.


    return 0;
}