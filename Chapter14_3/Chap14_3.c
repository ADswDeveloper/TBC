// Chap 14_3.c : 
// ���� ��� 


// ���� Ÿ���� ���ҵ��� ������ �迭�� �ٸ��� ����ü�� �ٸ� Ÿ���� ������� ����.
// �޸� ������ ȿ�������� ����ϱ����� �޸� �е��� ���


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    struct Aligned
    {
        int a;
        float b;
        double c;
    };
    
    /*
    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
    |int a }flaot b|double c
    
    */

    struct Aligned a1, a2;



    printf("struct Aligned a1\n");
    printf("size of %zd\n", sizeof(struct Aligned)); // 16
    printf("%lld", (long long)&a1);     // a1�� a1.a �ּ�(ù��°����) ����.
    printf("%lld", (long long)&a1.a);   // ~936
    printf("%lld", (long long)&a1.b);   // ~940 int ����
    printf("%lld", (long long)&a1.c);   // ~944 float ����

    printf("struct Aligned a2\n");
    printf("size of %zd\n", sizeof(a2));
    printf("%lld", (long long)&a2);
    printf("%lld", (long long)&a2.a);
    printf("%lld", (long long)&a2.b);
    printf("%lld", (long long)&a2.c);

    struct Padded1
    {
        char a;
        float b;
        double c;
    };

    /*
        Padding (struct member alignment
        1 word(4 bytes in x86 8 bytes in x64)

        cpu�� �޸𸮰� �����͸� �ְ���� ��, �޸� �ּ� ������ 1����Ʈ�� 
        �ְ���� �� ������, �׷��� ���ݾ� ������ ������ �δ��� ����, 
        ���� 1word(4 or 8byte)�� �����͸� �ְ����.

        ���̱ⱸ ����Ҷ� ȥ�� �͵� 2�μ��� ž�½��Ѽ� �����°Ͱ� ����. 

        double �����͸� ¥���� ������ �Ⱦ �е��� �־ ������ ��.
    */


    /* without padding
    1  2 3 4 5  6 7 8 9 10 11 12 13 14 15 16  17
    |a|float b| double c            |?  ?  ? |
    1 + 4 + 8 = 13

    1����Ʈ, 4����Ʈ, 8����Ʈ ������ ������ 8����Ʈ ����(word ����)�� �����ٰ� ġ��, 1(char) + 4(float) + 3(double) | 5(double) �̷��� double�� ©���Ե�
    double �� ¥���� �������� �е��� ����.
    */ 
    
    /* with padding
    1 2 3 4  5 6 7 8  9 0 10 11 12 13 14 15 16
    |char a |float b| double c
    4(char + 3����Ʈ) + 4 + 8 = 16
    */

    struct Padded1 p1;
    printf("struct Padded p1\n");
    printf("size of %zd\n", sizeof(p1));
    printf("%lld", (long long)&p1);
    printf("%lld", (long long)&p1.a);
    printf("%lld", (long long)&p1.b); // a�� b�� ������ 4����Ʈ.. 1����Ʈ�� �ƴ�!
    printf("%lld", (long long)&p1.c);

    struct Padded2
    {
        float a;
        double b;
        char c;
    };

    /*
        |0 1 2 3 4 5 6 7|8 9 10 11 12 13 14 15| 16 17 18 19 20 21 22 23| 24
        |float a        |double b             | char c                 |
        8(float) + 8 + 8(char)
        - float -> ���࿡ 4����Ʈ�� ������, �ڿ� b(double)�����Ͱ� ©��.
        - char -> ���������� 1����Ʈ�� ������, ������ ���� ������(���� ���� 8����Ʈ)�� ©���� ������ ������ ����.
    */
    struct Padded2 p2;
    printf("struct Padded p2\n");
    printf("size of %zd\n", sizeof(p2)); // 24
    printf("%lld", (long long)&p2);
    printf("%lld", (long long)&p2.a);
    printf("%lld", (long long)&p2.b); // 
    printf("%lld", (long long)&p2.c);

    // Padded1 �� Padded2 �� ��� ������ �ٸ�����, ����� �ξ� Ŀ����. 

    struct Padded3
    {
        char a;
        double b;
        double c;
    };
    struct Padded3 p3;
    printf("struct Padded p3\n");
    printf("size of %zd\n", sizeof(p3)); // 24
    printf("%lld", (long long)&p3);
    printf("%lld", (long long)&p3.a);
    printf("%lld", (long long)&p3.b); // p3.a�� p3.b �� 8����. char�� 7����Ʈ �е� ����.

    printf("%lld", (long long)&p3.c);

    struct Person
    {
        char name[41];
        int age;
        float height;
    };

    struct Person mommy;
    printf("struct Padded p3\n");
    printf("%lld", (long long)&mommy.name[0]);
    printf("%lld", (long long)&mommy.age); // char �迭 ù��° �ּҿ� name ���� �ּ� ���� -> 44. 41�� ������ �� ������ �е�����./
    printf("%lld", (long long)&mommy.height); //
    printf("size of %zd\n", sizeof(mommy)); // 41 + 4 + 4 = 49 (x), 41 + 3(padding) + 4 + 4 = 52

    struct Person f[4]; // ����ü �迭
    printf("Size of a structrue array %zd \n", sizeof(f));
    // name age height name age height �޷�� �̾���.

    //project setting > c/c++ > All options > Struct Member Alignment(�е� ����) �� 1����Ʈ�� �ϸ� �е����Ͱ� ������ ȿ���� ����..(�е� �ȵ�)
    return 0;
}

