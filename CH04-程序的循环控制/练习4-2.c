# include <stdio.h>

int main(void)
{
    int entry;
    int sum = 0;

    do {
        int num;
        printf("请输入一个数：");       scanf("%d", &num);

        sum += num;
        
        printf("要继续吗？输入0继续，9退出:");
        scanf("%d", &entry);

    } while(entry == 0);

    printf("和为%d", sum);

    return 0;
}
