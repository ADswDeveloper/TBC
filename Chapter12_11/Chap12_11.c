// Chap 12_11.c : �Լ��� ���� ���� �з�
// ���� ��� : �Լ��� �⺻������ extern, ���� ���η� scope�� ������Ű�� ������
// static�� ����� ��. 
// �̴� ���ȭ�� ������ ��. ��� �� ���Ͽ��� �� ���� ���η� �Լ��� scope�� ����,
// �� �ٸ� ��⿡�� �Լ��� ������ �ϰ� ������ static���� ������ ��. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int g_int = 123;
/*
    Storage Classes and function
    - Functions external(by default) or static
    - A function declaration is assumed to be extern
*/

void func();
void fun_second();
// extern void func();
// extern void fun_second(); extern�� �������ִ� ������.

int main()
{

    func();
    fun_second();
    
    return 0;
}

void func()
{
    // int g_int; // ���� �߻�. ���������� �ʱ�ȭ �������.
    // int g_int = 0; // name hiding �߻�.
    extern int g_int;
    g_int += 1;
    printf("g_int in fun() %d %p\n", g_int, &g_int);
}

