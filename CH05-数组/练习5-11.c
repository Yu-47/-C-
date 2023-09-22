#include<stdio.h>

int main(void) {
	
	int i, j;

	int scores[6][2] = { 0 };
	int sum[2] = { 0 };
	double average[2] = { 0 };

	for (i = 0; i < 6 ; i++) {
		for (j = 0; j < 2; j++) {
			printf("请输入第%d个学生第%d门课的成绩: ", i+1, j+1);
			scanf_s("%d", &scores[i][j]);
		}
	}

	puts("----------------------------------------------------");

	for (i = 0; i < 6; i++) {
		for (j = 0; j < 2; j++) {
			printf(" %d ", scores[i][j]);
		}
		puts("");
	}

	puts("----------------------------------------------------");

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 6 ; j++) {
			sum[i] += scores[j][i];
		}
		printf("第%d门课的总分是%d\n", i + 1, sum[i]);
	}

	puts("");

	for (i = 0; i < 2; i++) {
		printf("第%d门课的均分是%.2f\n", i + 1, sum[i] / 6.00);
	}

	return 0;
}

