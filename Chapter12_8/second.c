#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// file scope에선 둘중에 한 곳만 초기화 해야 함.
// block scope에선 초기화 불가. 
// 왜 못하냐? 그냥 규칙정도로 생각하셈. 함수내 변수는 stack에 저장되는데
// 재는 Data  세그먼트 에 저장될 놈이니까...

// main.c 에 있는 전역변수 가져다 쓰고 싶은 경우

// 방법 1,
// extern int g_int; 아예 전역에서 선언해도 되고

// 에러 발생. (만약 main.c 에서 int g_int  = 0; 으로 초기화를 해줬다면)
// extern int g_int = 777; 왜 에러발생? -> 초기화 두번 해줘서..
// 어쨌건 초기화는 한번만 해줘야 함. 

// 팁 -> extern 붙으면 선언만 해주기. 그게 덜 헷갈림. 다른 파일에 있는 놈을 가져다 쓸거에요! 라는 의도.
// 일단 컴파일할땐 값 모르는데, 컴파일 해주고 링킹할때 연결이 됨. 

void func_sec()
{
	extern int g_int; // 이렇게 사용할 곳에서 선언해도 됨.
	//extern int g_int = 777; 블록 안에서 초기화 불가.
	g_int += 7;
	printf("g_int in fun_sec() %d %p\n", g_int, &g_int);
	// 메모리 주소 같게 나오고, g_int 연산도 다 보장됨. 
}