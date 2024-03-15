// Chap 9_3.cpp : 
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    int c;
    FILE* file = NULL; // file은 포인터변수. 주소가 저장이됨. 
    char file_name[] = "my_file.txt"; // Todo : use scanf()
    // vcxproj 파일과 같은 위치에 있으면 대부분 잘 찾음.


    file = fopen(file_name, "r"); // file open 의 약자. file stream을 open.
    // file 수정 통로를 open 하는 것. 
    // "r" 옵션 - read only. "w" 옵션 - 데이터를 저장하고 싶을 때
    if (file == NULL) // 그런 file이 없는 경우
    {
        printf("Failed to open file.\n");
        exit(1); // 보통 실패하면 1이나 -1로 끝냄.
    }

    while ((c = getc(file)) != EOF) // getc -> 파일스트림.
    {
        putchar(c);
    }
    fclose(file);

    
    

    
    return 0;
}

