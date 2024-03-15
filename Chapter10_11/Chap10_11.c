// Chap 10_11.c : �迭 �Ű������� const
// ���� ��� : �Լ� ���ڷ� �迭�� ���� ��, �ش� �Լ��� �迭�� ���� �ٲٴ� ����� �ƴ϶��,
// const int arr[] �� �ٲ��༭ �޸տ����� ������ �� �ִ�. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
//
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void add_value(int arr[], int n, int val) // ��ȯ���� void�ӿ��� �ұ��ϰ� �迭 �ٲ�.
{
    for (int i = 0; i < n; i++)
    {
        arr[i] += val;
    }
}
// ���������� �����ͺ����� �ٷ�� ����. �ּҷ� �����ϱ� ������ �ٲ� �� ����. 

int sum(const int arr[], const int n) // const�� �ٲ������ �迭�� �ٲ��� ����. �޸� ���� ���� ����.
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += arr[i];
        ///total += arr[i]++; // �̷��� �Ǽ�(�迭 ���ҿ� 1�� ������)�ߴٰ� ġ��, const�� ����� �� ����.
    }
    return total;
}


int main()
{
    int arr[] = { 1,2,3,4,5 }; // �ش� scope���� ���� �ٲ�� �ȵǴ� �迭�� ���, const�� ��������.
    const int n = sizeof(arr) / sizeof(arr[0]); // n �� �ٲ�� �ȵȴٴ� ���� �Ͻ�����.
    return 0;
}

