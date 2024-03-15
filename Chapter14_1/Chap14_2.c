// Chap 14_1.c : ����ü�� �ʿ��� ����.
// ���� ��� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX 41

struct Person /* Person is a tag of structure. �ĺ��� ���̹� ��� ����.*/ 
{
    char name[MAX]; // member
    int age;        // member
    float height;   // member

    // ����ü �ȿ� ����� �������ٶ�, �޸𸮸� ���� ����. 
    // ����ü ������ ������ �� ��, �޸𸮰� ����. 
    // ��ŰƲ�� �β� �������, ��ŰƲ ����� �̷��Ŵ� ��� �˷���.
};


int main()
{
    int flag; // Receives return value of scanf()

    /* Structure variable*/
    
    struct Person genie; // ���ļ� �ڷ����ΰ�ó��.
    // name,age,height �޸𸮰� �̶� �Ҵ��̵�. 

    /* dot is structure membership operator(member access operator)*/
    strcpy(genie.name, "Will smith");
    genie.height = 174;
    genie.age = 100;
    
    // dot operator has higher precedence than &
    flag = scanf("%f", &genie.height); // structure�� ���� ���� ��, height�� ����.

    /* Initialization*/
    struct Person princess = { "Naomi Scott", 18, 160.0f }; // �迭ó�� �ʱ�ȭ.. �ٵ� �ٸ� Ÿ����.
    //��� ���� ������ ���� �ʱ�ȭ ������ �����ؾ� ��.

    struct Person princess2 = {
        "Naomi Scott",
        18,
        160.f
    };

    // �ƴϸ� �ϳ��ϳ� ���൵��. 

    /* Designated initializers */
    // � ����� ��� �ʱ�ȭ������ ���� ������� �������� �� ����.

    /* Pointer to a structure variable*/
    
    struct Person* someone; // ����ü ������ ���� ������.. person �̶�� �±׸� ������ ����ü ������
    someone = &genie;

    /* Indirect member(ship) operator(or structure pointer operator  */
    someone->age = 1001; // someone�� ������. genie �� ����ü ����
    printf("%s %d\n", someone->name, (*someone).age); // someone ���� indirect �Ҽ���, ������ �� dot�ᵵ��.
    
    /* Structure declaration in a function */
    struct book
    {
        char title[MAX];
        float price;
    }; // �Լ� �ȿ����� ����� ����ü��� �Լ� �ȿ� ���� ����. �Լ� ��� �ٱ����� ������.
    
    /* No tag*/
    
    struct {
        char farm[MAX];
        float price;
    } apple, apple2; // structure variable ���� ����. tag ���� ����ü ���� ���� ����.
    // ������ �Ŀ� �� ��. ���� ������ 
    struct {
        char farm[MAX];
        float price;
    } apple3; 
    // �̷��� �� �������.

    /* typedef and structure*/ // -> ����ü ���� ����� struct Ű���� ���� ����.
    typedef struct Person my_person; // my_person �̶�� �ڷ����� �ִ� ��ó�� ���� ���𰡴�.
    my_person p3;
    

    typedef struct Person Person; // Person �̶�� �ڷ������� �����ϰ� �ٲ����. ���� ���.
    Person p2;


    typedef struct {
        char name[MAX];
        char hobby[MAX];
    } friend;
    // �䷸�Ե� ���� ��.

    friend f4;


    return 0;
}

