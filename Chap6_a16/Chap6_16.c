// Chap 6_16.c : �迭�� ��Ÿ�� ����
// ���� ��� - �迭 �̸��� ������ ����ó�� �����ϸ� ����. �ȿ� �ּҰ� �������. �迭��[index] Ȥ�� �迭��[offsets] �� , �迭�����κ��� index��ŭ ������ ���� ���� ������ �� ����. 

// �迭 ���� : �ù� ����� �� �� ����ؾ��� ������ ������ ������������ ����. �迭�� ������ �޸����� ����.
// �迭�� ���� : ���� ����� ���� �� �ְ�, for���� �����ϸ� ���ϰ� ���� ����. �������ִ� �����͸� ��Ƴ��� �Ѳ����� �����ϱ� ����.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define NUM_DAYS 365 
// ����. c���� const ����� ��Ÿ�ӿ� ������. �迭�� ũ��� ���α׷� ���� ��, �ݵ�� ������ Ÿ�ӿ� �����Ǿ�� �ϹǷ�, const ����� �迭�� ũ�⸦ ������ �� ����.

int main()
{
    char my_chars[] = "Hello, World!";

    int daily_temperature[NUM_DAYS];
    double stock_prices_history[NUM_DAYS]; // �� �����Ǿ��ִ� 2920����Ʈ �Ҵ�޾Ƽ�, ù �ּҸ� stock_prices_�� ����.

    printf("%zd", sizeof(daily_temperature)); // 2920
    printf("%zd", sizeof(double) * NUM_DAYS); // 2920
    printf("%zd", sizeof(stock_prices_history[0])); //8


    {
        int my_numbers[5];
        my_numbers[0] = 1; // subscripts, indices, offsets. 
        // 101ȣ���� 0��° �������ִ� ���� 101ȣ. �׷��� offset�̶�� �θ��⵵��. ù��° �ּҷκ��� �󸶳� �������ִ°�.
        my_numbers[1] = 2;
        my_numbers[2] = 3;
        my_numbers[3] = 4;
        my_numbers[4] = 5;

        scanf("%d\n", &(my_numbers[0])); // ��ġ ������ �ִ� ��ó�� �ۿ�.
        scanf("%d\n", my_numbers); // array�� arryay �̸� ��ü�� �ּ���. ��������� �� ����� ���� ����� ����.
        
        my_numbers[5] = 123; // runtime error. out of bound. �Ҵ�޾ƿ� �޸��� ��踦 �Ѿ�� �ּҿ� �����ϸ� ���� �߻�.
        // �ٵ� ��Ÿ�� ������ �߻��� ��, ����Ǳ�� �ϴ���. my_numbers�κ��� 5 ���� ������ ���� ��·�� �޸𸮿� �����ϱ�� �ϴϱ� �Ҵ��� �ϱ� ��.
        //my_numbers = 7; // �̰� �ƿ� compile error. �ּҿ��� 7�� ����.
    }
    


    printf("Hello");
    return 0;
}

