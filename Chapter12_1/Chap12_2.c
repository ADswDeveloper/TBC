// Chap 12_2.c : ��ü�� �ĺ���, lvalue�� Rvalue
// ���� ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    /*
        Object
        - An object is simply a block of memory that can store a value.(KNK p. 487)
        - Object has more developed meaning in C++ and Object Oriented Programming.

        Identifiers
        - Names for varibles, functions, macros, and other entities. (KNK p. 25)        

        ������Ʈ -> �޸� ���. 
        �ĺ��� -> �̸�. 
    */

    int var_name = 3; // create an object called 'var_name'
    //�����̸�(�ĺ���)�� ���� ������ �� �ִ� �޸� ����, �� ������ ������Ʈ. 
    // �޸� ������ ���� �̸��� ��ġ ���ٰ� ������ �� ������, �ƴ�. 
    // �޸� ������ 3�̶�� ���� ������ ����. �޸� ���� ���� ��, ���� �̸��� ���� ����. 
    // �̸��� �Ұ��ѵ�, ������Ʈ�� ���� ����ϴ� ��ó�� C�� �츱 �����ְ� �ִ� ��. 
    
    int* pt = &var_name; //pt is an identifier
    *pt = 1; // *pt is not an identifier, *pt �� ǥ����. *pt designates object.(�����ϴ�.)
    // *pt�� ����ó�� ����� �� ������, �ĺ��ڴ� �ƴ�. 

    int arr[100]; // arr is an identifier. Is arr an object? 
    // No. ù ������ �ּ�. �迭�� �̸��� object�� �ƴ�. ������ �ĺ��ڷδ� �� �� ����.
    arr[0] = 7; // arr[0] �� �ĺ��ڴ� �ƴ�����, Object��. �ش� ǥ������ ���� �޸� ������ ������ �� ����.
    
    /*
        lvalue is an expression 'referring' to an object. (KNK p. 197)
        
        L-value : left side of an assignment 
        R-value : right side, variable, constant, expressions (KNK p. 67)

        refer : �Ǵٸ� �̸� ó�� ���..
    */
    
    var_name = 3; // modifiable lvalue. �޸� ������ refer ����. 
    // ���� �̸��� �޸� �����̴� X, ���� �̸��� ���������� ����Ű�� �ִ�, refer ���ִ� �޸� ������ 3�� ������ ����.
    int temp = var_name;
    // ������ lvlaue rvalue �Ѵ� �����ѵ�, rvalue�� ���� ���� �����س־���. 
    temp = 1 + 2; //
    //1+2 = temp;, 1+2�� �޸� ������ ������ ������Ʈ�� �ƴϱ� ����.
    
    pt = &var_name; 
    int* ptr = arr; // �迭�� �̸��� �ּҰ� �� ��ü. arr�� ������ �ִ� �ּҰ��� ������ �� �ִ�.
    *pt = 7; // *pt is not a identifier, but an modifiable lvalue expression.s

    int* ptr2 = arr + 2 * var_name; // address rvalue
    *(arr + 2 * var_name) = 456; // lvalue expression
    // ��ȣ �� ���� ���� Rvalue�ε�, indirection �����ڷ�
    // ��ġ Lvalue ó�� ����� �� �ִ�.

    const char* str = "Constant string"; // str is a modifiable lvalue.
    str = "Second string"; // 
    //str[0] = 'A'; error

    char str2[] = "String is an array"; // array�μ� �޸� �Ҵ� ����.
    str2[0] = 'A'; // ok
    
    /*
        Identifiers have scope.
        Objects have storage duration. ������Ʈ�� �̸��� ���� ���� ����. 
    
    */

    printf("Hello");
    return 0;
}

