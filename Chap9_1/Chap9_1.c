// Chap9_1.cpp : �Լ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define WIDTH 20
#define NAME    "Jin-ho Jeong"
#define ADDRESS "Seoul, Korea"

// �Լ��� © �� ����ؾ��� ��
// 1. �Ϲ�ȭ -> �� ���� ��쿡 ���� ���� �۵��� �� �ֵ���
// 2, �ߺ� ���� -> ���� ��� ������ ������ �ȵ�.

void print_bar(int n_stars)
{

    for (int i = 0; i < n_stars; i++)
    {
        printf("*");
    }
    printf("\n");

    // printf("*****************\n");
    
}

// blank�� �Է¹��� �� �ֵ��� �Լ��� ����. �ٵ� ������� print_bar�Լ��� �����.
// �ݺ��Ǵ� �۾��� ����. -> ��ĥ �� ����., print_char�Լ�
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
        printf("%c",c); //putchar(c) �ᵵ��. 
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
    //�����丵 �� �ڵ�
    // ���� ��� �̸�, �� ������ 20�� �̻����� �÷��ּ��� ���� 
    // �䱸������ �̸� �����ؾ� ��.
    {
        printf("*****************\n");
        printf("    Jin-ho Jeong\n");
        printf("    Seoul, korea\n");
        printf("*****************\n"); 
        // ���� �ڵ尡 ����¥������, �ι� ��Ÿ���� ����.
        // �Լ��� ����߰ڴ�. ��� ������ ���ܾ� ��. �׷��� ���߿� �����Ҷ� ����.
    }

    // �����丵 ���� �ڵ�. (���� �����丵 �̶�� �θ��⿣ �θ���)
    // 
    {
        print_bar(WIDTH);
        printf("    %s\n", NAME);
        printf("    %s\n", ADDRESS);
        print_bar(WIDTH);        
    }

    print_multiple_chars('*', WIDTH);

    // �߰� �����丵 ����
    {
        int n_blank = 0;

        print_multiple_chars('*', WIDTH);
        printf("\n");

        n_blank = (WIDTH - strlen(WIDTH)) / 2; // x + n_blank + x = WIDTH, x = ?
        printf("\n");
        print_multiple_chars(' ', n_blank);
        printf("    %s\n", NAME);


        pritnf("    %s\n", ADDRESS);
        print_multiple_chars('*', WIDTH);
    }
    
    // �����丵 ver2.
    // ���� ����� �Լ��� ����ؼ� ��Ժ��� �� ������ ������ �ٲ�.
    // ������ �� ���� ���α׷��ӷμ� �ߵ��� �ϱ� ���ؼ�, ���� ���� ���α׷��� 
    // �� �Ϲ�������, �� ��������� ���������Ϸ��� ��� �ؾ� �ϴ°�? �� ����غ� ��. 
    {
        print_centered_str(NAME); // �� �ٲ� �߰��ϰ� ������, ���ڿ� bool end1 �߰��ؼ� , end1�� true�� printf("\n") �߰����ֵ���.
        print_centered_str(ADDRESS);
        print_centered_str("I love you");
    }
    return 0;
}
