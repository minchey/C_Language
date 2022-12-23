#include <stdio.h>
int main(void)
{
	int a;
	int x=0, y=1, z = 0;
	printf("정수를 입력하세요:");
	scanf_s("%d", &a);
	for (; a > 0; --a)
	{
		printf("%d ", z);
		z = y;
		y = x + y;
		x = z;
	}

	return 0;
}
