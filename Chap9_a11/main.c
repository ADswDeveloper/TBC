// Chap 9_11.c : ��� ���� ����� ��
// ���� ��� - �������
// 0, �۵����� -  ������� ��ü�� �����ؼ� �ٿ��ִ´�.
// 1, ���ӻ� - ������ �и�.
// 2, ������ - �ߺ����� ���� multiple definition ���� ����. �ذ�å -> ������Ͽ� ����θ� �����س���, c���Ͽ� �ٵ�. ����ϴ� ������ c���� ���� h���� ��Ŭ���.

#define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h> ������Ͽ��� �̹� stdio.h�� ��Ŭ����ؼ� ����� ��.
#include <string.h>
#include <limits.h>

#include "my_print_fucntions.h" // ������ϸ� ��Ŭ��� �ϸ�, �ٵ� ������� �ʾƼ� �ȵ�. 
// ����� �� ������ �и��Ѵ�. �Լ��� �ɰ����´�. 
// main.c -> main �Լ��� ���� �־�� ���. 


int main()
{
    print_hi();
    return 0;
}

// ���� ����
// 1, #include "my_print_fucntions.c" �� ���� �ʴ� ����. �׷��� �ϸ� multiple definition ������ ��.
//    �� �׷� ������ �߳ĸ�, ��ŷ �ܰ迡��, ���� �Լ��� ���� ������Ʈ ���Ͽ��� �߰ߵǾ� ��Ŀ�� � ���� ����ؾ� �� �� �𸣱� ����. 
//    my_print_fucntions.c ������ �Լ����� main.c ���� ������ ���� ���ԵǾ� �����ϵǸ鼭, my_print_fucntions.c ���� ��ü�� ������ ������Ʈ ���Ϸ� ������ �Ǿ� �Լ��� �ߺ� ���� �߻�.
//    �̷� �ߺ��� �����ϱ� ���� �Լ��� ���� �����ϴ� ��� ������ ���.
// 2, ��� ������ ����ϴ� ����
//    A.h ����� Func��� �Լ��� �ٵ���� ����. B.h���� Func �Լ��� ����ϴ� ���, B.h���� #include <A.h>�� �� ��.
//    main.c���� A.h�� B.h��� ����Ѵٸ�, #include <A.h> #include <B.h> �� �� ��.
//    �̷��� �Ǹ� Func�Լ��� B���� ���ǵǾ� ����. main���� A.h �� B.h�� ��Ŭ����ϸ� Func �Լ��� �ι��̳� ���ǵǴ� �Ͱ� ��������. Func�� �� �� ���ٵ� ��.
//    �ᱹ, ������ϳ��� ���Ӽ� ���� ������ �־ ,, ������Ÿ�Ը� �ۼ��صΰ� �ٵ�� �ٸ� c���Ͽ��� ����. c������ include �Ǵ� ������ �ƴϱ� ������ ���� ���� ���簡 �� �ʿ䵵 ����
//    ������Ÿ���� ������ ������Ÿ���� ���� ���� �����ص� ������ ����. �ٵ� ���ǵȰ��� �ƴϱ� ������, �޸𸮸� ������ , �������ִ� ���´� �ƴ϶�. + ����������.
// 
// ��� : �Լ��� ���Ǻ�(�ٵ�)�� �ش� ������Ʈ�� ��� ���� ��Ʋ� �� ������ �����ؾ� ��. �� ������ �����ٰ� �ϴ���, 
// ������Ͽ� �ٵ� �����ϰų�, �ٵ� ���ǵǾ��ִ� c������ ��Ŭ��� �ϴ� ��� ������ �߻��� �� ����. 