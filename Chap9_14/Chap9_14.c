// Chap 9_14.c : �����Ϳ� �ڵ� ��Ÿ��.
// ���� ��� : ������ ���� ���� ��,asterisk ��ġ�� ���̴� ��Ÿ���� ��, ���̴� ����. 
// int* a; �� �ؼ� -> int�� ������ �ּҸ� ��� ������ ���� a�� ����.
// int* a = 3; Ȥ�� int* a; ���� *�� ������ ������� �����ϴ� �뵵
// *a �� redirection, dereference �� �ǹ�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    // int *a_ptr vs int* a_ptr; ���ڰ� cpp ��Ÿ��. �׳� ������ ������ �ƴ� int ������ �ּҸ� �����ϴ� ������ ������� �ǹ̰� �� �ʹ���.
    // int *myptr, sec_ptr; sec_ptr�� ������ �����ƴ�.

    int* a, b; // a�� ������ ����, b�� int��. 
    
    // cpp ��Ÿ��. cpp�� �ַ��� ���Ǽ� �ڵ����� int�� �پ����.
    int* a; // int ������ �ּҸ� �����ϴ� a
    int* b; // 

   

    printf("Hello");
    return 0;
}

