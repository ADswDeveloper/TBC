// Chap 8_5.c : 숫자와 문자를 섞어서 입력받기
// 강의 요약 

// 필요없는 문자들 버퍼에 남아있으면 소비해주기 + scanf getchar() 적절히 섞어 쓰기.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

void display(char cr, int lines, int width);

int main()
{
    char c;
    int rows, cols;

    while (1)
    {
        scanf("%c %d %d", &c, &rows, &cols); 
        display(c, rows, cols);
        if (c == '\n')  break;

    }
    
    //printf("Input one character and two integers\n");
    //while ((c = getchar()) != '\n')
    //{
    //    scanf("%d %d", &rows, &cols);  
    //    //while (getchar() != '\n') continue;
    //    // 위 while문을 주석처리하고 'a 2 3 ' 을 입력하는 경우와 'a 2 3'을 입력하는 경우 행동이 모두 다르게 나타남.
    //    // 
    //    // 'a 2 3 ' 입력시 -> 첫 while문이 돌아간 후, 버퍼에 ' \n'이 남겨짐. c에는 ' '가 할당되고, scanf는 %d와 매칭되지 않는 '\n'을 만나게 되어,
    //    // 그대로 종료됨. rows와 cols는 이전 값인 2 와 3이 유지됨. 그래서 공백으로 이루어진 빈칸들이 2줄 출력됨. 그러고 다음 입력을 기다림. 
    //    // 
    //    // 'a 2 3' 입력시 -> 첫 while문이 돌아간 후, 입력 버퍼에 '\n'이 남겨짐. c에는 '\n'이 할당되고, while 조건 이 거짓이 되어 while문 탈출.
    //    // 
    //    // 'a 2 3 ' enter 후 'b 1 2' 입력하는 경우
    //    // 'a 2 3 \nb 1 2' 가 입력버퍼에 들어옴. c에 a가 할당되고, 2, 3이 각각 row col 에 할당됨. 
    //    // 다음 while 루프에서, getchar로 ' '를 읽어오고, scanf 가 실행될 때 입력 버퍼의 인덱스는 \n 에 존재. format specifier가 %d 이므로 
    //    // 공백(whitespace character ,공백, 띄어쓰기, enter 등등..) 을 건너뜀.
    //    // 이때, 입력 버퍼의 인덱스는 공백을 건너뛰어 b로 이동. 하지만 %d 와 'b'가 매칭되지 않으므로, 읽기를 실패하고 종료됨. rows와 cols는 이전 값인 2 와 3이 유지됨.
    //    // 입력 버퍼의 인덱스는 여전히 b에 존재. 따라서 다음 getchar에서 c에 'b'가 할당되고, 1 와 2가 각각 rows와 cols에 할당됨.
    //    // 오늘의 교훈 : 아무튼 입력 버퍼에 ' '이나, '\n'이 남으면 이상한 결과를 야기할 수 있음. 그러므로 한줄 입력받았으면, 필요없는 부분, \n, ' ' 는 의도적으로 소비해줘야함.
    //    // fflush 라는 입력버퍼 비우는 함수도 있다는데, 그냥 while(getchar() != '\n') continue; 이게 젤 편함.
    //    display(c, rows, cols);
    //    printf("Input another character and two integers:\n");
    //    printf("Press enter to quit\n");
    //}
    //
    //c = getchar();
    //int q;
    //int w;
    //scanf("%d %d", &q, &w); // a 2 3을 입력해도 q에는 2가 잘 들어감. %d는 입력 버퍼에서 공백을 만나면 공백이 아닌 문자가 나올때까지 무시해서 그럼.
    // 정확히는, 입력 버퍼의 인덱스를 공백이 아닌 문자가 나올때까지 이동시킴. 
    //printf("%c %d %d", c, q, w);
}

void display(char cr, int lines, int width)
{
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%c", cr);
        }
        printf("\n");
    }
}

