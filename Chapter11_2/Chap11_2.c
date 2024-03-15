// Chap 11_2.c : �޸� ���̾ƿ��� ���ڿ�
// ���� ��� : C���� ���ڿ��� Text Segment�� ����� -> read only�� �� ���ٲ�.
// ���� char* �����ͷ� ���� �� �ʱ�ȭ�� ���ڿ��� �ٲ� �� ����. 
// ������ ���� ��ü�� ���ÿ����� ����(���������� �����), 
// ������ ������ �ּҿ� ������ ���� ��ü��(���ڿ��� �ּҰ�) ���� ���� ������ �ٸ��ٴ� ���� �� �� ����.
//
// ��� �׸� ����.
// �迭�� ����� ���ڿ�, char*�� ����� ���ڿ��� ����

// ���ڿ� ���ͷ��� ������, ������ ����1, ������ ����2�� �����ص� ���� �ּҸ� ����Ŵ.
///// test
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    char ar[] = "Hello, world!"; // 
    // �迭�� �� ��ü�� �޸𸮸� ������ ����. ���빰�� �迭�� ���簡 �Ǹ� �ʱ�ȭ��.

    const char* str = "Hello, world!"; // ������ str�� �����ؼ� ���ڿ� �����Ϸ��ϸ� ������������
    // ������ �ǹ̿��� const ���
    // ���ڿ��� ù��° �ּҸ� ����Ű�� �ִ� ��Ȳ. 
    // str[0] = 'M'; // const ���� ��Ÿ�� ���� �߻���.

    // ���� ��ġ ��.
    {
        const char* pt2 = "I am a string!";
        const char* pt3 = "I am a string!";
        const char* pt4 = "I am a string!!!"; // different

        char arr[] = "I am a string!";
        char arr1[] = "I am a string!";
        char arr2[] = "I am a string!!!";

        char* p6 = (char*)malloc(sizeof(char) * 100);

        printf("rodata low \t%llu %llu %llu %llu\n",
            (unsigned long long)pt2, (unsigned long long)pt3, (unsigned long long)pt4,
            (unsigned long long)"I am a string!");
        // ���ڿ� ���ͷ� ��ü�� �ּҷ� ����.
        // pt4 ���� �� ���� �ּҸ� ����Ŵ�� �� �� ����. 
        printf("stack high \t%llu %llu %llu\n",
            (unsigned long long)arr, (unsigned long long)arr1, (unsigned long long)arr2);

        printf("Heap middle \t%llu\n", (unsigned long long)p6);
    }

    //* array versus pointer */
    {
        const char* pt2 = "I am a string!";
        char arr[] = "I am a string!";
        pt2++; 
        puts(pt2); // ��ĭ ������ ���� ���. pt2�� ����ִ°� �ּ����� ����.
        // arr++; // �Ұ���.
    }

    //array and pointer differences
    {
        char heart[] = "I love Kelly!";
        const char* head = "I love Helly!";

        for (int i = 0; i < 6; i++)
        {
            putchar(heart[i]);
        }
        putchar('\n');

        for (int i = 0; i < 6; i++)
        {
            putchar(head[i]); 
        }
        putchar('\n');

        // pointer addition

        for (int i = 0; i < 6; i++)
        {
            putchar(*(heart + i));
        }
        putchar('\n');

        for (int i = 0; i < 6; i++)
        {
            putchar(*(head + i));
        }
        putchar('\n');

        while (*(head) != '\0')
        {
            putchar(*(head++)); // *head++ �ϸ� �����Ѵ��� ����Ű�� ���ڿ� +1 ��. 
        } // ��ȣ �� ����!
        
        // head = heart; // ����. (������) ������ ��(�ּ�) ����.
        // heart = head;  // �Ұ���. �迭 �̸��� �ּ� �� ��ü. lvalue�� �ƴ�. lvalue�� heart[0] �̷� ��.

    }

    {
        char* word = "Goggle";
        word[2] = 'o'; // �Ұ���. �ؽ�Ʈ ���׸�Ʈ�� ����� ���ڿ� ���� �Ұ�.
        
        const char* str1 = "When";
        const char* str2;
        str2 = str1; // shallow copy?
        
        printf("%s %p %p\n", str1, str1, &str1); // ������ �ּҴ� �ٸ�. �ι�° %p �� ����° %p ũ�Ⱑ �ٸ� -> �ٸ� �޸� ������ ������� ���� ����.
        printf("%s %p %p\n", str2, str2, &str2);
    }
    return 0;
}

