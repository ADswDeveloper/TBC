#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define STRLEN 81
int main()
{
	// ���ڿ� �Է¹ޱ�
	//{
	//	//���ǻ��� : ������ �޸� ���� �̸� Ȯ�� �� �Է� �޾ƾ� ��.

	//	//char* name = "";
	//	char name[128];
	//	int result = scanf("%s", name);
	//}

	//{
	//	/*
	//		scanf() vs gets()
	//		scanf() reads one word. (%s�� format specifier ������ ���� ���������� �����Ƿ�.)
	//		gets() reads one line and removes \n and add \0
	//	*/

	//	char words[STRLEN] = "";
	//	gets(words); // gets receives pointer. no idea when string ends
	//	//gets_s(words,sizeof(words)); //C11. ����� �̰� �� ���� ��.
	//	//	-> gets(words) ��� ���� gets() ���忡�� words �� �� �������� ��.
	//	//	-> �̴� �����͸� ���ڷ� �޴� ��� �Լ��� ������.
	//	//	-> sizeof(Words)Ȥ�� STRLEN �� ���� �ִ�� ���� �� �ִ� ���� ���� �Լ����� �˷���.
	//	//	-> char words[5]; �� �����ϰ� 5���ں��� �� ��� �Է��ߴٸ�, gets()�� gets_s() ��� ��Ÿ�� ���� �߻�.

	//	//scanf("%s", words);
	//	printf("START\n");
	//	printf("%s", words);
	//	puts(words);
	//	puts("END.");



	//	// puts �ڵ����� �ٹٲ� ����. gets�� \n���� ���鳪�͵� �� �о���. scanf�� ���� ������ �׸� ����.
	//}

	//{
	//	/* fgets() vs fputs() */
	//	char words[STRLEN] = "";
	//	fgets(words, STRLEN, stdin); // f�� file.. fgets�� ���� �Էµ� ���� �� ����.
	//	// STRLEN ���� ��ŭ�� �ް� ���������� �����. ��Ÿ�� ���� �߻�X. ���ݴ� ���������� ��밡��.
	//	// dose not remove \n -> ������ �Է¹������� \n ���� ���ϴ°� ����. �ܼ�â �Է¹����� �� ����.
	//	
	//	// -> replace \n with \0 code

	//	//�ַ��
	//	/*int count = 0;
	//	char* ptr = words;
	//	while ( *ptr != '\n')
	//	{
	//		ptr++;
	//		count++;
	//		continue;
	//	}
	//	words[count] = '\0';
	//	printf("\n");*/
	//	// 
	//
	//	// ������ �ַ��.
	//	int i = 0;
	//	while (words[i] != '\n' && words[i] != '\0')
	//		i++;
	//	if (words[i] == '\n')
	//		words[i] = '\0';
	//	
	//	fputs(words, stdout); // does not add \n
	//	fputs("END", stdout); //���� ��������¿� ����ϴµ�, ǥ������� ����� �ܼ� ����� ���� �� �ִ�!
	//	
	//}

	// small array
	//{
	//	/* fgets() ��ȯ�� :
	//	�Է¹��ۿ��� ����ð� ���ų� Ȥ�� EOF ������ null character ��ȯ 
	//	���������� �ԷµǾ����� �Է¹��� ������ ��ȯ. */

	//	char small_array[5];
	//	puts("Enter long strings : ");
	//	printf("small array address : %p\n", small_array);
	//	printf("fgets return value : %p\n", fgets(small_array, 5, stdin));
	//	fputs(small_array, stdout); // ���� null character ���� 5���� �޾Ƶ���.

	//}

	//{
	//	/* repeating and short reading*/

	//	char* a;
	//	char small_array[5];
	//	puts("Enter long strings:");
	//	while ((a = fgets(small_array, 5, stdin)) != NULL && small_array[0] != '\n')
	//		fputs(small_array, stdout);
	//	//fgets() �� �Է� ���ۿ� �ִ� \n ���� ������. 
	//	// ���� ->  ����� ����, abcdef �Է��ϰ� �ٽ� ��ǲ ��ٸ��� enter ������
	//	// small_array[3] �� \n ���� �� �� �ִµ�, 
	//	// �̰� �ٸ��� �ƴϰ� �׳� ���� �������� ef\0\n �� ����� ��, \n�� �״�� ���� ��.
	//}

	//scanf()
	{
		//�Է¹��� ���� �� ���� ����. 
		char str1[6], str2[6];
		int count = scanf("%5s %5s", str1, str2); // format specifier �����ؼ� �Է¹��� ���ڼ� ���� �� ����.
		// int count = scanf("%6s %6s", str1, str2); 
		// ��Ÿ�� ���� �߻�. ���ڿ��� ���� �׻� \0�̾�� �ϴµ�, �迭 ũ��� ��ġ�ϰ� �Է��� �޾Ƽ�
		// �� ���ڸ� ���� ������ ������ �ʾ� ��Ÿ�� ������ �߻�. �̸� �����ϱ� ���� scanf_s ���.
		//int count = scanf_s("%5s %5s", str1, 6, str2, 6); 
		// %5s -> �ִ� 5���� ���ڸ� ������� ��. 
		// 6 -> �ش� ���ڿ� ������ �Ҵ�� �޸��� ũ��. �̷��� �ִ� 5���� ���ڸ� �о �������� �ι��� �߰�����. 
		printf("%s | %s\n", str1, str2);
		
		/* An example of custom input function */
		//custom string input �Լ� ���� ¥�� �� ����.(�Ʊ� ���� fgets() \0 �����ֱ�, ���� ����ִ� ��� ����)
	}
	
	{
		
	}

	return 0;
}

// ��� ������ �͵�
// int* ptr; ���� ptr�� �迭�� ����ų����, ������ ����ų ���� ����.
// �̴� ��� 