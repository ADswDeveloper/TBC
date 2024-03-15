#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// duration -> object�� ���� �޸��� ���� �Ⱓ.

/*
	Storage duration
	- static storage duration
	(Note : 'static' keyword indicates the linkage type, not the storage duration
	- automatic storage duration 
	- allocated storage duration
	- thread storage duration

	- static storage duration -> ���α׷� �����Ҷ� �޸𸮿� �ڸ���� ���������� �޸𸮿� �ڸ�����(����)
	  ���� ����� static�� scope�� �����Ѵٴ� �ǹ�.
	- automatic storage duration -> ���� ���� ����. stack�� ����.
	- allocated storage duration -> ���� �Ҵ�� ����. 
	- thread storage duration -> ��Ƽ ������ ����...���߿�..
*/

void count()
{
	int ct = 0;
	printf("count = %d\n", ct);
	ct++;
} // scope ����� ct ��.

void static_count()
{
	static int ct = 0;
	printf("Static count = %d\n", ct);
	ct++;
}

int main()
{
	count(); // 0
	count(); // 0 �Լ� scope ����Ǹ� �޸𸮵� �����. 
	static_count(); // 0
	static_count(); // 1 . �Լ� scope ����ǵ� �� ������. �޸𸮰� �����Ǽ�. 
}