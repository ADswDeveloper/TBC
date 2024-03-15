// Chap4_7.cpp : printf �Լ��� ��ȯ �����ڵ�
#include <iostream>
#include <limits.h>

// printf�� �⺻���� ����
// printf(����-���ڿ�, ������1, ������2, ...) (������ -> ����, ���, ǥ���� ��)

// ����������(Conversion specifier)
// %[flags][width][.precision][length]specifier
// printf("%+10.5hi", 256);

// %a : �ε� �Ҽ�����, 16����, p-ǥ���
// %A : �ε� �Ҽ�����, 16����, P-ǥ���(p�� �ҹ��ڳ� �빮�ڳ� ����
// %e : �ε� �Ҽ�����
// %d or %i : ��ȣ�� �ִ� 10�� ����(decimal integer)
// %e : �ε��Ҽ����� ,e-ǥ���
// %f : �ε� �Ҽ�����, 10���� ǥ��
// %g : ���� ���� %e�� %f ���. �� ���� ������ ����.
// %o : 8�� ����
// %p : ������
// %s : ���ڿ�
// %u : ��ȣ�� ���� 10�� ����
// %x : ��ȣ�� ���� 16�� ����(char ���ڶ� �򰥸��� ����)


int main()
{
    double d = 3.14159265389732846264338327950288419716;

    // char �� ��������ǥ ���.
    printf("%c\n", 'A'); 
    printf("%s\n", "I love you"); 

    // i�� ��ȣ�� �ִ� 10�� ������ ��Ÿ���� ������, Unsigned int max�� �����÷ο� �߻�
    printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX);// 1004 1234 2147...7 -1
    printf("%u %u %u \n", 1024, -1, UINT_MAX); // -1�� �����÷ο� �߻�

    // printf ���� -> float�� ����Ϸ��� �ϸ� ���������� double�� �ٲ� ��µ�.
    // �׷��� lf�� l�� ���õ�.(������ double�� ��µǴϱ�)
    printf("%f %f %lf\n", 3.141592f, d, d);

    // ���� ��Ÿ�� �����ֱ�.
    {
        
        printf("%9d\n", 12345); // ��� ������ 9�ڸ��� ������. ������ ����.
        printf("%09d\n", 12345); // ������ �ڸ��� 0���� ä����,.
        printf("%.2f\n", 3.141592); // �Ҽ��� ��°�ڸ����� ���
        printf("%.20f , %.20lf\n", d,d); // �Ҽ��� 20° �ڸ����� ����̳�, 
        // f�� ��Ÿ�� �� �ִ� �ڸ����� �Ѱ趧���� ������ �ڸ������� ǥ��
        // ����! double�� ��µ�. 

    }
    
    //printf �� ��°��� ����.
    {
        printf("%\n");
        int n_counted = printf("Counting!");
        printf("%u\n", n_counted);
    }
}
