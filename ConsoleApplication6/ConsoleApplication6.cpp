#include "stdafx.h"

int main()
{
	int inch;
	double cm;

	printf("��ġ�� �Է��ϼ���: ");
	scanf_s("%d", &inch);

	cm = inch * 2.54;

	printf("%d��ġ�� %2fcm�Դϴ�.\n", inch, cm);

	return 0;
}