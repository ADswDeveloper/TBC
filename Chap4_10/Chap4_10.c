// Chap 4_10.c : scanf()�� ����
// ���� ��� 

// 1, ���� ���ڸ� �־��� ��, �����ڴ� space
// 2, �Ҽ� �Է½�, double�̸� l �ٿ��ֱ�.
// 3, width ���� ����, ���ڿ��� ��� Ư�� ���� ��ŭ�� �Է¹��� �� ����. 
// 4, ���� �Է½�(%i), Ŀ�ǵ�â ��ǲ�� ���ڰ� ���������� ���ڸ� ������ �������� �־���.
// 5, %c�� �Է¹޴� ���,, blank �� �Է¹����Ƿ� ����
// 6, scanf() ��°� -> �ܼ��� �Է��� ���� ������ �ƴ϶�, successfully matching �� ���� ������.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <inttypes.h>

int main()
{
    /* mulitple inputs with blank seperator*/
    //{
    //    int i;
    //    float f; // scanf�� printf�� �ٸ��� double�� %lf�� �о�鿩�� ��.
    //    char str[10]; // c���� ���ڿ��� char �迭�̰ų� "" �ȿ� ����. 

    //    scanf("%d %f %s", &i, &f, str); // �� ĭ�� ������ ���� ���ڷ� �ؼ�. �����̽��� ������.
    //    // �迭�� �Է¹����� &�� ���� ��.
    //    printf("%d %f %s\n", i, f, str); // 

    //}

    /* character */
    //{
    //    char c;
    //    scanf("%c", &c);
    //    printf("%c\n", c); // ��ũ�� �Է¹����Ƿ� ����.
    //}

    /* Unsigned as signed*/
    //{
    //    unsigned int i;
    //    scanf("%i", &i); // -123
    //    printf("%i", i); // -123

    //    // ������ ���� �Ҵ��� ��, �ʱ�ȭȤ�� ������ �ش� ������ �ڷ��� ��Ģ��� �����.
    //    // ������ scanf �� ���� �Է��ϴ� ���, �Ҵ���� �޸� ������ ����� ��ȿ�ϰ�,
    //    // ���� ����� scanf�� format specifier�� ������. 
    //}

    /* Unsigned as unsigned*/
    //{
    //    unsigned i;
    //    scanf("%u", &i); // -123
    //    printf("%u", i); // 4756479348. unsigned �������� ������ �����ؼ� �̻��� ���� �����  
    //}
    
    /* floating point number*/
    //{
    //    // l for double for %f,%e,%E,%g 
    //    double d = 0.0;
    //    scanf("%f", &d); // 3.2
    //    printf("%f\n", d); // 0.0000 ����. printf �� �޸� scanf�� double�̸� l�� �ٿ������.
    //}

    /*width */
    //char str[30];
    //scanf("%5s", str); // �ް� ���� ���̱����� ���� �� ����.
    //printf("%s\n", str); // 

    /* h modifier */
    //char i;
    //scanf("%hhd", &i); // h �ϳ��� ������ 2��� �����ϸ� ����. 
    //printf("%i", i); 

    /* integer with characters*/
    //int i;
    //scanf("%i", &i); // a�� ������ �������� ����.
    //printf("%i", i);

    /* j modifier */
    //intmax_t i;
    //scanf("%ji", &i);
    //printf("%ji", i); // j -> intmax_t �Ǵ� uintmax_t�� �ڷ���

    /* Regular characters*/
    //int a, b;
    //scanf("%d,%d", &a, &b); // comma seperator
    //scanf("%d ,%d", &a, &b); // �Է����� ���� ���� ������ blank�� �����Ѵ� ��� ��.
    //scanf("%d, %d", &a, &b);
    //scanf("%dA%d", &a, &b); 
    //printf("%d %d", a, b); // ���ϴ� ������ ��������.

    /* return value of scanf() */
    //int a, b;
    //int i = scanf("%d%d", &a, &b);
    //printf("%d",i); // �Է¹��� ������ ����.

    /* *modifier for printf() */ // flag ���� ���ڷ� �־��ٶ�..
    //int i = 123;
    //int width = 5;
    //scanf("%d", &width);
    //printf("%*d\n", width, i); // printf�� flag �Է� ���� �� ����.

    /* *modifier for scanf() */ // suppress.
    int i; 
    scanf("%*d%*d%d", &i); // ù, �ι�°�� ���� ���� �����ع���.
    printf("%d", i);
    
    return 0;
}

