#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// duration -> object가 가진 메모리의 지속 기간.

/*
	Storage duration
	- static storage duration
	(Note : 'static' keyword indicates the linkage type, not the storage duration
	- automatic storage duration 
	- allocated storage duration
	- thread storage duration

	- static storage duration -> 프로그램 시작할때 메모리에 자리잡고 끝날때까지 메모리에 자리잡음(정적)
	  변수 선언시 static은 scope을 제한한다는 의미.
	- automatic storage duration -> 보통 지역 변수. stack에 저장.
	- allocated storage duration -> 동적 할당과 관련. 
	- thread storage duration -> 멀티 쓰레딩 개념...나중에..
*/

void count()
{
	int ct = 0;
	printf("count = %d\n", ct);
	ct++;
} // scope 종료시 ct 끝.

void static_count()
{
	static int ct = 0;
	printf("Static count = %d\n", ct);
	ct++;
}

int main()
{
	count(); // 0
	count(); // 0 함수 scope 종료되면 메모리도 사라짐. 
	static_count(); // 0
	static_count(); // 1 . 함수 scope 종료되도 값 유지됨. 메모리가 유지되서. 
}