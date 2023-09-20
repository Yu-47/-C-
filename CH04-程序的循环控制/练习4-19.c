# include <stdio.h>

int main(void) {

	int count = 0;
	int n;
	printf("整数值：");		scanf_s("%d", &n);

	for (int i = 1 ; i <= n ; i++) {
		
		if (n % i == 0) {
			count++;
			printf("%d ", i);
		}

	}
	printf("约数有%d个。", count);

	return 0;

}