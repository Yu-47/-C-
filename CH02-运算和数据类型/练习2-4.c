# include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, c1, c2, c3, c4;
    double d1, d2, d3, d4, f1, f2, f3, f4;
    
    int a = 5;
    double b = 5.0;
    int c = 2;
    double d = 2.0;

    n1 = 5 / 2;        /* n1 ← 2 */
    n2 = 5.0 / 2;      /* n2 ← 2.5 */
    n3 = 5 / 2.0;      /* n3 ← 2.5 */
    n4 = 5.0 / 2.0;    /* n4 ← 2.5 */

    d1 = 5 / 2;        /* d1 ← 2 */
    d2 = 5.0 / 2;      /* d2 ← 2.5 */
    d3 = 5 / 2.0;      /* d3 ← 2.5 */
    d4 = 5.0 / 2.0;    /* d4 ← 2.5 */
    
    c1 = a / c;        /* c1 ← 2 */
    c2 = b / c;        /* c2 ← 2.5 */
    c3 = a / d;        /* c3 ← 2.5 */
    c4 = b / d;        /* c4 ← 2.5 */

    f1 = a / c;        /* f1 ← 2. */
    f2 = b / c;        /* f2 ← 2.5 */
    f3 = a / d;        /* f3 ← 2.5 */
    f4 = b / d;        /* f4 ← 2.5 */
    
    printf("n1 = %d\n", n1);    /* n1 = 2 */
    printf("n2 = %d\n", n2);    /* n2 = 2 */
    printf("n3 = %d\n", n3);    /* n3 = 2 */
    printf("n4 = %d\n", n4);    /* n4 = 2 */

    printf("d1 = %f\n", d1);    /* d1 = 2.000000 */
    printf("d2 = %f\n", d2);    /* d2 = 2.500000 */
    printf("d3 = %f\n", d3);    /* d3 = 2.500000 */
    printf("d4 = %f\n", d4);    /* d4 = 2.500000 */
    
    printf("c1 = %d\n", c1);    /* c1 = 2 */
    printf("c2 = %d\n", c2);    /* c2 = 2 */
    printf("c3 = %d\n", c3);    /* c3 = 2 */
    printf("c4 = %d\n", c4);    /* c4 = 2 */

    printf("f1 = %f\n", f1);    /* f1 = 2.000000 */
    printf("f2 = %f\n", f2);    /* f2 = 2.500000 */
    printf("f3 = %f\n", f3);    /* f3 = 2.500000 */
    printf("f4 = %f\n", f4);    /* f4 = 2.500000 */

    return 0;
}
