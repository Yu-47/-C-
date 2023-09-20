# include <stdio.h>

int main(void) {

	int n;
	printf("n的值：");		scanf_s("%d", &n);

	int sum = 0;

	for (int i = 1; i <= n; i++) {

		sum += i;

	}

	printf("1到%d的和为%d", n, sum);

	return 0;
}