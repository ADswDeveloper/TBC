// Chap 12_2.c : 객체와 식별자, lvalue와 Rvalue
// 강의 요약 

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

        오브젝트 -> 메모리 덩어리. 
        식별자 -> 이름. 
    */

    int var_name = 3; // create an object called 'var_name'
    //변수이름(식별자)을 통해 접근할 수 있는 메모리 공간, 그 공간이 오브젝트. 
    // 메모리 공간과 변수 이름이 마치 같다고 생각할 수 있지만, 아님. 
    // 메모리 공간에 3이라는 값을 복사해 넣음. 메모리 공간 접근 시, 변수 이름을 통해 접근. 
    // 이름에 불과한데, 오브젝트를 직접 사용하는 것처럼 C언어가 우릴 도와주고 있는 것. 
    
    int* pt = &var_name; //pt is an identifier
    *pt = 1; // *pt is not an identifier, *pt 는 표현식. *pt designates object.(지명하다.)
    // *pt는 변수처럼 사용할 수 있지만, 식별자는 아님. 

    int arr[100]; // arr is an identifier. Is arr an object? 
    // No. 첫 원소의 주소. 배열의 이름은 object가 아님. 하지만 식별자로는 쓸 수 있음.
    arr[0] = 7; // arr[0] 은 식별자는 아니지만, Object임. 해당 표현식을 통해 메모리 공간에 접근할 수 있음.
    
    /*
        lvalue is an expression 'referring' to an object. (KNK p. 197)
        
        L-value : left side of an assignment 
        R-value : right side, variable, constant, expressions (KNK p. 67)

        refer : 또다른 이름 처럼 사용..
    */
    
    var_name = 3; // modifiable lvalue. 메모리 공간을 refer 해줌. 
    // 변수 이름이 메모리 공간이다 X, 변수 이름이 내부적으로 가리키고 있는, refer 해주는 메모리 공간에 3을 복사해 넣음.
    int temp = var_name;
    // 변수는 lvlaue rvalue 둘다 가능한데, rvalue로 오면 값을 복사해넣어줌. 
    temp = 1 + 2; //
    //1+2 = temp;, 1+2는 메모리 공간을 가지는 오브젝트가 아니기 때문.
    
    pt = &var_name; 
    int* ptr = arr; // 배열의 이름은 주소값 그 자체. arr이 가지고 있는 주소값을 저장할 수 있다.
    *pt = 7; // *pt is not a identifier, but an modifiable lvalue expression.s

    int* ptr2 = arr + 2 * var_name; // address rvalue
    *(arr + 2 * var_name) = 456; // lvalue expression
    // 괄호 안 값은 원래 Rvalue인데, indirection 연산자로
    // 마치 Lvalue 처럼 사용할 수 있다.

    const char* str = "Constant string"; // str is a modifiable lvalue.
    str = "Second string"; // 
    //str[0] = 'A'; error

    char str2[] = "String is an array"; // array로서 메모리 할당 받음.
    str2[0] = 'A'; // ok
    
    /*
        Identifiers have scope.
        Objects have storage duration. 오브젝트는 이름이 없을 수도 있음. 
    
    */

    printf("Hello");
    return 0;
}

