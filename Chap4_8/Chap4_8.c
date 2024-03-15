// Chap4_8.cpp : 변환 지정자의 수식어들

#include <stdio.h>

// 변환 지정자
// %[flags][width][.precision][length]specifier

// flag -> 깃발. 잘 보이게 땅에 꽂는다.
// 출력 방식이 여러 가지인데 뭘로 하겠다 라고 박아주는..
// - -> 왼쪽으로 붙여줌. right justification is dafault.+랑 반대되는 개념x
// + -> 양수일때도 항상 더하기 기호를 출력하라는 느낌. 원래 양수일땐 빈칸을 출력. 
// # -> 0x 출력
// 0 -> width 지정할 경우 남느 자리를 0으로 채움.

// length -> length sub specifier modifies the lennth of the data type.

int main()
{
    // 0 flag
    // 파일 이름 같은 거 만들때 아주 유용하게 사용.
    // 001 git 002 swc 003 study 이런식으로.
    
    printf("%05i\n", 123); //00123 으로 출력됨.

    // * flag
    // flag를 control string 안에서 지정하는게 아니라, 밖에서 넣어주고 싶은 경우.
    printf("%*i\n", 7, 456);

    // Precision
    printf("%.3d\n", 1234); //1234. 3자리만 출력하시오가 아니라, 만족해야 하는 최소 숫자 개수를 의미. 그래서 1234가 전부 표시됨.
    printf("%.5d\n", 1234); // 01234. 남은 자릿수는 0으로 채움.

    printf("%.3f\n", 123456.1234567); // 123456.123 여기서는 의미가 또 달라짐. 123456.123 
    printf("%.3f\n", 123456.1234567);


    return 0;
}
