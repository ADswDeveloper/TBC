// Chap 10_8.c : �� ���� �����ͷ� �迭�� �Լ����� �������ִ� ���
// ���� ��� 
// 1. ��·�� double average(double* start) , start�� average�Լ����� ���� ��, �����ͷ� ����.
// 2. �ٵ� ��ħ arr, �������� �迭�� ù��°������ �ּ���. ��ġ ������ ����ó�� �����ϴ� ���̹Ƿ� �Լ��� ���ڷ� ��.
// 3. ��, �迭�� ����������(�Ϸķ�) �޸𸮸� ����Ѵٴ� Ư¡ ������ ������ ������ ��������. 
// 4. �� ������ �̿��� Chap10_8.c���� average �Լ����� ������ �ּ�(arr1, arr1 + 5)�� ���� ���ڷ� �־��ְ�, ������ ������ ���� ���ڷ� ���� �迭 ���ҿ� ����
// 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

double average(double*, double*);

int main()
{
    double arr1[5] = { 10,13,12,7,8 };
    printf("Avg = %f\n", average(arr1, arr1 + 5)); // '������ + ����' ���̹Ƿ�, ���⼭ ������ int ���ͷ� 5�� �ƴ϶�, int ���� * 5 ��ŭ �ּҰ� ������.
    return 0;
}

// ��� ���� ���� ������Ÿ�� ���´� �ƴ�. (double arr[], int n) �䷸�� ���� ���.
double average(double* start, double* end) // �� double�� �����ͺ����� �����ڱ��� , ������ double �� �迭�� �����ڱ���.
{   
    double sum = 0.0;
    int count = end - start; // ���� : start�� while�� �ȿ��� ���ؼ� �̸� �ݺ��� ���� ���� ����س��� ��.
    while (start < end)
    {
        sum += *start++;
        //count++;
    }
    sum = sum / (double)count;

    return sum;
}
