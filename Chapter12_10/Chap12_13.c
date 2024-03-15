// Chap 12_13.c : 
// 강의 : malloc()
// 반환형 : void*. 쓸 용도에 맞춰서 double* 등으로 캐스팅할 것.
// 인자로 들어간 표현식 값만큼 메모리 할당해줌.

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
        malloc() : returns a void type pointer . 메모리 달라고 요청 인자로 변수가 들어갈 수 있으.ㅁ
        void* : generic pointer. 그냥 주소일 뿐이다!
        generic.. 순수한 주소라는 뉘앙스. 사전적 의미는 '일반적인'.
        따라서 void 포인터는 포인터 연산이 불가능. 가리키는 자료형 크기를 몰라서
        
    */
    double* ptr = NULL;
    ptr = (double*)malloc(30 * sizeof(double)); // 이만한 바이트의 메모리를 주세요. 라고 요청.
    // 다른 프로그램들도 동시에 작동 중인데, 남아있는 메모리 중 힙에 메모리 배정.
    // 이 메모리 네가 써라 라고 하면서, 할당한 메모리의 첫 번째 주소를 줌.
    // void 타입 포인터를 반환하는데, 순수하게 주소다. 
    // int 배열 타입으로 사용할지, double 타입으로 사용할지 관심없음.
    // 그냥 240 바이트 달라고 했으니,준 것 뿐. 쓰는 쪽에서 double* 타입으로 캐스팅 해주는 것.
    // 포인터 자료형을 사용해 특정 배열처럼 사용 가능. 배열은 같은 자료형이 나열되어있는 형태임을 상기.
    // 결국 배열처럼 사용하게 됨.

    if (ptr == NULL) // 줄 공간이 없으면 NULL 포인터 반환.
    {
        puts("Memory allocation failed"); 

        exit(EXIT_FAILURE); // 보통 종료시킴. 보통 메모리 할당 안되면 큰일 난 것.
        //exit(EXIT_SUCCESS) // is simillar to return 1 IN main()/
        //exit(EXIT_FAILURE) // is simillar to return 0 IN main()
    } // malloc() 학습레벨에선 에러 잘 안뜰 것
    
    prinf("Before free %p\n", ptr);
    
    /*
        ptr 자체는 scope 안에 놓인 지역변수.
        따라서, scope가 종료되면 ptr도 사라짐. 
        그렇지만, ptr이 가리키는 주소에 위치한 배열,즉 malloc으로 할당받은 메모리는
        사라지지 않음.
        마치 친구 집 주소가 적힌 종이를 받았는데 종이 잃어버렸다고 친구 집이 사라지지 않는것.
        동적할당 받은 메모리와 포인터변수를 혼동하지 말 것. 
        포인터변수의 scope가 끝나서 포인터변수가 사라져도 동적할당 받은 메모리는 계속 살아있으니 조심.
    */
    
    free(ptr); // 반납해줘야함.
    // 1, 다른 용도로 사용할 수 있도록 os에게 반납.
    // 2, 계속 동적할당으로 받아오기만 하면 꽉 차서 더이상 할당할 수 없는 상황도 발생.따라서 반납.
    
    prinf("After free %p\n", ptr); // free 전, 후 같게 나옴. 
    // 친구가 이사했다고 해서 종이에 적힌 주소가 바뀌진 않음. 
    
    // 물론 옵셔널이지만, 그래서 동적할당 메모리를 반납했다면, 동적할당 메모리에 대한 포인터 변수는 NULL로 바꿔주는게 안전함. 
    ptr = NULL; // 어떤 동적할당 메모리도 가르키고 있지 않다라고 명시해주는 것.
    
    //////////////////////////////////////////////
    // 배열처럼 사용하기.

    int n = 5;
    ptr = (double*)malloc(n * sizeof(double));

    if (ptr != NULL)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%f", ptr[i]); //할당만 받고 초기화를 안해서 쓰레기 값 나옴. 
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
        - automatic duration, cannot be resized (지역변수처럼 stack에 올라감.)
        - limited by stack size(when compiler places VLA in stack segment)
    */

    printf("Hello");
    return 0;
}

