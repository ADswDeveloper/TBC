// 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

void f1(int hello, double world); // hello�� world�� scope
// function prototype ������������. line 8���� �����ؼ� line8���� ����.
// �� ���� ������ ������ ��������. ��, void f1(int, double)�� ���� �� ����.

double func_block(double d)
{
    double p = 0.0; // function block.
    {
        p = 3.14; // block �� function scope�� �����ϴ� ����.
    }
    int i;
}

int main()
{
    return 0;
}

