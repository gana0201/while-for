int main(void)
{
	int i;

	for (i = 0; i < 10; i++) {
		if (i % 2 == 1)
			continue;
		printf("정수 : %d \n", i);
	}

	return 0;
}

//p.239 프로그래밍 3번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	for (x = 1; x <= 7; x++) {
		for (y = 1; y <= x; y++) {
			printf("%d", y);
		}
		for (y = x + 1; y <= 7; y++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;

}
