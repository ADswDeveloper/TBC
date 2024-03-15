// Chap 12_7.c : ��� ������ ���� ����.
// 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

void count()
{
    int ct = 0;
    printf("Count = %d %lld\n", ct, (long long)&ct);
    ct++;
} // �Լ� ����� ���ÿ� �ö���ִ� ct �Ҹ�.

void static_count()
{ 
    static int ct = 0; // initiallzed only once! �ʱ�ȭ�� �ѹ��� ����.
    // ���ÿ� ����x, data or bss segment �� ����. 
    // ���α׷� ���� �ĺ��� ������� static�ϰ� �����Ǵ� �޸𸮿� ����.
    // static int ct;
    // ct = 0; �̷��� �ϸ� ������ �޶���. 
    printf("Count = %d %lld\n", ct, (long long)&ct);
    ct++;
}

void counter_caller()
{
    count();
}

void static_counter_caller()
{
    static_count();
}

int func(static int i)
{
    // �Լ��� ����ɶ��� ���ο� ���� �������� ������.
    // �Լ� �Ķ���ʹ� �Լ��� ����� �� ���� ������ ���� �޸𸮸� ����.
    // �Լ��� �Ű������� static �̶�� , �Լ��� ȣ���� ������ ���Ӱ� static ������ �����ϰ� ����..
    // �̴� static Ư���� ���� ����. 
    // static ������ ���α׷� ���� �޸𸮰� �����Ǹ鼭 �ѹ� �����Ǹ� �� ������ scope ������
    // ���α׷� ���� ���� ������ �� �ִµ�, ������ static �������� ���Ӱ� �� ����� ����� �ҰŸ�
    // ���� �Ű������� static���� �������� ������ ����. 
}


int main()
{
    count();
    count(); // �޸� �ּ� ���� �� ����ϴ� ��ó�� ����. main���� count()�ۿ� ����ȵǼ�..
    counter_caller();// count_caller()�� ���� �ȿ��� count()ȣ��. �׷��� �ٸ�.

    static_count();
    static_count();
    static_counter_caller(); // �޸� �ּҰ� �׻� ����. 
    // �޸� ���̾ƿ� ��ü�� ���� �� �޸𸮰� �� �������ִ�. �ּҰ�Ʋ�� �ٸ�.
    return 0;
}


int* count()
{
    int ct = 0;
    printf("Count = %d %lld\n", ct, (long long)&ct);
    ct++;
    return &ct; // warning. ������ ����� �޸��ε� �ּҸ� �ݳ��ϹǷ�.
} // �Լ� ����� ���ÿ� �ö���ִ� ct �Ҹ�.

int* static_count()
{
    static int ct = 0; // initiallzed only once! �ʱ�ȭ�� �ѹ��� ����.
    // ���ÿ� ����x, data or bss segment �� ����. 
    // ���α׷� ���� �ĺ��� ������� static�ϰ� �����Ǵ� �޸𸮿� ����.
    // static int ct;
    // ct = 0; �̷��� �ϸ� ������ �޶���. 
    printf("Count = %d %lld\n", ct, (long long)&ct);
    ct++;
    return &ct; // �̰͵� ������ �ϳ�, �ۿ��� ct�� �ּҸ� �޾Ƽ� ct���� �����ϰ� ������,
    // ���� static ���� ������ ������ ����. �׳� ���������� �����ϸ� ��. 
}