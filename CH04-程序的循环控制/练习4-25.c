# include <stdio.h>

int main(void) {

	int n;
	printf("让我们来画一个向下的数字金字塔\n金字塔有几层：");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {

		for (int k = 1; k <= i; k++) {
			putchar(' ');
		}

		for (int j = 1; j <= 2 * (n - i) - 1; j++) {
			printf("%d", i + 1);
		}

		putchar('\n');

	}

	return 0;

}