# include <stdio.h>

int main(void) {

	int start, end, gap;
	double weight;

	printf("开始数值(cm)：");		scanf_s("%d", &start);
	printf("结束数值(cm)：");		scanf_s("%d", &end);
	printf("间隔数值(cm)：");		scanf_s("%d", &gap);

	for (int i = start ; i <= end ; i += gap) {
		
		weight = (i - 100) * 0.9;
		printf("%dcm	%.2fkg\n", i, weight);

	}

	return 0;

}