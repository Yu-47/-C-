# include <stdio.h>

int main(void) {

	int n;
	printf("整数值：");		scanf_s("%d", &n);

	for (int i = 1 ; i <= n ; i++) {
		
		putchar('*');

		if (i % 5 == 0) {
			puts("\n");
		}

	}

	return 0;

}