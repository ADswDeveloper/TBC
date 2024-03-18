#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#define TEST "A string from #define"

/*

Implement assignment

	puts() which doesn't add a new line at the end
	Use pointer increment operator and putchar()
*/

void custom_put(const char* str); 
int custom_put2(const char* str);

int main()
{
	/* string without \0 */

	//char str[] = { 'H', 'I', '!' }; // "HI!" 라고 초기화했으면 뒤에 null character 붙었음.
	//puts(str); 
	// HI! 뒤에 이상한 문자가 찍힘.
	// 왜 찍히냐, puts는 널 캐릭터를 만날때까지 출력하는데, 널 캐릭터가 없어서 계속 메모리 읽다보니
	// 인덱스 넘어가는 범위까지 읽어서 이상한 문자가 찍히는 것.
	
	/* puts() and fputs() */
	
	//char line[5];
	//void* a = NULL;
	//while ( (a = gets(line))) // NULL 포인터는 0이므로, while(gets(line) != NULL) 과 같음. 
	//	puts(line);
	//// gets() 함수는 입력이 성공적으로 이루어질 시, 문자열의 포인터반환, 아니면 NULL반환. 
	// 그런데 입력이 abcdef 처럼 선언한 배열의 크기보다 더 큰 문자열이 입력으로 들어와도 성공적으로 주소를 반환.
	// 이는 사실 undefined behavior로, 이 성질에 의존하면 안되고 안전하게 fgets(line, sizeof(line), stdin)을 써주는게 나음.

	//while (fgets(line, sizeof(line), stdin))
	//	fputs(line,stdout);

	/*
		scanf()

		-> 여러 단어를 섞어서 입력받기 좋음. 
	*/

	//char input[100];
	//int ret = scanf("%10s", input); // Input : Just do it, do it!\n
	//printf("%s", input); // 10글자를 읽으라고 했지만, Just 밖에 안나옴. 
	//// 왜? scanf는 공백 문자를 만나기 전까지 입력 스트림을 읽어오기 때문. 즉, 한 단어를 읽음.
	//// 하지만 scanf()의 장점은, 여러 자료형이 섞여있을 때 입력받기 편함. 
	//ret = scanf("%10s", input); // 입력 버퍼에 남아있는 do가 출력됨.
	//printf("%s", input);
	//

	custom_put("Just ");
	custom_put("Do it!");

	printf("%d\n", custom_put2("12345"));
	return 0;
}

void custom_put(const char* str)
{
	while (*str != '\0') // 내 실수,, input으로 문자열이 들어오면, 문자열의 끝은 \0 으로 해주잖아. 입력 스트림으로 입력받는게 아니고, 인수로 입력받음.
		putchar(*str++);
}


int custom_put2(const char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		putchar(*str++);
		count++;
	}	
	putchar('\n');

	return count;
	
}