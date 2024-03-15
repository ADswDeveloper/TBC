#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Linkage

	variables with block scope, function scope, or function prototype scope
	-No linkage

	File scope varibles
	- External or internal linkage
*/

// �������� ���� : ����. c���� 2�� ������ �����ϵ� ���ε�����.;
// linkage.c �� linkage_second.c �������ؼ� ���� obj ���� 2���� ���� ��.
// �׷��� ��Ŀ�� ��������.

int el;			// file scope with external linkage(global variable). �ٸ� �������� �� �� �ִ�.
static int il;  // file scope with internal linkgae. �ٸ� ���Ͽ��� �� �� ���� ���Ƴ���.
// static -> ���� scope�� �ش� ���Ϸ� ���ѵȴ�. ��� �ǤӰ� ����.
// 
/*
	int el�� ���������� �Ҹ��� ����.
	file scope�� �ִ� ������ ��ġ ���α׷� ��ü���� ����� �� �ִ� �� ó��,(�ٸ� ������ extern)
	�������� ó�� ����Ҽ� �־, ����������� �θ�.
	���� int e1; �س����� ����������� �θ�. �ٸ� ������ extern���� ������ �� �־.
	
*/

void testLinkage(); // �ٸ� ���Ͽ� �ִ� ��ü�� ����ϱ� ����, ������Ÿ���� �־���.

int main()
{
	el = 1024;
	testLinkage();
	prinf("%d\n", el);
	return 0;
}