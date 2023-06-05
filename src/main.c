#include <stdio.h>
#include <windows.h>

int main()
{
	int choose_num = 0;
	
	printf("##오늘도 열심히 일본어 공부.##\n");
	printf("1. 히라가나 테스트\n");
	printf("2. 가타카나 테스트\n");
	printf("3. 단어 테스트\n");
	printf("4. 문법 테스트\n");
	printf("5. 프로그램 종료\n");
	
	scanf("%d", &choose_num);
	
	if(choose_num == 1) // 히라가나 테스트 함수 실행
	{
		system("cls");
		hiragana_test();
	}
	
	else if(choose_num == 2) // 가타카나 테스트 함수 실행
	{
		system("cls");
		gatakana_test();
	}
	
	else if(choose_num == 3) // 단어 테스트 함수 실행
	{
		system("cls");
		word_test();
	}
	
	else if(choose_num == 4) // 문법 테스트 함수 실행
	{
		system("cls");
		grammer_test();
	}
	
	else if(choose_num == 5) // 프로그램 종료
	{
		system("cls");
		return 0;
	}
}