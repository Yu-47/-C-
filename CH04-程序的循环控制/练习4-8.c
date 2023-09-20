#include <stdio.h>

int main(void) {

    int no;

    printf("正整数：");
    scanf_s("%d", &no);

    while (no-- >= 1)
        putchar('*');
    putchar('\n');

    return 0;

}