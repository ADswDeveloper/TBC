// Chap 8_5.c : ���ڿ� ���ڸ� ��� �Է¹ޱ�
// ���� ��� 

// �ʿ���� ���ڵ� ���ۿ� ���������� �Һ����ֱ� + scanf getchar() ������ ���� ����.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

void display(char cr, int lines, int width);

int main()
{
    char c;
    int rows, cols;

    while (1)
    {
        scanf("%c %d %d", &c, &rows, &cols); 
        display(c, rows, cols);
        if (c == '\n')  break;

    }
    
    //printf("Input one character and two integers\n");
    //while ((c = getchar()) != '\n')
    //{
    //    scanf("%d %d", &rows, &cols);  
    //    //while (getchar() != '\n') continue;
    //    // �� while���� �ּ�ó���ϰ� 'a 2 3 ' �� �Է��ϴ� ���� 'a 2 3'�� �Է��ϴ� ��� �ൿ�� ��� �ٸ��� ��Ÿ��.
    //    // 
    //    // 'a 2 3 ' �Է½� -> ù while���� ���ư� ��, ���ۿ� ' \n'�� ������. c���� ' '�� �Ҵ�ǰ�, scanf�� %d�� ��Ī���� �ʴ� '\n'�� ������ �Ǿ�,
    //    // �״�� �����. rows�� cols�� ���� ���� 2 �� 3�� ������. �׷��� �������� �̷���� ��ĭ���� 2�� ��µ�. �׷��� ���� �Է��� ��ٸ�. 
    //    // 
    //    // 'a 2 3' �Է½� -> ù while���� ���ư� ��, �Է� ���ۿ� '\n'�� ������. c���� '\n'�� �Ҵ�ǰ�, while ���� �� ������ �Ǿ� while�� Ż��.
    //    // 
    //    // 'a 2 3 ' enter �� 'b 1 2' �Է��ϴ� ���
    //    // 'a 2 3 \nb 1 2' �� �Է¹��ۿ� ����. c�� a�� �Ҵ�ǰ�, 2, 3�� ���� row col �� �Ҵ��. 
    //    // ���� while ��������, getchar�� ' '�� �о����, scanf �� ����� �� �Է� ������ �ε����� \n �� ����. format specifier�� %d �̹Ƿ� 
    //    // ����(whitespace character ,����, ����, enter ���..) �� �ǳʶ�.
    //    // �̶�, �Է� ������ �ε����� ������ �ǳʶپ� b�� �̵�. ������ %d �� 'b'�� ��Ī���� �����Ƿ�, �б⸦ �����ϰ� �����. rows�� cols�� ���� ���� 2 �� 3�� ������.
    //    // �Է� ������ �ε����� ������ b�� ����. ���� ���� getchar���� c�� 'b'�� �Ҵ�ǰ�, 1 �� 2�� ���� rows�� cols�� �Ҵ��.
    //    // ������ ���� : �ƹ�ư �Է� ���ۿ� ' '�̳�, '\n'�� ������ �̻��� ����� �߱��� �� ����. �׷��Ƿ� ���� �Է¹޾�����, �ʿ���� �κ�, \n, ' ' �� �ǵ������� �Һ��������.
    //    // fflush ��� �Է¹��� ���� �Լ��� �ִٴµ�, �׳� while(getchar() != '\n') continue; �̰� �� ����.
    //    display(c, rows, cols);
    //    printf("Input another character and two integers:\n");
    //    printf("Press enter to quit\n");
    //}
    //
    //c = getchar();
    //int q;
    //int w;
    //scanf("%d %d", &q, &w); // a 2 3�� �Է��ص� q���� 2�� �� ��. %d�� �Է� ���ۿ��� ������ ������ ������ �ƴ� ���ڰ� ���ö����� �����ؼ� �׷�.
    // ��Ȯ����, �Է� ������ �ε����� ������ �ƴ� ���ڰ� ���ö����� �̵���Ŵ. 
    //printf("%c %d %d", c, q, w);
}

void display(char cr, int lines, int width)
{
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%c", cr);
        }
        printf("\n");
    }
}

