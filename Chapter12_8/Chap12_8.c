// Chap 12_8.c : 
// ���� ��� 


// ���� - main�Լ��� ����ִ� ������ main.c �����̶�� �θ�.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

/* 
    static variable with external linkage
    - File scope, linkage, static storage duratin
    - External storage class
    - External variables

*/

int g_int = 0; // static �� variable��(static Ű����x) �˾Ƽ� 0���� �ʱ�ȭ����.
// int g_int; 
double g_arr[1000]; // �迭�� 0���� �ʱ�ȭ����.

// initializing External variables.
int a = 2; // ok. constant expression
// int b = 2 * a; // �Ұ�. ���� �ʱ�ȭ ������ ���� �������� �߻��� �� �ֱ� ����.

void func()
{
    printf("g_int in func() %d %p\n", g_int, &g_int);
    g_int++;

}

void func_sec();
int main()
{   
    /*
    Defining declaration vs Referencing declaration.

    */
    extern int g_int; // �̷��� �ٱ��� �ִ� �༮�� ������.
    // file scope �� �ִ� �༮�� ���ڴٴ� ����.

    //int g_int = 123; // hides global g_int. name hiding �Ͼ. 
    // ���� ��������? ����������.
    // extern int g_int; �� ���� ���� redefinition ���� �߻�.

    extern double g_arr[]; // optional, size is not neccesary

    

    printf("g_int in main() %d %p\n", g_int, &g_int);
    g_int++;
    func();
    func_sec();
    return 0;
}

