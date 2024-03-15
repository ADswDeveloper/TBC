// Chap 9_3.cpp : 
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <conio.h> // windows only, _getche(), _getch()

// getchar는 엔터로 버퍼 보냄. 혹은 버퍼 꽉 채우면 더 못채우고 넘어감.

int main()
{
    char ch;
    while ((ch = _getche()) != '\n') // echo -> 메아리. 내 입력을 콘솔창에 표시해줌.
    {
        putchar(ch);
    }

    // _getche 는 엔터키를 만나면 '\r' 을 반환. getchar()는 '\n' 을 반환.
    // '\r' 는 carriage return, 캐리지 리턴이라고 해서 커서를 현재 줄의 맨 앞으로 이동시킴. 오래된 프린터나 타자기에서 쓰던 방식.
    // \\n' 은 new lien, 이 문자는 커서를 다음 줄로 이동시킴. 
    // 따라서 putchar('\r') 가 실행되어 커서다 현재 줄의 맨 앞으로 이동 됨.
    return 0;
}

