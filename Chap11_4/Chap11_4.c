#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define STRLEN 81
int main()
{
	// 문자열 입력받기
	//{
	//	//주의사항 : 저장할 메모리 공간 미리 확보 후 입력 받아야 함.

	//	//char* name = "";
	//	char name[128];
	//	int result = scanf("%s", name);
	//}

	//{
	//	/*
	//		scanf() vs gets()
	//		scanf() reads one word. (%s로 format specifier 지정시 공백 이전까지만 읽으므로.)
	//		gets() reads one line and removes \n and add \0
	//	*/

	//	char words[STRLEN] = "";
	//	gets(words); // gets receives pointer. no idea when string ends
	//	//gets_s(words,sizeof(words)); //C11. 요새는 이걸 더 많이 씀.
	//	//	-> gets(words) 라고만 쓰면 gets() 입장에서 words 가 몇 글자인지 모름.
	//	//	-> 이는 포인터를 인자로 받는 모든 함수의 공통점.
	//	//	-> sizeof(Words)혹은 STRLEN 을 통해 최대로 받을 수 있는 글자 수를 함수에게 알려줌.
	//	//	-> char words[5]; 로 선언하고 5글자보다 더 길게 입력했다면, gets()와 gets_s() 모두 런타임 에러 발생.

	//	//scanf("%s", words);
	//	printf("START\n");
	//	printf("%s", words);
	//	puts(words);
	//	puts("END.");



	//	// puts 자동으로 줄바꿈 해줌. gets도 \n까지 공백나와도 쭉 읽어줌. scanf는 공백 만나면 그만 읽음.
	//}

	//{
	//	/* fgets() vs fputs() */
	//	char words[STRLEN] = "";
	//	fgets(words, STRLEN, stdin); // f는 file.. fgets는 파일 입력도 받을 수 있음.
	//	// STRLEN 길이 만큼만 받고 정상적으로 종료됨. 런타임 에러 발생X. 조금더 안정적으로 사용가능.
	//	// dose not remove \n -> 파일을 입력받을때는 \n 제거 안하는게 나음. 콘솔창 입력받을땐 좀 불편.
	//	
	//	// -> replace \n with \0 code

	//	//솔루션
	//	/*int count = 0;
	//	char* ptr = words;
	//	while ( *ptr != '\n')
	//	{
	//		ptr++;
	//		count++;
	//		continue;
	//	}
	//	words[count] = '\0';
	//	printf("\n");*/
	//	// 
	//
	//	// 교수님 솔루션.
	//	int i = 0;
	//	while (words[i] != '\n' && words[i] != '\0')
	//		i++;
	//	if (words[i] == '\n')
	//		words[i] = '\0';
	//	
	//	fputs(words, stdout); // does not add \n
	//	fputs("END", stdout); //원래 파일입출력에 사용하는데, 표준입출력 사용해 콘솔 입출력 받을 수 있다!
	//	
	//}

	// small array
	//{
	//	/* fgets() 반환값 :
	//	입력버퍼에서 가쟈올게 없거나 혹은 EOF 만나면 null character 반환 
	//	정상적으로 입력되었으면 입력받은 포인터 반환. */

	//	char small_array[5];
	//	puts("Enter long strings : ");
	//	printf("small array address : %p\n", small_array);
	//	printf("fgets return value : %p\n", fgets(small_array, 5, stdin));
	//	fputs(small_array, stdout); // 끝에 null character 포함 5글자 받아들임.

	//}

	//{
	//	/* repeating and short reading*/

	//	char* a;
	//	char small_array[5];
	//	puts("Enter long strings:");
	//	while ((a = fgets(small_array, 5, stdin)) != NULL && small_array[0] != '\n')
	//		fputs(small_array, stdout);
	//	//fgets() 는 입력 버퍼에 있는 \n 까지 가져옴. 
	//	// 유의 ->  디버거 찍어보면, abcdef 입력하고 다시 인풋 기다릴때 enter 누르면
	//	// small_array[3] 이 \n 임을 알 수 있는데, 
	//	// 이건 다른게 아니고 그냥 이전 루프에서 ef\0\n 이 저장될 때, \n이 그대로 남은 것.
	//}

	//scanf()
	{
		//입력받을 글자 수 조정 가능. 
		char str1[6], str2[6];
		int count = scanf("%5s %5s", str1, str2); // format specifier 조정해서 입력받을 글자수 정할 수 있음.
		// int count = scanf("%6s %6s", str1, str2); 
		// 런타임 에러 발생. 문자열의 끝은 항상 \0이어야 하는데, 배열 크기와 일치하게 입력을 받아서
		// 널 문자를 위한 공간을 남기지 않아 런타임 에러가 발생. 이를 방지하기 위해 scanf_s 사용.
		//int count = scanf_s("%5s %5s", str1, 6, str2, 6); 
		// %5s -> 최대 5개의 문자를 읽으라는 것. 
		// 6 -> 해당 문자열 변수에 할당된 메모리의 크기. 이러면 최대 5개의 문자를 읽어서 마지막에 널문자 추가해줌. 
		printf("%s | %s\n", str1, str2);
		
		/* An example of custom input function */
		//custom string input 함수 직접 짜볼 수 있음.(아까 말한 fgets() \0 지워주기, 버퍼 비어주는 기능 구현)
	}
	
	{
		
	}

	return 0;
}

// 뜬금 몰랐던 것들
// int* ptr; 에서 ptr은 배열을 가리킬수도, 정수를 가리킬 수도 있음.
// 이는 사실 