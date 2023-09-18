# include <stdio.h>

int main(void)
{
    int A, B, C, min;

    puts("请输入三个整数");
    
    printf("整数A:");       scanf("%d", &A);
    printf("整数B:");       scanf("%d", &B);
    printf("整数C:");       scanf("%d", &C);

    min = A;

    if(B < C)
        min = min < B ? min : B;
    else
        min = min < C ? min : C;
    
    printf("三个整数中最小值为%d \n", min);

    return 0;
}
