// Chap 8_8.c : ������ �ڵ�
// ���� ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

char get_choice(void);
int get_intnum();
void count(int num);

int main()
{
    int user_choice;
    int input_int;
    while (1)
    {
        printf("Enter the letter of your choice: \n");
        printf("a. avengers\tb.beep\n");
        printf("c. count\tq.quit\n");
        user_choice = get_choice();

        switch (user_choice)
        {
        case 'a':
            printf("Avengers assemble\n");
            break;
        case 'b':
            putchar(7);
            break;
        case 'c':
            input_int = get_intnum();
            count(input_int);
            break;
        case 'q':
            return 0;
        default:
            printf("Error with %d.\n", user_choice);
            exit(1);
            break;
        }
    }
    return 0;
}

// �����丵 : ���� ����ִ� �κ��� ��ħ. ���� ����, ù ��° ���ڹ޴� �Լ��� ���� ����.
// ������ ù ���ڸ� �����Ű�, def ������ ��쵵 ef ���� ������� �ʿ� ������..
char get_choice(void)
{
    char a = getchar();
    while (a != 'a' && a != 'b' && a != 'c' && a != 'q')
    {
        printf("Wrong input. please try againg \n");
        while (getchar() != '\n')
            continue;
        a = getchar();
    }
    
    while (getchar() != '\n')
        continue;

    return a;
}
int get_intnum()
{   
    int input;
    char c;
    printf("Please input a int number\n");
    while (scanf("%d", &input) != 1)
    {
        printf("Your input : ");
        while ( (c = getchar()) != '\n')
        {
            
            putchar(c);
        }
        printf("is not a int num. please try again\n");
    }

    while (getchar() != '\n')
    {
        continue;
    }
    return input;
}
void count(int num)
{
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }
}
