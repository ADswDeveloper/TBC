// Chap 12_3.c : ������ ������ ���� ����, ��ü�� ���� �Ⱓ
// ���� ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

/*
    variable scopes(visibility). (ex visibility -> main ���������� �ٸ� �Լ����� �Ⱥ���.)
    - block, function, function prototype, file(file ��ü.)
    file scope�� ������ ���� ����������� �θ�. 

*/

int g_i = 123; // global variable.(file scope, file�� ��� ������ ��밡��)
int g_j;


void func1()
{
    g_i++;
}

void func2()
{
    g_i += 2;
}


int main()
{
    int local = 1234;

    func1();
    func2();

    printf("%d\n", g_i); // 126
    printf("%d\n", g_j); // 0. �ʱ�ȭ���� ���� ����,���������� 0���� �ʱ�ȭ��.
    printf("%d\n", local); // 1234
    

    

    return 0;
}

