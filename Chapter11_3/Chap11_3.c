// Chap 11_3.c : ���ڿ��� �迭
// ���� ��� 
// ��ġ int[2][3] , int* parr[2] �� ����.. �����Ϳ� �������迭 ���ϴ� �Ͱ� ���.
// char*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    const char* mythings[5] = {
        "Dancing in the rain",
        "Couting apples",
        "Watching movies with friends",
        "Writing sad letters",
        "Studying the C language"
    }; // char Ÿ�� �����Ͱ� 5�� �ִ� �迭 
    // �� �迭 ���Ұ� �ּ�(char * Ÿ��), ������ ���׸�Ʈ�� ����� ���ڿ��� ����Ű�� ����. 

    // mythings ����ŷ� ���� Value ��ü�� 0x008ffa28 �� ����. ��, �ּҶ�� ����. ������ ����ó�� object�� �ƴ�. mythings[0]�� object.
    // 
    char yourthings[5][40] = {
        "Studying the C++ language",
        "Eating",
        "Watching Netflix",
        "Walking around till dark",
        "Deleting spam emails"
    };  // �̷��� �����ϸ� �޸𸮿� �� ī�ǰ� ����.(�ؽ�Ʈ ���׸�Ʈ, ���� ���׸�Ʈ�� ���ڿ� ����)
    //yourthings �� ����ŷ� ���� Value�� 0x008ff958 �̶�� �ּҰ� ����.
    //yourthings[0] �� 0x008ff958

    const char* temp1 = "Dancing in the rain"; // 
    const char* temp2 = "Studying the C language";

    printf("%s %u %u %u\n", mythings[0], &(unsigned)mythings[0], (unsigned)mythings[0], (unsigned)temp1); // �ؽ�Ʈ ���׸�Ʈ�� �ִ� �����.
    printf("%s %u %u\n", yourthings[0], (unsigned)yourthings[0], (unsigned)temp2);


    printf("size of char* pointer array : %zd char[] array : %zd", sizeof(mythings), sizeof(yourthings));
    //20, 200 ����.(�ּ� ������ 4����Ʈ ���ϱ� 5)
    
    {
        // ����Ž����Ű�� �޸� ����.
        // %u %s �̷��͵鵵 ����.���α׷��� ����� ����. 
        // yourthings �޸𸮷� ���� ���ڿ� ���̿� ....�� �����Ѱ� �� �� ����. �̰� 40����Ʈ �� �Ⱦ��� �迭 ������ ������ 0���� ä���ذ�.
        //
    }

    char ch;
    for (int i = 0; i < 100; i++)
    {
        ch = mythings[0][i];
        printf("%c", ch);
    } // �޸𸮿� �ִ°� �޿� ����ϴ±��� (�޸𸮰� �Ϸķ� �������� �ƴϱ�) ��°� ������, ��������� ����.
    // ���� ������ i�� ������ ��Ī���� �����ϱ�.
    // c ���α׷��Ӹ� �ϴ� C����� ö�ж����� �Ǵ� �͵���.
    printf("\n");
    printf("Hello");
    return 0;
}

