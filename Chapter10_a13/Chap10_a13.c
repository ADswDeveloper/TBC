// Chap 10_13.c : �������� �迭�� 2���� �迭
// ���� ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    {
        // Two of 1D arrays.
        int arr0[3] = { 1,2,3 };
        int arr1[3] = { 4,5,6 };

        int* ptr = arr0;
        printf("%p %p %p", arr0, &arr0, ptr);

        int* parr[2] = { arr0, arr1 }; // array of pointers
        // �����Ͱ� ���� �ִ� ������ 2�� Ȯ���� �迭. �������� �迭.

        for (int j = 0; j < 2; ++j)
        {
            for (int i = 0; i < 3; ++i)
            {
                printf("%d(==%d, %d)", parr[j][i], *(parr[j] + i), *(*(parr + j) + i));
            }
        }
    }
    // �迭���� ������ �̸�ó�� ����� �� �ִ�. 
    {
        int arr[2][3] = { {1, 2, 3}, {4,5,6} };

        int* parr0 = arr[0];
        int* parr1 = arr[1];

        //Ȥ��
        int* parr[2];
        parr[0] = arr[0];
        parr[1] = arr[1];
    }

    {
        int arr[2][3] = { {1, 2, 3}, {4,5,6} };
        int* parr[2]; // parr �� 8����Ʈ ���� �Ÿ� ù �ּ�.
        parr[0] = arr[0];
        parr[1] = arr[1];

        printf("&p\n", &parr[0]); // �� �� �ٸ���.
        printf("&p\n", parr[0]); // ������ �� ����.
        printf("&p\n", arr);
        printf("&p\n", &arr[0]);
        printf("&p\n", arr[0]);
        printf("&p\n", &arr[0][0]);
    }
    
    // ������ �迭 ��� ����- ���ڿ�.
    {
        char* name[] = { "Aladdin", "Jasmine", "Magic Carpet", "Genie" };
        // name�̶�� charŸ�Կ� ���� �������� �迭����, A�� ����� ��ġ, J�� ����� ��ġ, .. , G�� ����� ��ġ�� ��.
        // name�ȿ��� 4���� char* �����Ͱ� ����. 
        
        const int n = sizeof(name) / sizeof(char*);// 4
        // name ��ü�� ũ�� ������ char* ������ ũ��..
        // name �� �������� �迭���� ����Ͻÿ�! ������ũ�� * ������(����)���� / ������ũ��

        for (int i = 0; i < n; i++)
        {
            printf("%s at %u\n", name[i], (unsigned)name[i]); // %s�� �ϸ�, �ּ����� ���ڿ��� ��µ�.
        }

        char aname[][15]= {"Aladdin", "Jasmine", "Magic Carpet", "Genie", "Jafar"};
        const int n = sizeof(name) / sizeof(char[15]);// 5
        for (int i = 0; i < n; i++)
        {
            printf("%s at %u\n", aname[i], (unsigned)&aname[i]); // %s�� �ϸ�, �ּ����� ���ڿ��� ��µ�.
        }

    }


    printf("Hello");
    return 0;
}

