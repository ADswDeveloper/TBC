// Chap4_5.cpp : ��ȣ�� ����� ��ó����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f

// #define PI = 3.141592f 
// �̷��� �����ϸ� �տ� ��ȣ���� ���� �����ع���.
// �Ķ���Ϳ뵵�ε� ���δ�.
// ���� �빮�ڷ� ���°� ����. 

int main()
{
    const float pi = 3.141592f; //��ȣ�� ����� �����ϴ� ����� ��ũ�θ��� const�� ����.
    //pi = 3.0f; -> const ����� �ѹ� �����ϸ� ���� ���ٲ�.

    float radius, area;

    printf("Input radius\n");
    
    scanf("%f", &radius);

    area = 3.141592f * radius * radius; // ���ͷ��� ������� , Ȥ�� ��Ÿ���� ū�ϳ�.
    // 3.141892f �̷��� ���ٰų�..
    // �̷��� ��ȣ�� ����� ���� ����. �ٷ� #define.
    // �� ��ȣ��� �θ��ĸ�, 3.141592f ��� PI�� �ִ´� ��� �ؼ� �ٿ��� �̸�.

    area = PI * radius * radius;
    // #define�� ������. ��ü�� ��. �����Ϸ� ���忡��
    // area = 3.141592f * radius * radius; �� �Ȱ���. 
    // �� �� �����Ϸ��� ������ ����.

    printf("Area is %f\n", area);


    return 0;
}
