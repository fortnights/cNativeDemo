/*
 * @Description: 
 * @Version: 1.0
 * @Autor: fortnights
 * @Date: 2020-08-30 00:54:07
 * @LastEditTime: 2020-08-30 02:07:33
 */
#include <stdio.h>
int main()
{
    printf("%d, %d\n", increment(10), negate(10));
    printf("%d, %d\n", increment(0), negate(0));
    printf("%d, %d\n", increment(-10), negate(-10));

    system("pause");
    return 0;
}