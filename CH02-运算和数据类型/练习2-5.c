# include <stdio.h>

int main(void)
{
    int a, b;
    printf("请输入两个整数。\n");

    printf("整数a:");         scanf("%d", &a);
    printf("整数b:");         scanf("%d", &b);

    printf("a是b的%f%% \n", (double)(a) / (double)(b) * 100);
    /* 注意a和b都要转化为浮点数，否则计算结果没有小数点后的位数 */
    
    return 0;
}
