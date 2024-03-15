// Chap 8_4.c : 사용자 인터페이스는 친절하게'
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <conio.h>

int main()
{
    int count = 0;
    char c;
    char h;
    //while (1)
    //{
    //    printf("Current count is %d, Continue? (y/n)\n",count);

    //    if ( (c = getchar()) == 'n')
    //        break;
    //    while ((h = getchar()) != '\n')
    //        continue;
    //    // 

    //    // h = getchar(); //이렇게 getchar() 소비해주면, 'y\n' 이 입력으로 들어와도 두번 루프가 도는 일이 없어짐.
    //    count++;
    //}

    int d;
    while (1)
    {
        printf("Current count is %d, Continue? (y/n)\n", count);
        d = getchar();

        if (d == 'n')
            break;
        else if (d == 'y')
            count++;
        else
            printf("please input y or s\n");

        while (getchar() != '\n')
        {
            continue;
        }
        
    }
    
    

    // 사용자는 상상할 수 없는 방법으로 사용을 함. 
    // 거기에 어떻게 대응할지 상상해나가면서 프로그래밍 하는게 좋음.
    return 0;
}

