#include<stdio.h>

int main(void) {
	
	int i, j, z;

	int mat1[4][3] = { 0 };
	int mat2[3][4] = { 0 };
	int product[4][4] = { 0 };

	for (i = 0; i < 4 ; i++) {
		for (j = 0; j < 3; j++) {
			printf("请输入矩阵一第%d行第%d列的数字: ", i+1, j+1);
			scanf_s("%d", &mat1[i][j]);
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("请输入矩阵二第%d行第%d列的数字: ", i+1, j+1);
			scanf_s("%d", &mat2[i][j]);
		}
	}

	puts("----------------------------------------------------");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf(" %d ", mat1[i][j]);
		}
		puts("");
	}
	puts("");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf(" %d ", mat2[i][j]);
		}
		puts("");
	}
	puts("");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			for (z = 0; z < 3 ; z++) {
				product[i][j] += mat1[i][z] * mat2[z][j];
			}
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf(" %d ", product[i][j]);
		}
		puts("");
	}

	return 0;
}

