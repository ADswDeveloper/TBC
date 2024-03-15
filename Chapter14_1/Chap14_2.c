// Chap 14_1.c : 구조체가 필요한 이유.
// 강의 요약 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX 41

struct Person /* Person is a tag of structure. 식별자 네이밍 룰과 같음.*/ 
{
    char name[MAX]; // member
    int age;        // member
    float height;   // member

    // 구조체 안에 멤버를 선언해줄땐, 메모리를 갖지 않음. 
    // 구조체 변수가 선언이 될 때, 메모리가 사용됨. 
    // 쿠키틀로 꽝꽝 찍기전에, 쿠키틀 모양이 이럴거다 라고 알려줌.
};


int main()
{
    int flag; // Receives return value of scanf()

    /* Structure variable*/
    
    struct Person genie; // 합쳐서 자료형인것처럼.
    // name,age,height 메모리가 이때 할당이됨. 

    /* dot is structure membership operator(member access operator)*/
    strcpy(genie.name, "Will smith");
    genie.height = 174;
    genie.age = 100;
    
    // dot operator has higher precedence than &
    flag = scanf("%f", &genie.height); // structure에 먼저 접근 후, height에 접근.

    /* Initialization*/
    struct Person princess = { "Naomi Scott", 18, 160.0f }; // 배열처럼 초기화.. 근데 다른 타입임.
    //멤버 선언 순서와 변수 초기화 순서가 동일해야 함.

    struct Person princess2 = {
        "Naomi Scott",
        18,
        160.f
    };

    // 아니면 하나하나 해줘도됨. 

    /* Designated initializers */
    // 어떤 멤버를 어떻게 초기화해줄지 순서 상관없이 지정해줄 수 있음.

    /* Pointer to a structure variable*/
    
    struct Person* someone; // 구조체 변수에 대한 포인터.. person 이라는 태그를 가지는 구조체 포인터
    someone = &genie;

    /* Indirect member(ship) operator(or structure pointer operator  */
    someone->age = 1001; // someone은 포인터. genie 는 구조체 변수
    printf("%s %d\n", someone->name, (*someone).age); // someone 에서 indirect 할수도, 역참조 후 dot써도됨.
    
    /* Structure declaration in a function */
    struct book
    {
        char title[MAX];
        float price;
    }; // 함수 안에서만 사용할 구조체라면 함수 안에 정의 가능. 함수 블록 바깥에선 사용못함.
    
    /* No tag*/
    
    struct {
        char farm[MAX];
        float price;
    } apple, apple2; // structure variable 선언 가능. tag 없이 구조체 변수 선언 가능.
    // 하지만 후에 못 씀. 쓰고 싶으면 
    struct {
        char farm[MAX];
        float price;
    } apple3; 
    // 이렇게 또 써줘야함.

    /* typedef and structure*/ // -> 구조체 변수 선언시 struct 키워드 생략 가능.
    typedef struct Person my_person; // my_person 이라는 자료형이 있는 것처럼 변수 선언가능.
    my_person p3;
    

    typedef struct Person Person; // Person 이라는 자료형으로 간결하게 바꿔버림. 많이 사용.
    Person p2;


    typedef struct {
        char name[MAX];
        char hobby[MAX];
    } friend;
    // 요렇게도 많이 씀.

    friend f4;


    return 0;
}

