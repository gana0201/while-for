#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double pheight = 0.001;
	const double everest = 8800.0;
	int count = 0;

	for (count = 0; pheight < everest; count++)
		pheight *= 2.0;

	printf("���� ���� Ƚ�� = %d \n\n", count);

	return 0;
}