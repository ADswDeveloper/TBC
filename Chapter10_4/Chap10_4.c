// Chap 10_4.c : �����Ϳ� �迭
// ���� ��� : arr�� ������ ������ �����ؼ�, ������ ������ ���� �迭 ���� ���� ����.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int arr[10]; // �̷��� �� �Ⱦ�. ���߿� �����Ҵ��� �� ���� ���.
    
    int num = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < num; i++)
    {
        arr[i] = (i + 1) * 100;
    }
    
    // ������ ����, arr , arr[0] ��� �ּ� ����.
    int* ptr = arr; // arr�� �ּҴϱ� ������ ������ ���� ����. 
    printf("%p %p %p\n", ptr, arr, &arr[0]); // ������ ���� ���� ��.
    
    // ������ ����
    ptr += 2;
    printf("%p %p %p\n", ptr, arr, &arr[2]); //8��ŭ ���̳�(10���� ������.. 16���� �򰥸��� ����)
    //arr += 2; ������ ������ �Ҵ��ؼ� ������ ������ �ϴ� �� ��������, arr�� �ȵ�. �������� �ּҿ��� 2���ϸ� �迭 ������ǰ�...


    // ������ dereference.
    printf("%d %d %d\n", *(ptr + 1), *(arr + 3), arr[3]); // 4��° ����.
    
    {
        int* ptr = arr;
        for (int i = 0; i < num; i++)
        {
            //printf("%d %d\n", *ptr++, arr[i]); // * �����ڰ� ���� ����ǰ� ++�� �����. *(ptr++) �� ����. ���� ptr ������ �� ptr�� ++.
            //printf("%d %d\n", *ptr, arr[i]);
            //ptr++;
            // �򰥸��� �̷��� �ص���. ���� ũ�� ���� ����.
            printf("%d %d\n", *ptr + i, arr[i]); 
        }
    }
   


    printf("Hello");
    return 0;
}

