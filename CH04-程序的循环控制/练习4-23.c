/* 生成直角在左上方的等腰直角三角形 */

# include <stdio.h>

int main(void) {

	int n;
	printf("生成直角在左上方的等腰直角三角形\n短边：");		scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {

		for (int j = 1; j <= n - i; j++) {
			putchar('*');
		}

		putchar('\n');

	}

	return 0;

}


/* 生成直角在右上方的等腰直角三角形 */

# include <stdio.h>

int main(void) {

	int n;
	printf("生成直角在右上方的等腰直角三角形\n短边：");		scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {

		for (int k = 0; k < i; k++) {
			putchar(' ');
		}

		for (int j = 1; j <= n - i; j++) {
			putchar('*');
		}

		putchar('\n');

	}

	return 0;

}