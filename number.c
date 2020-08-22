/* 从标准输入到标准输出，并对输出行标号 number.c*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ch;
    // 判断输入位置是否在行首,1代表是
    int at_beginning;
    // 输出行号
    int line;
    line = 0;
    at_beginning = 1;
    // 做输入循环处理
    while ((ch = getchar()) != EOF)
    {
        if (at_beginning == 1)
        {
            at_beginning = 0;
            line += 1;
            printf("%d", line);
        }
        putchar(ch);
        if (ch == '\n')
            at_beginning = 1;
    }
    return EXIT_SUCCESS;
}