// Chap 12_9.c : ���� ������ ���� ���� internal linkage. 
// ���� ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int g_int = 123; // defining declaration. �� �Ѱ������� ����..

static int sg_int; // �̷��� �ٸ� ���Ͽ��� extern int sg_int; �� referencing declaration. �ص� ��ũ�����߻�.
// static Ű����� �ܺ� ���ϰ� ��Ű�� ������. 

int main()
{
    
    printf("Hello");
    return 0;
}

