// Chap 7_8.c : 
// 강의 핵심
// 1, flag를 사용해 단어의 시작, 문장의 시작 판별하는 알고리즘
// 2, while문 밖에 미리 내가 세팅한 flag 논리에 맞게 상태 정의해놓기. word_flag는 false여야 함.
// 3, flag를 이용해 상태를 나타내고, 그 상태에 맞게, 상태 전환에 맞게 알고리즘을 구현할 수 있다.
/*
*  flag를 이용해 상태를 나타냄.
*  단어가 끝나고 시작하는 것을 구분해야 함.
*  하나의 단어가 시작되어 끝나지 않은 동안은 flag가 true, 하나의 단어가 끝나면 flag를 false로
*  라고 정의하기로 했다.
*  그럼 true 일 동안은 단어 수를 세지 않고, false에서 true로 바뀔때 단어 수를 + 해주기. 
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#include <ctype.h>
#define STOP '.'

int main()
{
    char ch;
    int n_chars = 0;
    int n_lines = 0;
    int n_words = 0;
    bool word_flag = false;
    bool line_flag = false;

    // 이거 첨부터 이렇게 못짰다고 좌절하지 말기.
    // 패턴을 학습하기!. flag 패턴
    // 숙련된 프로그래머는 많은 패턴을 잘 알고 있음.

    while ((ch = getchar()) != STOP)
    {
        if (!isspace(ch))
        {
            n_chars++;
        }

        if (!isspace(ch) && !line_flag) // 새 라인이 시작할때
        {
            n_lines++;
            line_flag = true;
        }
        if (ch == '\n') line_flag = false;

        if (!isspace(ch) && !word_flag) // 현재 보고 있는 문자가 공백이 아니고, 전 플래그가 false라면,
        {
            n_words++; // 단어 수 세주고
            word_flag = true; // 플래그는 true로.
        }

        if (issapce(ch)) word_flag = false; // 요것도 isspace(ch == true) 하면 에러뜸. isspace가 참일때 반환값이 1 81234 이런거라서..
    }

    // if (!isspace(ch) && !word_flag) 에서 !isspace(ch)가 들어가야 하는 이유는,
    // abc       def 라고 나오면
    // '새 단어를 시작'한다고 정한 내 판별 조건(!word_flag)이 blacnk도 새 단어로 인식해 flag를 true로 만들기때문.
    // 마찬가지로 line이 바뀌는 것도,
    // abc
    //   
    // de 처럼 문장은 두개지만, ' ''\n' 을 만나면 띄어쓰기도 한 문장으로 인식.

    printf("Characters = %d, words = %d, Lines = %d\n", n_chars, n_words, n_lines);
    return 0;
}

