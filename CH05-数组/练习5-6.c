// 假设a是double型，b是int型
// 经过以下赋值后a和b的值分别是多少
// a = b = 1.5;

#include<stdio.h>

int main(void) {

	double a;
	int b;

	a = b = 1.5;

	printf("a = %f\nb = %d", a, b);	
	// a = 1.00
	// b = 1

	return 0;
}
