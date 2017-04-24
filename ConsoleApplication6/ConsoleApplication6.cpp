#include "stdafx.h"

int main()
{
	int inch;
	double cm;

	printf("인치를 입력하세요: ");
	scanf_s("%d", &inch);

	cm = inch * 2.54;

	printf("%d인치는 %2fcm입니다.\n", inch, cm);

	return 0;
}