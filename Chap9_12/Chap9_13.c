// Chap 9_13.c : �������� �۵� ����.
// ���� ��� : 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int a, b;
    a = 123;

    int (*a_ptr); // * : asterisk. 
    a_ptr = &a; // & : adress-of operator.
    // a�� ������ ����ϴ� �޸� ������ �ּ�, ������ ����ϴ� ���� �߿����� ù ��° �ּҸ� ��ȯ.

    printf("%d %d %p\n", a, *a_ptr, a_ptr);// *a_ptr : redirection operator �̿�. a_ptr�� ����Ű�� �ִ� �ּҷ� ���� �� ��������.
    //a_ptr �ּҰ��� 16������ ���(%p)�ǰ�, �����ų������ �޶���.

    *a_ptr = 456;
    printf("%d %d %p\n", a, *a_ptr, a_ptr);// a�� ��� ������ �ּҰ��� ����

    a = 1004;
    printf("%d %d %p\n", a, *a_ptr, a_ptr);// a�� ��� ������ �ּҰ��� ����

    b = a_ptr; // warning : int' differs in levels of indirection from 'int *'. (indiretion�� redirecition���� �����ϸ��.)
    // b = *a_ptr �̰� �Ϸ��� �ߴ��� �ƴϴ�? ��� ������ִ� ��.
    // ������ �ƴ϶� ���� ����ִ� ������, Ȥ�� ���α׷��Ӱ� �ּҰ��� ������ ĳ���� �ϰ� �ִ� �� �ƴѰ�? ��� �����ؼ� �׷�.
    // b = (int)a_ptr; �̷��� ���� �� �ƴѰ� �ϰ� ������ ����� ����. �����Ӵٴ� ö��.
    // ��·�� �ּҰ��� ���������� ���ڰ��̴� int�� ������ ���� ������, �ǹ����� ����ϴ� ���� ���� ����. 
    
    b = *a_ptr; // �տ� redirection �ٿ��� ���� ����. 

    printf("%d", b);
    return 0;
}

