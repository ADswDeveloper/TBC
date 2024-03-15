// Chap 9_8.c : ���丮�� ����
// ���� ��� 



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

/* loop vs recursion
   factorial : 3! = 3 2 1 , 0! = 1
   5! = 5 * 4! = ... = 5 4 3 2 1 * 0! ���� �̿�.
*/

long loop_factorial(int n);
long recuresive_factorial(int n);

int main()
{
    int num = 5;

    printf("%d\n", loop_factorial(num));
    printf("%d\n", recursive_factorial(num));

    return 0;
}

long loop_factorial(int n)
{
    long a = 1;
    for (long i = 1; i <= n; i++)
    {
        a *= i;
    }

    //for (a = 1; n >= 1; n--)
    //{
    //    a *= n;
    //} //�䷸�� ¥����. 
    return a;
}



long recursive_factorial(int n)
{
    if (n == 1)
        return 1;
    long result;
    result = n * recursive_factorial(n - 1);
    
    return result;
}

long recursive_factorial2(int n) // n * f(n-1) �� ����ϴ� �Լ�. 
{
    if (n > 0)
    {
        return n * recursive_factorial2(n - 1); // tail (end) recursion . �� ������ recursion �Ѵ� �ǹ� ����.
    }
    return 1;
}
