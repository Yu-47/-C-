# include <stdio.h>

int main(void)
{
    int A, B, C, D, max;

    puts("请输入四个整数");
    
    printf("整数A:");       scanf("%d", &A);
    printf("整数B:");       scanf("%d", &B);
    printf("整数C:");       scanf("%d", &C);
    printf("整数D:");       scanf("%d", &D);

    max = A;

    if(B < C){
        if(C < D)
            max = max > D ? max : D;
        else
            max = max > C ? max : C;
    }else{
        if(B < D)
            max = max > D ? max : D;
        else
            max = max > B ? max : B;
    }

    printf("最大值为%d \n", max);

    return 0;
}
