# include <stdio.h>

int main(void)
{
    int A, B;

    puts("请输入两个整数");
    
    printf("整数A:");       scanf("%d", &A);
    printf("整数B:");       scanf("%d", &B);

    if ((A - B >= 0 && A - B <= 10) || (B - A >= 0 && B - A <= 10))
        puts("它们的差小于等于10");
    else
        puts("它们的差大于10");

    return 0;
}
