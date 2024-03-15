// Chap 11_1.c : 
// 강의 요약 :
// 1, C언어에서 문자열은 내부적으로 문자의 배열로 다뤄진다. -> 배열이라는 점에 주목하면, 몇 가지 성질이 나오는데 
// 2, 첫 번째로 "abc" 를 printf(%s)로 찍어보면 문자열의 첫 번째 원소의 주소가 나온다.
// 3, 두 번째로, 숫자의 배열이 int[] 형 변수와 int* 형 변수를 선언해서 사용할 수 있었던 것처럼 문자열도 char* 혹은 char[]로 선언해서 사용가능.
// 4, 이  때 char[] 배열로 선언시, 값 바꿀 수 있고, 길이는 넉넉하게 정함(C style)
// 5, char* 로 선언시, 값 바꿀 수 없음.(나중에 이유 알랴줌 - read only memory에 저장됨.)
//      >> char word[10] =  "abc"; -> 메모리에 word를 위한 공간이 할당됨. []로 접근 가능.
//      >> char* a = "ade"; -> 메모리 어딘가에 ade가 저장되고, 그 주소만 a에 가져옴.
// 6, 배열이기 때문에 포인터와도 호환가능.
// 7, puts 함수로 간편하게 출력가능. 마지막에 줄바꿈까지 해줌.
// 8, printf("%s %c", "are", *"ABCD") -> "are" 자체가 배열이기때문에, 첫 원소 주소나옴.
// 문자의 배열은 자동으로 끝에 \0 을 넣어줌.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MESSAGE "A Symbolic string constant"
#define MAXLENGH 81
int main()
{
    // words 와 pt1은 저장되는 방식이 다름.
    // words의 원소는 words[]로 접근. pt1 은 pt1 자체가 주소담고있슴.
    char words[MAXLENGH] = "A String in an array"; // 널캐릭터 포함 21글자.
    // 일부러 넉넉한 공간으로 만듬. 알아서 널캐릭터 붙여줌. " 으로 끝마ㅕㄴ.
    const char* pt1 = "A pointer to a string";

    // pt1은 문자열이 저장된 긴 메모리 공간의 첫 글자를 가리킴. pt1은 주소임!
    // 애는 끝에 널캐릭터가 붙음. 
    // words 와 pt1 두가지 방식으로 문자열 정의 가능. 
    
    
    //문자열 출력
    puts("Puts() adds a newline at the end"); // puts() add \n at the end.
    // 문자열을 리터럴로 넣을 수 도 있음. 
    puts(words); // puts 에 배열이 들어오면 null character 찾을때까지 쭉 읽음.
    // char words[21] removes this warning. 
    // 60개가 초기화 되지 않았다고 경고해주는 것임. 
    puts(pt1);
    // 둘다 똑같이 출력.
    // 다만, words 는 자신만의 공간에 저장됨. 배열
    // pt1은 메모리 어딘가에 저장됨. 

    words[3] = 'p'; // ok
    //pt1[8] = 'A'; // Runtime Error 발생. 
    // 예습 - 읽기 전용 메모리에 저장된 데이터의 값을 바꾸려고 시도하면 os가 중단시킴
    // 그래서 pt1은 const로 선언하는게 좋음. 

    printf("%s, %p, %c\n", "we", "are", *"excellent");
    // 문자열은 c언어에서 문자의 배열로 처리가 되므로, 문자열 "are"의 주소가 출력됨.
    // "excellent" 도, 문자열 "excellent" 의 주소(첫글자가 저장된 메모리 주소)를 역참조 하므로 'e'가 나옴.

    const char m1[15] = "Love you!"; // m1 나머지 부분은 널캐릭터로 초기화됨.
    const char m2[14] = { 'L', 'o', 'v', 'e','\0'}; // 위와 같음. 다만 이 경우 널캐릭터 추가해줘야됨.
    // 사실 널캐릭터 빼도 넣어주긴함 ㅋ

    // 포인터로서의 성질 이용가능.
    char truth[10] = "Truths is";
    if (truth == &truth[0]) puts("true!");
    if (*truth == 'T') puts("true!");
    if (*(truth + 1) == truth[1]) puts("true!");
    if (truth[1] == 'r') puts("true!");

    return 0;
}

