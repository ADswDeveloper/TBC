// Chap9_2.cpp : �Լ��� ������Ÿ��.
// ���� ���
// 1. ������ �ÿ��� ������ Ÿ�Ը� �־ �������� �ǰ�, ��ŷ Ÿ�ӿ� �Լ��� �ٵ� ã�Ƴ���.
// 2. ������Ÿ�� - main - �ٵ� ����. ������ �ϴ� �͵� ���. �ٵ�� ���� main.c(main�Լ��� �ִ� c����) �ȿ� ��� ��.
// ���� : https://ooooohs.tistory.com/entry/%EC%BB%B4%ED%8C%8C%EC%9D%BC%EB%9F%AC%EC%9D%98-%EC%BB%B4%ED%8C%8C%EC%9D%BC%EA%B3%BC-%EB%A7%81%ED%81%AC-%EC%B2%98%EB%A6%AC-%EA%B3%BC%EC%A0%95


// ������ ���α׷���. ��� �Լ��� �� �˼� ����. ������ ���� ���� ���� ���ϰ� �߿��� �ô밡 �Ǿ���.
// ���ڽ��� �������� ���� �Լ��� ���� �ϰ�, © ���� �׷��� ¥�� ��. 
// � ��ǲ�� ����, � �ƿ�ǲ�� ��������. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define WIDTH 20
#define NAME    "Jin-ho Jeong"
#define ADDRESS "Seoul, Korea"


void print_bar(int n_stars); // (formal) parameter. �Ű�����ȭ �����ν� �ٷ��. �Ű�����ȭ -> ���� �ִ� ���� ���� ����� �޶�����.

// print_bar(5) �Ҷ��� ��(value)�� �־���. print("dd") �� ��������. �׷��� (actual) argument��� ��.
// void print_bar(int); �̷��� ���൵ ����� ��. ������Ÿ�� �������� ������ � �ڷ����� �������� �˸� �ǰŵ�.
void print_blank(int n_blank)
{
    for (int i = 0; i < n_blank; i++)
    {
        printf(" ");
    }
    printf("\n");
}

void print_multiple_chars(char c, int n_stars)
{
    for (int i = 0; i < n_stars; i++)
    {
        printf("%c", c);  
    }

}

void print_centered_str(char str[])
{
    int n_blank = 0;

    n_blank = (WIDTH - strlen(str)) / 2; // 
    printf("\n");
    print_multiple_chars(' ', n_blank);
    printf("%s\n", str);

}

int main()
{

    {
        printf("*****************\n");
        printf("    Jin-ho Jeong\n");
        printf("    Seoul, korea\n");
        printf("*****************\n");

    }

    {
        print_bar(WIDTH);
        printf("    %s\n", NAME);
        printf("    %s\n", ADDRESS);
        print_bar(WIDTH);
    }

    {
        int n_blank = 0;

        print_multiple_chars('*', WIDTH); 
        // ���� width ��� argument�� ����. ���� ���� �� �Լ��� �ٽ� ���ٰ� �ϸ�, ��� �� ���ΰ�?
        // �Լ� ���ǵ� ������ ����, argument �������� ������. bool print_newline �̶�� �����ִ� ���ڶ��, ��! new_line�� ���ǥ�ÿ� �����ϴ� bool�̱����� �� �� ����.
        printf("\n");

        n_blank = (WIDTH - strlen(WIDTH)) / 2; // 
        printf("\n");
        print_multiple_chars(' ', n_blank);
        printf("    %s\n", NAME);

        pritnf("    %s\n", ADDRESS);
        print_multiple_chars('*', WIDTH);
    }

    // ������ �ÿ��� main�� �о����, �Լ��� ������, �Լ��� ������Ÿ��(�̸�, ��ȯ��, ����)�� �־ ������ ����.
    // ��ŷ �ܰ迡�� �ٵ� ã�Ƽ� ������.
    {
        print_centered_str(NAME); // 
        print_centered_str(ADDRESS);
        print_centered_str("I love you");
    }
    return 0;
}


void print_bar(int n_stars)
{

    for (int i = 0; i < n_stars; i++)
    {
        printf("*");
    }
    printf("\n");

}
