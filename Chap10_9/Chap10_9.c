// Chap 10_9.c : ������ ���� �� ����.
// ���� ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int arr[5] = { 100,200,300,400,500 };
    int* ptr1, * ptr2, * ptr3;
    // Assignment.
    {
        ptr1 = arr; //������ ������ �ּҸ� ������ �� ����. �Ϲ����� ������ �޸�, �迭�� �迭�� ��ü�� �ּҿ� '�����' ����� ��. int i ������ ptr1 = &i �� �߾�� ��.
        printf("%p, %d, %p\n", ptr1, *ptr1, &ptr1); // dereferencing,, �ּҷ� ���� ���� ������. &ptr1 ������ ������ �ּҵ� ������ �� ����. �����͵� ��·�� �����ϱ� �ּҸ� ����.
    }
    // Address - of operator &
    {
        ptr2 = &arr[2]; // 3��° ����
    }
    
    //Differencing
    {   
        ptr3 = ptr1 + 4; // int 4����ŭ.
        printf("%td\n", ptr3 - ptr1); // t ��ȯ������ -> �������� ���̸� ��½� ���.
        
    }

    // �����ͳ��� ��
    {
        double d = 3.44;
        double* ptr_d = &d; // double �����Ϳ� int ������ ũ�� ����.

        if (ptr1 == ptr3) // warning �߻�. Ÿ�� �ٸ��ٰ� ��. (int *)�� ĳ���ä���
        {
            printf("same\n");
        }
        else
        {
            printf("Different\n");
        }
        // �ᱹ �����͵� ������! �����ͳ��� ���Ϸ��� Ÿ�� ���ƾ� ��.(int* , double*�� �ٸ�)
        // �Ҵ�Ǵ� �ּ��� ���İ� ũ��� ������, ���̰� ����.
    }
    
    printf("Hello");
    return 0;
}

