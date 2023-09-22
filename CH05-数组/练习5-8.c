#include<stdio.h>

#define NUMBER 80

int main(void) {
	
	int i, j;
	int num;
	int tensu[NUMBER];
	int bunpu[11] = { 0 };

	printf("学生人数：");		
	do {
		scanf_s("%d", &num);
		if (num < 1 || num > NUMBER) {
			printf("输入1~%d的数：", NUMBER);
		}
	} while (num < 1 || num > NUMBER);
	
	printf("输入%d人的分数。\n", num);
	for (i = 0; i < num ; i++) {
		printf("%d号：", i + 1);
		scanf_s("%d", &tensu[i]);

		bunpu[tensu[i] / 10]++;
	}
	
	puts("\n-----------分布图---------------");

	for (i = 0; i <= 9 ; i++) {
		printf("%3d - %3d:", i * 10, i * 10 + 9);
		for (j = 0; j < bunpu[i]; j++ ) {
			putchar('*');
		}
		putchar('\n');
	}

	printf("      100:");
	for (j = 0; j < bunpu[10]; j++) {
		putchar('*');
	}

	return 0;
}

