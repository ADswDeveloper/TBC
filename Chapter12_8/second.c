#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// file scope���� ���߿� �� ���� �ʱ�ȭ �ؾ� ��.
// block scope���� �ʱ�ȭ �Ұ�. 
// �� ���ϳ�? �׳� ��Ģ������ �����ϼ�. �Լ��� ������ stack�� ����Ǵµ�
// ��� Data  ���׸�Ʈ �� ����� ���̴ϱ�...

// main.c �� �ִ� �������� ������ ���� ���� ���

// ��� 1,
// extern int g_int; �ƿ� �������� �����ص� �ǰ�

// ���� �߻�. (���� main.c ���� int g_int  = 0; ���� �ʱ�ȭ�� ����ٸ�)
// extern int g_int = 777; �� �����߻�? -> �ʱ�ȭ �ι� ���༭..
// ��·�� �ʱ�ȭ�� �ѹ��� ����� ��. 

// �� -> extern ������ ���� ���ֱ�. �װ� �� �򰥸�. �ٸ� ���Ͽ� �ִ� ���� ������ ���ſ���! ��� �ǵ�.
// �ϴ� �������Ҷ� �� �𸣴µ�, ������ ���ְ� ��ŷ�Ҷ� ������ ��. 

void func_sec()
{
	extern int g_int; // �̷��� ����� ������ �����ص� ��.
	//extern int g_int = 777; ���� �ȿ��� �ʱ�ȭ �Ұ�.
	g_int += 7;
	printf("g_int in fun_sec() %d %p\n", g_int, &g_int);
	// �޸� �ּ� ���� ������, g_int ���굵 �� �����. 
}