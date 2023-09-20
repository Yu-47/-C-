# include <stdio.h>

int main(void) {

	int n;
	printf("让我们来画一个金字塔\n金字塔有几层：");		scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {

		for (int k = 1; k <= n - i; k++) {
			putchar(' ');
		}

		for (int j = 1; j <= 2 * i - 1; j++) {
			putchar('*');
		}

		putchar('\n');

	}

	return 0;

}