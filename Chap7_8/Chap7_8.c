// Chap 7_8.c : 
// ���� �ٽ�
// 1, flag�� ����� �ܾ��� ����, ������ ���� �Ǻ��ϴ� �˰���
// 2, while�� �ۿ� �̸� ���� ������ flag ���� �°� ���� �����س���. word_flag�� false���� ��.
// 3, flag�� �̿��� ���¸� ��Ÿ����, �� ���¿� �°�, ���� ��ȯ�� �°� �˰����� ������ �� �ִ�.
/*
*  flag�� �̿��� ���¸� ��Ÿ��.
*  �ܾ ������ �����ϴ� ���� �����ؾ� ��.
*  �ϳ��� �ܾ ���۵Ǿ� ������ ���� ������ flag�� true, �ϳ��� �ܾ ������ flag�� false��
*  ��� �����ϱ�� �ߴ�.
*  �׷� true �� ������ �ܾ� ���� ���� �ʰ�, false���� true�� �ٲ� �ܾ� ���� + ���ֱ�. 
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#include <ctype.h>
#define STOP '.'

int main()
{
    char ch;
    int n_chars = 0;
    int n_lines = 0;
    int n_words = 0;
    bool word_flag = false;
    bool line_flag = false;

    // �̰� ÷���� �̷��� ��®�ٰ� �������� ����.
    // ������ �н��ϱ�!. flag ����
    // ���õ� ���α׷��Ӵ� ���� ������ �� �˰� ����.

    while ((ch = getchar()) != STOP)
    {
        if (!isspace(ch))
        {
            n_chars++;
        }

        if (!isspace(ch) && !line_flag) // �� ������ �����Ҷ�
        {
            n_lines++;
            line_flag = true;
        }
        if (ch == '\n') line_flag = false;

        if (!isspace(ch) && !word_flag) // ���� ���� �ִ� ���ڰ� ������ �ƴϰ�, �� �÷��װ� false���,
        {
            n_words++; // �ܾ� �� ���ְ�
            word_flag = true; // �÷��״� true��.
        }

        if (issapce(ch)) word_flag = false; // ��͵� isspace(ch == true) �ϸ� ������. isspace�� ���϶� ��ȯ���� 1 81234 �̷��Ŷ�..
    }

    // if (!isspace(ch) && !word_flag) ���� !isspace(ch)�� ���� �ϴ� ������,
    // abc       def ��� ������
    // '�� �ܾ ����'�Ѵٰ� ���� �� �Ǻ� ����(!word_flag)�� blacnk�� �� �ܾ�� �ν��� flag�� true�� ����⶧��.
    // ���������� line�� �ٲ�� �͵�,
    // abc
    //   
    // de ó�� ������ �ΰ�����, ' ''\n' �� ������ ���⵵ �� �������� �ν�.

    printf("Characters = %d, words = %d, Lines = %d\n", n_chars, n_words, n_lines);
    return 0;
}

