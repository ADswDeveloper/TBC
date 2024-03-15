// Chap9_2.cpp : 함수의 프로토타입.
// 강의 요약
// 1. 컴파일 시에는 프로토 타입만 있어도 컴파일이 되고, 링킹 타임에 함수의 바디를 찾아나섬.
// 2. 프로토타입 - main - 바디 정의. 순으로 하는 것도 깔끔. 바디는 굳이 main.c(main함수가 있는 c파일) 안에 없어도 됨.
// 참고 : https://ooooohs.tistory.com/entry/%EC%BB%B4%ED%8C%8C%EC%9D%BC%EB%9F%AC%EC%9D%98-%EC%BB%B4%ED%8C%8C%EC%9D%BC%EA%B3%BC-%EB%A7%81%ED%81%AC-%EC%B2%98%EB%A6%AC-%EA%B3%BC%EC%A0%95


// 현대적 프로그래밍. 모든 함수를 다 알수 없음. 가져다 쓰는 것이 아주 흔하고 중요한 시대가 되었음.
// 블랙박스적 관점에서 먼저 함수를 봐야 하고, 짤 때도 그렇게 짜야 함. 
// 어떤 인풋이 들어가고, 어떤 아웃풋이 나오는지. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define WIDTH 20
#define NAME    "Jin-ho Jeong"
#define ADDRESS "Seoul, Korea"


void print_bar(int n_stars); // (formal) parameter. 매개변수화 변수로써 다룬다. 매개변수화 -> 내가 넣는 값에 따라 기능이 달라진다.

// print_bar(5) 할때는 값(value)을 넣어줌. print("dd") 도 마찬가지. 그래서 (actual) argument라고 함.
// void print_bar(int); 이렇게 해줘도 빌드는 됨. 프로토타입 관점에서 봤을땐 어떤 자료형이 들어가는지만 알면 되거든.
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
        // 별과 width 라는 argument를 넣음. 내가 만약 이 함수를 다시 본다고 하면, 어떻게 볼 것인가?
        // 함수 정의된 곳으로 가서, argument 변수명을 보겠지. bool print_newline 이라고 적혀있는 인자라면, 아! new_line을 출력표시에 관여하는 bool이구나를 알 수 있음.
        printf("\n");

        n_blank = (WIDTH - strlen(WIDTH)) / 2; // 
        printf("\n");
        print_multiple_chars(' ', n_blank);
        printf("    %s\n", NAME);

        pritnf("    %s\n", ADDRESS);
        print_multiple_chars('*', WIDTH);
    }

    // 컴파일 시에는 main을 읽어나가다, 함수를 만나면, 함수의 프로토타입(이름, 반환형, 인자)만 있어도 컴파일 가능.
    // 링킹 단계에서 바디를 찾아서 껴맞춤.
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
