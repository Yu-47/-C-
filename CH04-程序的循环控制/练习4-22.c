# include <stdio.h>

int main(void) {

	int side_1, side_2, longer, shorter;
	printf("让我们来画一个长方形\n一边：");		scanf_s("%d", &side_1);
	printf("另一边：");							scanf_s("%d", &side_2);

	longer = (side_1 >= side_2 ? side_1 : side_2);
	shorter = (side_1 >= side_2 ? side_2 : side_1);

	for (int i = 1; i <= shorter; i++) {
		
		for (int j = 1; j <= longer; j++) {
			putchar('*');
		}

		putchar('\n');

	}

	return 0;

}