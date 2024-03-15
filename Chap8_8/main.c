// Chap 8_8.c : 교수님 코드
// 강의 요약 

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

// 리팩토링 : 버퍼 비워주는 부분이 겹침. 저거 포함, 첫 번째 글자받는 함수를 생성 가능.
// 어차피 첫 글자만 따질거고, def 들어오는 경우도 ef 굳이 출력해줄 필요 없으니..
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
