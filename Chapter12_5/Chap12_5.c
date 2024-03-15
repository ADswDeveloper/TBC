// Chap 12_5.c : �ڵ� ����
// �������


// ���� �ڵ��̳�? ���� �Ⱓ�� �ڵ����� �����ȴٴ� ��.
// ���� ��� 

// ��Ű���� ����. ���� �Ⱓ�� �ڵ��̶�� ���� �޸𸮿� ������� ��Ÿ���� �Ѵٴ� ���̴�, ��Ű���� ������ �ȵ�.
// ��� ����ɶ� ���ÿ� ����ٰ� ����Ǹ� '�ڵ�����' �����.

/*
    Automatic storage class
    - Automatic storage class duraiton(��� ����� �޸�(����) �ݳ��Ѵٴ� ��. )
    - block scope
    - no linkage ( a���� ���� ���� �ð��� �� ������ �� ã�ư�����. ��Ű�� ����)
    - Any variable declared in a block or function header.
    
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    auto int a; // keyword auto : a storage-class specifier. automatic storage class..
    // �ٵ� ��κ� �Ⱥ���.
    // cpp�� auto �ǹ̰� �ƿ� �ٸ�. 
    //a = 1024; // ���������� �޸𸮿� ��� ������� ����Ǿ��� �ϱ� ������ 0���� �ʱ�ȭ�ϴ°� �δ㽺����(����� ����.)
    // �׷��� ���������� ���α׷��Ӱ� �ʱ�ȭ����� ��.
    auto int b = a * 3; //  

    int i = 1;
    int j = 2;
    {
        int i = 2; // ���� ���� ������ ������ �켱������ ����. �ٱ��� ������ name hiding.
        printf("%d", j); // j�� ��� �ȿ��� ������� �ʾ�����, visible�ϴ�. �� �� �ִ�.
    }
    // main �Լ��� stack frame�� i, j , i(��� �� i) �� ���� ���δٰ�(push) �����ϸ��.
    // ��� ���������� i�� pop�ǰ�..
    func(5);
    // �ٵ� func�� ȣ��Ǵ� ����, func�� stack frame���� �ٲ�.
    // �׷��� func stack frame�ȿ��� main �Լ��� ������ �� ��. 
    // 
    

    printf("Hello");
    return 0;
}

void func(int k)
{
    int i = k + 2;
    //do something with i and k
    printf("%d", i);
}