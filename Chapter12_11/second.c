#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int g_int;

// 모듈을 만들었는데 외부에선 fun_second 만 접근하게 만들고 싶음.
// tool 함수가 해당 모듈 밖에서 사용할 일이 없다면,

//static void fun_second() // 파일 전체로 함수의 scope를 한정시킴. main.c에서 못찾음.
void fun_second()
{
	tool(); 
	g_int += 1;
	printf("g_int in fun_second() %d %p\n", g_int, &g_int);

}
static void tool(void)
{
	// second.c 에서만 사용할 수 있음. 
}