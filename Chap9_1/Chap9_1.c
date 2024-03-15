// Chap9_1.cpp : 함수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define WIDTH 20
#define NAME    "Jin-ho Jeong"
#define ADDRESS "Seoul, Korea"

// 함수를 짤 때 고려해야할 것
// 1. 일반화 -> 더 많은 경우에 대해 쉽게 작동할 수 있도록
// 2, 중복 방지 -> 같은 기능 여러번 나오면 안됨.

void print_bar(int n_stars)
{

    for (int i = 0; i < n_stars; i++)
    {
        printf("*");
    }
    printf("\n");

    // printf("*****************\n");
    
}

// blank도 입력받을 수 있도록 함수를 제작. 근데 만들고보니 print_bar함수와 비슷함.
// 반복되는 작업을 했음. -> 합칠 수 있음., print_char함수
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
        printf("%c",c); //putchar(c) 써도됨. 
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
    //리팩토링 전 코드
    // 여러 사람 이름, 별 개수를 20개 이상으로 늘려주세요 등의 
    // 요구사항을 미리 생각해야 함.
    {
        printf("*****************\n");
        printf("    Jin-ho Jeong\n");
        printf("    Seoul, korea\n");
        printf("*****************\n"); 
        // 같은 코드가 한줄짜리지만, 두번 나타나고 있음.
        // 함수로 묶어야겠다. 라는 버릇이 생겨야 함. 그래야 나중에 수정할때 편함.
    }

    // 리팩토링 이후 코드. (물론 리팩토링 이라고 부르기엔 민망함)
    // 
    {
        print_bar(WIDTH);
        printf("    %s\n", NAME);
        printf("    %s\n", ADDRESS);
        print_bar(WIDTH);        
    }

    print_multiple_chars('*', WIDTH);

    // 추가 리팩토링 이후
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
    
    // 리팩토링 ver2.
    // 같은 기능을 함수를 사용해서 어떻게보면 더 복잡한 구조로 바꿈.
    // 하지만 더 나은 프로그래머로서 발돋움 하기 위해선, 내가 만든 프로그램이 
    // 더 일반적으로, 더 장기적으로 유지보수하려면 어떻게 해야 하는가? 를 고민해볼 것. 
    {
        print_centered_str(NAME); // 줄 바꿈 추가하고 싶으면, 인자에 bool end1 추가해서 , end1이 true면 printf("\n") 추가해주도록.
        print_centered_str(ADDRESS);
        print_centered_str("I love you");
    }
    return 0;
}
