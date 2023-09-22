#include<stdio.h>

int main(void) {
	
	int i, j, z;

	int tensu1[4][3] = { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} };
	int tensu2[4][3] = { {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} };
	int tensu[4][3][2] = {0};

	for (i = 0; i < 4 ; i++) {
		for (j = 0; j < 3; j++) {
			tensu[i][j][0] = tensu1[i][j];
			tensu[i][j][1] = tensu2[i][j];
		}
	}

	for (i = 0; i < 4; i++) {

		printf("第%d个同学三门科目在两次考试中的成绩：\n", i + 1);
		for (j = 0; j < 3; j++) {
			for (z = 0; z < 2 ; z++) {
				printf(" %d ", tensu[i][j][z]);
			}
			puts("");
		}
		puts("");
	}

	return 0;
}

