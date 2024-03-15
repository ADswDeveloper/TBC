// Chap 10_2.c : �迭�� �⺻���� ��� ���
// ���� ��� : 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MONTHS 12 // symbolic constant, macro
// 

int main()
{
    int high[MONTHS];
    for (int i = 0; i < MONTHS; i++)
    {
        high[i] = i + 1;
    }

    // Addresses
    {
        printf("%p %p", high, &high[0]); // high�� ��ġ ������ó�� �۵��� ��. high[n] �� ����ó�� �۵�.

        for (int i = 0; i < MONTHS; i++)
        {
            printf("%lld\n", (long long)&high[i]); // �ּҰ� 4����Ʈ�� ���̳��� �� �� ����.
        }
    }
    
    // Compiler doesn't check whether indices are valid.
    // �� ���� : �����Ϸ��� ���α׷��Ӹ� �ϴ� �ٴ� ���� �⺻ ö���̱� ����.
    {
        high[12] = 4; // high �� �Ҵ���� �޸𸮸� ��� �޸𸮿� ���� �Ҵ�.
        high[-1] = 123; // �ٵ� ������ ��. �� ������ �ǳ�? cö�� : ���α׷��Ӹ� �ϴ´�. �ǵ��� �����Ŷ�� ����.
    }

    // const and array.
    {
        const int arr[10];
    }

    // When array is not initialized
    {
        static int not_init_static[10];
        int not_init[10];
        for (int i = 0; i < 10; i++)
        {
            printf("%d\n", not_init[i]); // ������ ��.
        }
        for (int i = 0; i < 10; i++)
        {
            printf("%d\n", not_init_static[i]); // ���� 0���� �ʱ�ȭ��. ���߿� storage class �����Ҷ� �ٽ�.. 
        }
        
        int partially_init[4] = { 1,2 };
        for (int i = 0; i < 4; i++)
        {
            printf("%d\n", partially_init[i]); // �κ������� �Ҵ��ϸ� ������ 0���� ä����. �����߱��� ��� ����.
        }
    }

    // omitting size. ����.
    {
        int arr[] = { 1,2,4,8 };//�˾Ƽ� array size�� 4�� �������. 
        // �׷� ���̸� ���� �ʳ�, ��� �� �� �ִµ�,
        int length = sizeof arr / sizeof arr[0];  // �� �� ����. 
    }

    //����
    // int arr[array size]����, array size�� �ݵ�� ���� �����̾�� ��. 
    // 

    return 0;
}

