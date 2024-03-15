#include <stdio.h>

extern int el;
extern int il; // static으로 막아놨기 때문에, 링커가 찾지 못함.

void testLinkage()
{
	printf("Dosomething called\n");
	printf("%d\n",el);
	printf("%d\n", il);

	el++;
}