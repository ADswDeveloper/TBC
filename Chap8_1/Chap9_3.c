// Chap 9_3.cpp : 
// ���� ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <conio.h> // windows only, _getche(), _getch()

// getchar�� ���ͷ� ���� ����. Ȥ�� ���� �� ä��� �� ��ä��� �Ѿ.

int main()
{
    char ch;
    while ((ch = _getche()) != '\n') // echo -> �޾Ƹ�. �� �Է��� �ܼ�â�� ǥ������.
    {
        putchar(ch);
    }

    // _getche �� ����Ű�� ������ '\r' �� ��ȯ. getchar()�� '\n' �� ��ȯ.
    // '\r' �� carriage return, ĳ���� �����̶�� �ؼ� Ŀ���� ���� ���� �� ������ �̵���Ŵ. ������ �����ͳ� Ÿ�ڱ⿡�� ���� ���.
    // \\n' �� new lien, �� ���ڴ� Ŀ���� ���� �ٷ� �̵���Ŵ. 
    // ���� putchar('\r') �� ����Ǿ� Ŀ���� ���� ���� �� ������ �̵� ��.
    return 0;
}

