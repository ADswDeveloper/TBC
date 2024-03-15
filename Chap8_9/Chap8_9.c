// Chap 9_3.cpp : 
// ���� ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    int c;
    FILE* file = NULL; // file�� �����ͺ���. �ּҰ� �����̵�. 
    char file_name[] = "my_file.txt"; // Todo : use scanf()
    // vcxproj ���ϰ� ���� ��ġ�� ������ ��κ� �� ã��.


    file = fopen(file_name, "r"); // file open �� ����. file stream�� open.
    // file ���� ��θ� open �ϴ� ��. 
    // "r" �ɼ� - read only. "w" �ɼ� - �����͸� �����ϰ� ���� ��
    if (file == NULL) // �׷� file�� ���� ���
    {
        printf("Failed to open file.\n");
        exit(1); // ���� �����ϸ� 1�̳� -1�� ����.
    }

    while ((c = getc(file)) != EOF) // getc -> ���Ͻ�Ʈ��.
    {
        putchar(c);
    }
    fclose(file);

    
    

    
    return 0;
}

