// Chap 8_6 c : �Է� Ȯ���ϱ�.
// ���� ��� : ����ڴ� � �Է��� ������ ������ �� ����. ������ ��� ��쿡 ��ó�ϴ� �ڵ�© �� �ֵ���.
// �� �ǵ��� �°� ���� �Է����� Ȯ���ϴ� ���� �ʿ�.

// 

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

long get_long(void);

int main()
{
    while (1)
    {
        long input = get_long;
        if (1 < input && input < 100)
        {
            printf("Right input. Your input is %d\n", input);
            break;
        } // ���ϴ� ��츸 break�� Ż��.
        else
        {
            printf("Wrong input. please try again.");
        } // 1���� 100���� �ƴϸ� ���ѷ���.

    }
    return 0;
}

long get_long(void)
{
    printf("please input an integer and press enter\n");

    long input;
    char c;

    while (scanf("%ld", &input) != 1)
    {
        printf("Your input : ");
        while ((c = getchar()) != '\n')
        {
            putchar(c);
        }
        printf(" - is not an integer. please try agian\n");
    }

    printf("Your input %d is an integer. Thank you.n\n", input);

    return input;
}