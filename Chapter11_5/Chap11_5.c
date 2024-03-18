#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>
#define TEST "A string from #define"

/*

Implement assignment

	puts() which doesn't add a new line at the end
	Use pointer increment operator and putchar()
*/

void custom_put(const char* str); 
int custom_put2(const char* str);

int main()
{
	/* string without \0 */

	//char str[] = { 'H', 'I', '!' }; // "HI!" ��� �ʱ�ȭ������ �ڿ� null character �پ���.
	//puts(str); 
	// HI! �ڿ� �̻��� ���ڰ� ����.
	// �� ������, puts�� �� ĳ���͸� ���������� ����ϴµ�, �� ĳ���Ͱ� ��� ��� �޸� �дٺ���
	// �ε��� �Ѿ�� �������� �о �̻��� ���ڰ� ������ ��.
	
	/* puts() and fputs() */
	
	//char line[5];
	//void* a = NULL;
	//while ( (a = gets(line))) // NULL �����ʹ� 0�̹Ƿ�, while(gets(line) != NULL) �� ����. 
	//	puts(line);
	//// gets() �Լ��� �Է��� ���������� �̷���� ��, ���ڿ��� �����͹�ȯ, �ƴϸ� NULL��ȯ. 
	// �׷��� �Է��� abcdef ó�� ������ �迭�� ũ�⺸�� �� ū ���ڿ��� �Է����� ���͵� ���������� �ּҸ� ��ȯ.
	// �̴� ��� undefined behavior��, �� ������ �����ϸ� �ȵǰ� �����ϰ� fgets(line, sizeof(line), stdin)�� ���ִ°� ����.

	//while (fgets(line, sizeof(line), stdin))
	//	fputs(line,stdout);

	/*
		scanf()

		-> ���� �ܾ ��� �Է¹ޱ� ����. 
	*/

	//char input[100];
	//int ret = scanf("%10s", input); // Input : Just do it, do it!\n
	//printf("%s", input); // 10���ڸ� ������� ������, Just �ۿ� �ȳ���. 
	//// ��? scanf�� ���� ���ڸ� ������ ������ �Է� ��Ʈ���� �о���� ����. ��, �� �ܾ ����.
	//// ������ scanf()�� ������, ���� �ڷ����� �������� �� �Է¹ޱ� ����. 
	//ret = scanf("%10s", input); // �Է� ���ۿ� �����ִ� do�� ��µ�.
	//printf("%s", input);
	//

	custom_put("Just ");
	custom_put("Do it!");

	printf("%d\n", custom_put2("12345"));
	return 0;
}

void custom_put(const char* str)
{
	while (*str != '\0') // �� �Ǽ�,, input���� ���ڿ��� ������, ���ڿ��� ���� \0 ���� �����ݾ�. �Է� ��Ʈ������ �Է¹޴°� �ƴϰ�, �μ��� �Է¹���.
		putchar(*str++);
}


int custom_put2(const char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		putchar(*str++);
		count++;
	}	
	putchar('\n');

	return count;
	
}