# include <stdio.h>

int main(void) {

	int no;
	int digit = 0;

	printf("请输入一个正整数：");		scanf_s("%d", &no);

	printf("%d的位数是", no);

	while (no > 0) {

		no /= 10;
		digit++;
	}

	printf("%d。", digit);

	return 0;

}