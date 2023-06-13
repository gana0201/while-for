#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double pheight = 0.001;
	const double everest = 8800.0;
	int count = 0;

	for (count = 0; pheight < everest; count++)
		pheight *= 2.0;

	printf("Á¾ÀÌ Á¢´Â È½¼ö = %d \n\n", count);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int answer;
	int guess;
	int tries = 0;
	srand(time(NULL));
	answer = rand() % 100;

	for (guess = answer + 1; guess != answer;) {

		printf("정답을 추측하여 보시오 : ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("제시한 정수가 높습니다.\n");

		if (guess < answer)
			printf("제시한 정수가 낮습니다.\n");
	}
		printf("축하합니다. 시도횟수=%d\n", tries);
	
		return 0;
}
