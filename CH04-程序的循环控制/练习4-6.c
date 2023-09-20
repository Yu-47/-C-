# include <stdio.h>

int main(void)
{
    int i = 0;
    int no;

    printf("请输入一个正整数：");       scanf("%d", &no);

    while(i < no - 2) {
        printf("%d ", i += 2);
    }
    printf("\n");

    return 0;
}
