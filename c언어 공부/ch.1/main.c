#include <stdio.h>

int main()
{
	double tall;
	double weight;

	printf("키를 입력하세요 : ");
	scanf_s("%lf", &tall);

	weight = tall - 110;

	printf("적정몸무게는 %.2lf kg입니다.", weight);

	return 0;
}