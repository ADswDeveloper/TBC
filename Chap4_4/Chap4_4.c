// Chap4_4.cpp : strlen() 함수

#include <stdio.h>
#include <string.h> // strlen and more
#include <stdlib.h>

int main()
{
    //strlen()과 sizeof의 차이
    {
        char str1[100] = "Hello"; // 나머지는 0으로 채우는데, 사실 모든 컴파일러에서 0으로 채운다는 보장은 없음.
        char str2[] = "Hello"; // 알아서 글자 수 맞춰서 넣으라는 의미로 공백을 넣을 수 있음. "Hello" 에 마우스 커서를 대보면 6이 뜸.
        char str3[100] = "\0";
        char str4[100] = "\n";

        // strlen() 함수는 길이를 셀때 null character는 빼줌.인간에게 의미있는 문자만 카운트.

        printf("%zu %zu\n", sizeof(str1), strlen(str1)); // 100 5. 
        printf("%zu %zu\n", sizeof(str2), strlen(str2)); // 6 5
        printf("%zu %zu\n", sizeof(str3), strlen(str3)); // 100 0
        printf("%zu %zu\n", sizeof(str4), strlen(str4)); // 100 1
    }


    // 포인터형 변수로도 배열 선언 가능. 다만 할당되는 메모리 크기를 알 수는 없어, 메모리 주소의 크기만을 알 수 있음.
    {
        char *str5 = (char*)malloc(sizeof(char) * 100);
        str5[0] = 'H';
        str5[1] = 'e';
        str5[2] = 'l';
        str5[3] = 'l';
        str5[4] = 'o';
        str5[5] = '\0';

        printf("%zu %zu\n", sizeof(str5), strlen(str5)); // 4 5
        // char *str5는 포인터 타입의 변수로써, 메모리 주소를 저장하는 변수.
        // 포인터 타입의 변수는 메모리를 할당받을 크기를 알 수 없기 때문에, 마치 주소를 적는 메모지의 크기처럼 메모리 주소의 크기만을 알 수 있음.
        // 따라서, sizeof(str5) 의 결과 값 4byte의 경우, '할당된 메모리의 크기' 가 아닌 메모리 주소의 크기인 것.
        // 여기서 이해 안되도 ㄱㅊ

    }

    

}
