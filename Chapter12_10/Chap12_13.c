// Chap 12_13.c : 
// ���� : malloc()
// ��ȯ�� : void*. �� �뵵�� ���缭 double* ������ ĳ������ ��.
// ���ڷ� �� ǥ���� ����ŭ �޸� �Ҵ�����.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h> // malloc()
int main()
{
    float x;
    char str[] = "Dancing with a star";
    
    int arr[100];
    /*
        malloc() : returns a void type pointer . �޸� �޶�� ��û ���ڷ� ������ �� �� ����.��
        void* : generic pointer. �׳� �ּ��� ���̴�!
        generic.. ������ �ּҶ�� ���ӽ�. ������ �ǹ̴� '�Ϲ�����'.
        ���� void �����ʹ� ������ ������ �Ұ���. ����Ű�� �ڷ��� ũ�⸦ ����
        
    */
    double* ptr = NULL;
    ptr = (double*)malloc(30 * sizeof(double)); // �̸��� ����Ʈ�� �޸𸮸� �ּ���. ��� ��û.
    // �ٸ� ���α׷��鵵 ���ÿ� �۵� ���ε�, �����ִ� �޸� �� ���� �޸� ����.
    // �� �޸� �װ� ��� ��� �ϸ鼭, �Ҵ��� �޸��� ù ��° �ּҸ� ��.
    // void Ÿ�� �����͸� ��ȯ�ϴµ�, �����ϰ� �ּҴ�. 
    // int �迭 Ÿ������ �������, double Ÿ������ ������� ���ɾ���.
    // �׳� 240 ����Ʈ �޶�� ������,�� �� ��. ���� �ʿ��� double* Ÿ������ ĳ���� ���ִ� ��.
    // ������ �ڷ����� ����� Ư�� �迭ó�� ��� ����. �迭�� ���� �ڷ����� �����Ǿ��ִ� �������� ���.
    // �ᱹ �迭ó�� ����ϰ� ��.

    if (ptr == NULL) // �� ������ ������ NULL ������ ��ȯ.
    {
        puts("Memory allocation failed"); 

        exit(EXIT_FAILURE); // ���� �����Ŵ. ���� �޸� �Ҵ� �ȵǸ� ū�� �� ��.
        //exit(EXIT_SUCCESS) // is simillar to return 1 IN main()/
        //exit(EXIT_FAILURE) // is simillar to return 0 IN main()
    } // malloc() �н��������� ���� �� �ȶ� ��
    
    prinf("Before free %p\n", ptr);
    
    /*
        ptr ��ü�� scope �ȿ� ���� ��������.
        ����, scope�� ����Ǹ� ptr�� �����. 
        �׷�����, ptr�� ����Ű�� �ּҿ� ��ġ�� �迭,�� malloc���� �Ҵ���� �޸𸮴�
        ������� ����.
        ��ġ ģ�� �� �ּҰ� ���� ���̸� �޾Ҵµ� ���� �Ҿ���ȴٰ� ģ�� ���� ������� �ʴ°�.
        �����Ҵ� ���� �޸𸮿� �����ͺ����� ȥ������ �� ��. 
        �����ͺ����� scope�� ������ �����ͺ����� ������� �����Ҵ� ���� �޸𸮴� ��� ��������� ����.
    */
    
    free(ptr); // �ݳ��������.
    // 1, �ٸ� �뵵�� ����� �� �ֵ��� os���� �ݳ�.
    // 2, ��� �����Ҵ����� �޾ƿ��⸸ �ϸ� �� ���� ���̻� �Ҵ��� �� ���� ��Ȳ�� �߻�.���� �ݳ�.
    
    prinf("After free %p\n", ptr); // free ��, �� ���� ����. 
    // ģ���� �̻��ߴٰ� �ؼ� ���̿� ���� �ּҰ� �ٲ��� ����. 
    
    // ���� �ɼų�������, �׷��� �����Ҵ� �޸𸮸� �ݳ��ߴٸ�, �����Ҵ� �޸𸮿� ���� ������ ������ NULL�� �ٲ��ִ°� ������. 
    ptr = NULL; // � �����Ҵ� �޸𸮵� ����Ű�� ���� �ʴٶ�� ������ִ� ��.
    
    //////////////////////////////////////////////
    // �迭ó�� ����ϱ�.

    int n = 5;
    ptr = (double*)malloc(n * sizeof(double));

    if (ptr != NULL)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%f", ptr[i]); //�Ҵ縸 �ް� �ʱ�ȭ�� ���ؼ� ������ �� ����. 
        }
        printf("\n"); 

        for (int i = 0; i < n; i++)
        {
            *(ptr + i) = (double)i;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%f", ptr[i]);
        }
        printf("\n");
    }
    free(ptr);
    ptr = NULL;

    /*
        VLA
        - not supported by VS compilers
        - automatic duration, cannot be resized (��������ó�� stack�� �ö�.)
        - limited by stack size(when compiler places VLA in stack segment)
    */

    printf("Hello");
    return 0;
}

