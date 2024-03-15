// Chap4_3.cpp : 문자열이 메모리에 저장되는 구조 

// 기본 데이터 타입에 따라 배열 크기 달라짐. 같은 size의 숫자의 배열과 문자의 배열은 크기가 다름.  
// 문자는 한 글자단위로 저장됨. 문자의 배열도 한 글자 단위로 저장됨. 이 때, 내부적으로는 정수가 대응된다는 것에 유의. 변환은 아스키 테이블을 이용.
// 문자열의 끝이 어디인지 알리기 위해, '\0' 이라는 null character를 사용. 문자 배열만 예외적으로 그런 것.
// 
// int a[10], 리터럴은 {1,2,...,}
// char str[10] 리터럴은 "abcde" 로 하거나  {'a','b',...,'e'} 예외적으로 문자열의 끝에 null character를 넣음. 혹은 null character를 만나면 printf 는 출력을 멈춤.
// QnA

#include <stdio.h>


int main()
{
	// 숫자의 배열 선언
	{
		int a = 1;

		// int 공간 10개, 40 바이트 공간.
		int int_arr[10] = { 0,1,2,3,4,5,6,7,8,9 }; // 배열을 정의할 수 있게 중괄호를 이용.


		// int_arr[0] 이것도 주소.
		// 인덱스 0부터 시작함에 유의.
		printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);

		// 주의. 실수 많이 함.
		printf("%i\n", int_arr[10]); // 에러뜸.

	}

	//printf 가 문자열을 출력할때 종료되는 메커니즘 & 
	{
		char c = 'a'; // 내부적으로 아스키테이블에서 대응하는 숫자가 저장됨.

		
		char str1[10] = "Hello"; // 예외적으로 문자열은 뒤에 null character가 붙음.
		// 10이라고 선언했지만, null character 를 마지막에 저장하기 위해 최대 9글자만 저장할 수 있다.
		// 실제로는 "Hello\0"으로 저장되어있음. 6개의 char가 저장됨.

		// 초기화 방식이 2가지가 존재
		char str2[10] = { 'H', 'i' };

		printf("%c\n", c);
		printf("%s\n", str1); 
		printf("%s\n", str2);
		
		// printf가 출력할 때, str1의 size가 10이니까 'Hello     '이렇게 공백도 출력해야 하는거 아닐까? 라는 의문을 가질 수 있는데,
		// printf가 문자열을 출력하는 경우, 문자열의 처음부터 한 글자글자 마다 출력하다가, 마지막 '\0' null character를 만나면 출력을 멈춤.
		// 또 그렇게 하기 위해서 \0 을 추가하는 것이기도 함.
		printf("%c\n", c);
		printf("%s", str1);
		printf("%s\n", str2);

		char str4[20] = "Hello, \0world";
		printf("%s\n", str4); // Hello, 까지만 나옴. null character를 만나 printf 가 작동을 중단함.

		//그렇다고 str4가 바뀌는건 아님. 10번째 원소, 11번째 원소를 찍어보면 잘 출력됨.
		printf("%c\n", str4[10]); // r
		printf("%c\n", str4[11]); // l
	}

	// 문자열 길이 실험.
	{
		char test[5] = "JJH";
		printf("%s\n", test);
	}
}
