#include<stdio.h>

#define NUMBER 80

int main(void) {
	
	int i;
	int num;		// 实际学生人数
	int scores[NUMBER];			// 储存学生分数
	int intervel[11] = { 0 };	// 储存各分数段人数

	printf("学生人数：");		
	do {
		scanf_s("%d", &num);
		if (num < 1 || num > NUMBER) {
			printf("输入1-%d的数：", NUMBER);
		}
	} while (num < 1 || num > NUMBER);
	
	printf("输入%d人的分数。\n", num);
	for (i = 0; i < num ; i++) {
		printf("%d号：", i + 1);
		scanf_s("%d", &scores[i]);

		intervel[scores[i] / 10]++;
	}

	int max = 0;		// 找出人数最多的分数段
	for (i = 0; i <= 10 ; i++) {
		max = max >= intervel[i] ? max : intervel[i];
	}

	for (; max >= 1 ; max-- ) {
		for (i = 0; i <= 10 ; i++) {
			if (intervel[i] < max) {
				printf("   ");
			}
			else {
				printf(" * ");
			}
		}
		printf("\n");
	}

	puts("\n-------------分布图---------------");
	puts("\n 0 10 20 30 40 50 60 70 80 90 100");

	return 0;
}

