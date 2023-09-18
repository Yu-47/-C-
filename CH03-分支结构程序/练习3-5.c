# include <stdio.h>

int main(void)
{
    int A = 3;
    int B = 4;
    
    printf("A > B = %d\n", (A > B));    /* A > B = 0 */
    printf("A < B = %d\n", (A < B));    /* A < B = 1 */
    printf("A >= B = %d\n", (A >= B));  /* A >= B = 0 */
    printf("A <= B = %d\n", (A <= B));  /* A <= B = 1 */
    printf("A == B = %d\n", (A == B));  /* A == B = 0 */
    printf("A != B = %d\n", (A != B));  /* A != B = 1 */

    return 0;
}
