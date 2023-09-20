# include <stdio.h>

int main(void)
{
    int i = 1;
    int no;

    printf("请输入一个正整数：");       scanf("%d", &no);

    if(no < 0)
        return 0;

    while(i <= no) {
        printf("%d ", i++);
    }
    printf("\n");

    return 0;
}
