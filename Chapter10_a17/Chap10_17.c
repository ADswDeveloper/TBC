// Chap 10_17.c : �������� �迭.
// ���� ��� 


// �������� �迭�̶�� �ؼ�, �̹� ������ �迭�� ���̰� ���ϴ� ���� �ƴ�. 
// �ѹ� ���̰� ������ �迭�� ���̰� ����.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n = 5;
    //float my_arr[n]; // ���־� ��Ʃ��������� �������� ����.
    float my_arr[5];
    for (int i = 0; i < n; i++)
    {
        my_arr[i] = (float)i;
    }


    // VLA.. Variable length array
    // c��� ������������ �̷��͵� ���Ʊ��� ����..

    printf("Hello");
    return 0;
}

