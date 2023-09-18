# include <stdio.h>

int main(void)
{
    int A, B, C, min;

    puts("请输入三个整数");
    
    printf("整数A:");       scanf("%d", &A);
    printf("整数B:");       scanf("%d", &B);
    printf("整数C:");       scanf("%d", &C);

    min = A;
    min = min < B ? min : B;
    
    printf("三个整数中最小值为%d \n", min < C ? min : C);

    return 0;
}
