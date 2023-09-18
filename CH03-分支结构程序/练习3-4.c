# include <stdio.h>

int main(void)
{
    int A, B;
    
    printf("请输入两个整数：\n");
    printf("整数A:");     scanf("%d", &A);
    printf("整数B:");     scanf("%d", &B);

    if (A == B)
        puts("A和B相等");
    else if(A < B)
        puts("A小于B");
    else if(A > B)
        puts("A大于B");

    return 0;
}
