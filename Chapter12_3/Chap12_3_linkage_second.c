#include <stdio.h>

extern int el;
extern int il; // static���� ���Ƴ��� ������, ��Ŀ�� ã�� ����.

void testLinkage()
{
	printf("Dosomething called\n");
	printf("%d\n",el);
	printf("%d\n", il);

	el++;
}