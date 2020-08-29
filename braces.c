/*
 * @Description: 
 * @Version: 1.0
 * @Autor: fortnights
 * @Date: 2020-08-30 01:12:33
 * @LastEditTime: 2020-08-30 02:04:05
 * @LastEditTime: 2020-08-30 01:52:57
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int brace = 0;
    int ch;
    // 逐个字符读取程序
    while ((ch = getchar()) != EOF)
    {
        if (ch == '{')
        {
            brace += 1;
        }
        if (ch == '}')
        {
            if (brace == 0)
            {
                printf("异常关闭！没有匹配的左括号");
            }
            else
            {
                brace -= 1;
            }
        }
    }

    if (brace > 0)
    {
        printf("右括号匹配失败！");
    }

    return EXIT_SUCCESS;
}