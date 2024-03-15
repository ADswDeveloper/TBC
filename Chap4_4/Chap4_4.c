// Chap4_4.cpp : strlen() �Լ�

#include <stdio.h>
#include <string.h> // strlen and more
#include <stdlib.h>

int main()
{
    //strlen()�� sizeof�� ����
    {
        char str1[100] = "Hello"; // �������� 0���� ä��µ�, ��� ��� �����Ϸ����� 0���� ä��ٴ� ������ ����.
        char str2[] = "Hello"; // �˾Ƽ� ���� �� ���缭 ������� �ǹ̷� ������ ���� �� ����. "Hello" �� ���콺 Ŀ���� �뺸�� 6�� ��.
        char str3[100] = "\0";
        char str4[100] = "\n";

        // strlen() �Լ��� ���̸� ���� null character�� ����.�ΰ����� �ǹ��ִ� ���ڸ� ī��Ʈ.

        printf("%zu %zu\n", sizeof(str1), strlen(str1)); // 100 5. 
        printf("%zu %zu\n", sizeof(str2), strlen(str2)); // 6 5
        printf("%zu %zu\n", sizeof(str3), strlen(str3)); // 100 0
        printf("%zu %zu\n", sizeof(str4), strlen(str4)); // 100 1
    }


    // �������� �����ε� �迭 ���� ����. �ٸ� �Ҵ�Ǵ� �޸� ũ�⸦ �� ���� ����, �޸� �ּ��� ũ�⸸�� �� �� ����.
    {
        char *str5 = (char*)malloc(sizeof(char) * 100);
        str5[0] = 'H';
        str5[1] = 'e';
        str5[2] = 'l';
        str5[3] = 'l';
        str5[4] = 'o';
        str5[5] = '\0';

        printf("%zu %zu\n", sizeof(str5), strlen(str5)); // 4 5
        // char *str5�� ������ Ÿ���� �����ν�, �޸� �ּҸ� �����ϴ� ����.
        // ������ Ÿ���� ������ �޸𸮸� �Ҵ���� ũ�⸦ �� �� ���� ������, ��ġ �ּҸ� ���� �޸����� ũ��ó�� �޸� �ּ��� ũ�⸸�� �� �� ����.
        // ����, sizeof(str5) �� ��� �� 4byte�� ���, '�Ҵ�� �޸��� ũ��' �� �ƴ� �޸� �ּ��� ũ���� ��.
        // ���⼭ ���� �ȵǵ� ����

    }

    

}
