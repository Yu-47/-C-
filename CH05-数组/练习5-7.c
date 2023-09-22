#include<stdio.h>

#define NUMBER 80

int main(void) {

	int i;
	int num;
	int x[NUMBER];

	printf("数据个数：");		scanf_s("%d", &num);

	for (i = 0; i < num; i++) {
		printf("%d号：", i + 1);
		scanf_s("%d", &x[i]);
	}

	putchar('{');
	for (i = 0; i < num ; i++) {
		printf("%d", x[i]);
		if (num != 1 && i < num - 1) {
			printf(", ");
		}
	}
	putchar('}');

	return 0;
}


