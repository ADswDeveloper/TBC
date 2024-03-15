// Chap 10_10.c : const�� �迭�� ������
// ���� ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    // type qualifiers : const, volatile, ... qualify : �ڰ��� �ش�. 
    // ���� ���� �� �ִ� ������ ���� �����Ǵ� ����� ����. 
    const double PI = 3.14159;
    //PI = 2.14159; const ����� ���� �� �ٲ�.
    
    const double arr2[3] = { 2.0, 3.0, 4.0 };
    // arr[0] = 2.3; const �� ����� �ֵ� �Ұ�.

    const double* pd = arr2;
    //*pd = 3.0; // is equal to pd[0] = 1.0; �迭ó�� ���ȣ�� ���� ����.
    //pd[2] = 1024.0;

    printf("%f %f", pd[2], arr2[2]); // 1024, 1024
    // �׷��� ���α׷��� �ǵ��� arr2�� �ٲ�������� const �� �س��� ��. 
    // �ٵ� �ּҿ� �����ؼ� ���� �ٲ����.
    // �׷��� const double* pd = arr2; �ع����� ��.
    
    pd++; // allowed...�ٵ� ���������ڴ� �� ��. 
    // ������ ������ �� ��ü�� �ٲ� �� ����.(�ּҰ��� �ٲ� �� ����.)
    printf("%f %f", pd[2], arr2[2]); // pd[2] �����Ⱚ ����.
    // pd++ �����Ƿ�, pd�� �迭 ù��° ���� ����Ű�ٰ�, �ι�° ���Ҹ� ����Ű�Ե�.
    // �ι�° ���ҷκ��� [2] ��ŭ �̵��ϹǷ�, �����Ⱚ�� ����. 

    //pd++ �� ���ϰ� ����� ������,
    //const double* const pd = arr2; // �̷��� �����.
    printf("Hello");
    return 0;
}

