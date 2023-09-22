# include <stdio.h>

int main(void){

    for(int i = 0; i < 5; i++)
        printf("%d ", i + 1);
    
    puts("");
    
    for(int i = 0; i < 5; i++)
        printf("%d ", i++);

    puts("");

    for(int i = 0; i < 5; i++)
        printf("%d ", ++i);

    return 0;
}