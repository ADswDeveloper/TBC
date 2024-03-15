#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Linkage

	variables with block scope, function scope, or function prototype scope
	-No linkage

	File scope varibles
	- External or internal linkage
*/

// 컴파일의 단위 : 파일. c파일 2개 있으면 컴파일도 따로따로함.;
// linkage.c 과 linkage_second.c 컴파일해서 나온 obj 파일 2개는 서로 모름.
// 그래서 링커가 연결해줌.

int el;			// file scope with external linkage(global variable). 다른 곳에서도 볼 수 있다.
static int il;  // file scope with internal linkgae. 다른 파일에서 볼 수 없게 막아놓음.
// static -> 현재 scope가 해당 파일로 제한된다. 라는 의ㅣ가 있음.
// 
/*
	int el이 전역변수로 불리는 이유.
	file scope에 있는 변수는 마치 프로그램 전체에서 사용할 수 있는 것 처럼,(다른 파일의 extern)
	전역변수 처럼 사용할수 있어서, 전역변수라고 부름.
	보통 int e1; 해놓으면 전역변수라고 부름. 다른 곳에서 extern으로 연결할 수 있어서.
	
*/

void testLinkage(); // 다른 파일에 있는 몸체를 사용하기 위해, 프로토타입을 넣어줌.

int main()
{
	el = 1024;
	testLinkage();
	prinf("%d\n", el);
	return 0;
}