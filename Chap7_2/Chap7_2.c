// Chap 7_2.c : ǥ�� ����� �Լ��� getchar(), putchar() ����
// ���� ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // getchar putchar
#include <string.h>
#include <limits.h>

int main()
{
    //char ch;
    //ch = getchar(); // ���� �ѱ��ھ� �д� �Լ�. 
    ////putchar(ch); // ���� �ѱ��ھ� ���

    //while (ch != '\n')
    //{
    //    putchar(ch);
    //    ch = getchar(ch); // ���ۿ� �����س��Ҵٰ� while ���� ���鼭 �Ѳ����� ��µ�.
    //    // getchar�� �Է����� �ʾ������� ���ۿ� �����س��� ���ڵ��� ����Ʈ��. 
    //} // ù getchar() �� ���� getchar()�� ����ɶ�, ���� Ŀ�ǵ� �����쿡�� �Է��� ���� �ʰ�,
    // ���ۿ� ���� ���� ���� getchar()�� �о�� �� ���۰� �����Ǹ� �ٽ� �Է��� �޴� ��.

    // �� �ڵ�� �ϱ�� ����. �ξ� �����ϰ� © �� ����.
    //char ch;
    //while ((ch = getchar()) != '\n') // ���� ���굵 �򰡵Ǹ�, �Ҵ���� ���� ��ȯ.
    //{
    //    putchar(ch);
    //}

    /* Convert numbers to asterisks */
    //char ch;
    //while ((ch = getchar()) != '\n')
    //{
    //    if (ch >= '0' && ch <= '9') // ���������� ������ �ٷ����� ���� �ƴϱ� �̷��� �� �� �ִ� ��.
    //        ch = '*';
    //    putchar(ch);
    //}

    /*Lower charaters to Upper characters */
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'a' && ch <= 'z')
            ch -= 'A' - 'a';
        putchar(ch);
    }

    return 0;
}

