// Chap 8_2.c : ������ ��
// ���� ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{   
    //stream -> �������� �帧.

    int c;
    //EOF�� �ٸ� ����
    while ((c = getchar()) != EOF) // EOF : -1�� �Ǿ�����.
    {
        putchar(c);
    }
    //�� �̻� �Է¹����� ���� ����ϸ� -1��ȯ. ��� �˷���. ��������? os����.
    // getchar�� eof -> ctrl + z
    return 0;
}

