// Chap 9_18.c : �������� �Ű�����
// ���� ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

// c���� ��¿ �� ���� ��ȯ���� �ϳ�. 

// ���� ���� ȣ��.call by value ��� �θ�
void swap(int a, int b) // a�� ���� 123, b�� ���� 456���� ���簡 �Ȱ��ϻ�, main�� a,b�ʹ� �ƿ� �ٸ� ����.
{   
    printf("%p %p\n", &a, &b); // main�� a,b�� �ּҵ� �ٸ�. 
    int temp = a; // a 123 b 456
    a = b; // 
    b = temp;
}

void swap_by_pointer(int* a, int* b) // �����͸� �޵���. �� �ּҸ� �־��ֵ���.
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 123;
    int b = 456;

    // swap. but nothing happen.
    printf("%p %p\n", &a, &b);
    swap(a, b);
    printf("%d %d\n", a, b);

    swap_by_pointer(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

