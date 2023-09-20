# include <stdio.h>

int main(void)
{
    int entry;

    do {
        int no;
        
        printf("请输入一个数：");       scanf("%d", &no);

        if (no == 0)
            puts("该数为0");
        else if (no > 0)
            puts("该数为正数");
        else
            puts("该数为负数");
        
        printf("要继续吗？输入0继续，9退出:");
        scanf("%d", &entry);

    } while(entry == 0);

    return 0;
}
