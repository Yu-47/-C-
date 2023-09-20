# include <stdio.h>

int main(void) {

	int i = 1;
	int n;
	printf("请输入整数：");		scanf_s("%d", &n);

	while (i++ <= n) {

		puts("*");

	}

	return 0;

}