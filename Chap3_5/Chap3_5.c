// Chap3_5.cpp : ��ȣ�� ����� ��ó����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float radius, area;
    printf("Input radius\n");
    scanf("%f", &radius);

    area = 3.141592f * radius * radius;

    printf("Area is %f\n", area);

    return 0;
}


