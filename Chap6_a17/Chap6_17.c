// Chap 6_17.c : for������ �迭�� �Բ� ����ϱ�.
// ���� ��� : �迭 ������ ���� �� for���� �Բ� ����ϸ� ó���ϱ� ��. 
// ���� : �ڵ带 © ��, ���߿� �ٲܶ� �ѹ��� �ٲ� ����� �ѹ��� �ٲ㵵 �ٲ� �� �ְ� ¥�ֱ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define SIZE 5
int main()
{

    //for���� �� �迭�� �Բ� ����ϴ°�?
    {
        int i1 = 0;
        int i2 = 1;
        int i3 = 2;
        //...

        pirntf("%d\n", i1);
        pirntf("%d\n", i2);
        pirntf("%d\n", i3);
        //...

        // ���� ���� �����͸� �ٷ� �� ó���ϱ� ����.
    }
    
    int my_arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        my_arr[i] = i;
        printf("%d", my_arr[i]);
    }

    // ���� 5�� �Է¹޾Ƽ� �� �����ϴ� �ڵ�.
    int array[5]; // �ڵ带 �ٲܶ� �ѹ��� �ٲ㵵 �ٲ� �� �ְԲ� ¥�ֱ�.(5�� 5�� ��������, SIZE�� .)
    int sum = 0;
    for (int i = 0; i < 5; i++) // for(int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("%d",sum);

    return 0;
}

