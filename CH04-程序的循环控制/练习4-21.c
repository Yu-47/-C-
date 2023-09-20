# include <stdio.h>

int main(void) {

	int n;
	printf("生成一个正方形\n正方形有几层：");		scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		
		for (int j = 1; j <= n; j++) {
			putchar('*');
		}

		putchar('\n');

	}

	return 0;

}