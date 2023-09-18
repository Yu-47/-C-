# include <stdio.h>

int main(void)
{
    int x, y;

    printf("请输入两个整数：");      
    scanf("%d%d", &x, &y);

    printf("x是y的%d%%\n", 100 * x / y);

    return 0;
}
