//编程从键盘输入一个小写英文字母，将其转换为大写英文字母，并将转换后的大写英文字母及其十进制的ASCII码值显示到屏幕上。
//** 输入提示信息** ："Please input a low-case letter from keyboard:"
//* *输入数据格式 * *："%c"
//* *输出数据格式 * *："The capital letter and its ASCII value are:%c and %d.
//"
//提示：从键盘输入一个字符可用scanf也可用getchar
//程序运行示例：
//Please input a low - case letter from keyboard : a
//The capital letterand its ASCII value are : A and 65.

#include<stdio.h>
int main()
{
    printf("Please input a low-case letter from keyboard:");
    char ch;
    ch = getchar();
    int value;
    value = ch - 32;
    printf("The capital letter and its ASCII value are:%c and %d.", ch - 32, value);
    return 0;
}