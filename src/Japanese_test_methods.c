#include "Japanese_test_methods.h"

void hiragana_test()
{
	char answer;
	int num;
	int wrong_score;
    srand(time(0));
	
	for(int j = 0; j < 46; j++) // 구조체 배열 초기화
	{
		hiragana_arr[num].is_once = 1;
	}
	
	for(int i = 0; i < 46; i++)
	{
		num = rand() % 47; // 난수 생성
		
		if(hiragana_arr[num].is_once == 0) // 만약 이미 나왔던 문재 유형이라면 다시 뽑기
		{
			i--;
			continue;
		}
		
		printf("%d. %c의 한국어 발음을 적으시오.\n", i, hiragana_arr[num].Q);
		scanf("%c", &answer);
		
		if(answer == hiragana_arr[num].A)
		{
			printf("정답입니다.\n");
		}
		
		else
		{
			printf("오답입니다.\n");
			printf("정답은 \"%c\"입니다.\n", hiragana_arr[num].A);
			wrong_score++;
		}
		
		hiragana_arr[num].is_once = 0;
	}
	printf("테스트가 완료되었습니다. 46문제중 총 %d의 문제를 틀렸습니다.", wrong_score);
}

void gatakana_test()
{
	
}

void word_test()
{
	
}

void grammer_test()
{
	
}