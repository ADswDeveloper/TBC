#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int g_int;

// ����� ������µ� �ܺο��� fun_second �� �����ϰ� ����� ����.
// tool �Լ��� �ش� ��� �ۿ��� ����� ���� ���ٸ�,

//static void fun_second() // ���� ��ü�� �Լ��� scope�� ������Ŵ. main.c���� ��ã��.
void fun_second()
{
	tool(); 
	g_int += 1;
	printf("g_int in fun_second() %d %p\n", g_int, &g_int);

}
static void tool(void)
{
	// second.c ������ ����� �� ����. 
}