// Chap 8_7.c : �Է� ��Ʈ���� ����
// ���� ��� : ��¼�ٺ��� scanf ���� ���ڿ��� \n �� �ٿ��µ�, �̷��� ����.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

char str[255];
int i, i2;
double d;

int main()
{
    char str[255];
    int i, i2;
    double d;
    char c;

    scanf("%s %d %lf", str, &i, &d); // scanf �� double ������ printf�� �ٸ��� l �ٿ������,.
    printf("%s %d %f\n", str, i, d); 


    scanf("%s %d %lf", str, &i, &i2); // abc 456 1.2345 �Է�.
    printf("%s %d %d\n", str, i, i2);


    while ((c = getchar()) != '\n')
    {
        putchar(c);
    }

    putchar(7);
    //scanf �� Ư¡
    // 1, ������ �Է��� ������.
    // 2, cLI â�� �Է��� ��ǲ�� ����(���ڿ�, string)�� �޾Ƶ��̰� , scanf ���� ���������� �ٽ� ���ڷ� �޾Ƶ���.
    // 3, %d -> ������ �޾ƶ�!, ���ڱ� �ѵ� ���ڷ� 1��  �޾Ҵµ�, scanf ���������δ� .�� �ް� ���� �Է��� ���������� ��� ����. '.'�� ���ڷ� ���ٲٴϱ�.
    // 4, ���ۿ��� .2345 �� �����ְ� ��.. 

    // ������ ���������� ���ڷ� ó���Ѵ� ������. �̵� �ᱹ�� �������� �ٲ� ���۵�.
    printf("Hello");
    return 0;
}

