# include <stdio.h>

int main(void)
{
    int x, y;

    printf("请输入两个整数：");      
    scanf("%d%d", &x, &y);

    printf("它们的和是%d，积是%d \n", x + y, x * y);

    return 0;
}
