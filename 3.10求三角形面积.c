#define  _CRT_SECURE_NO_WARNINGS

//求三角形面积。输入三角形的三个边长，计算三角形的面积。设三角形的三个边长分别为a、b、c，为简单起见，我们认为输入的三个边长数据是正确的，可以组成一个三角形。
//** 输入格式要求："%f,%f,%f"  提示信息："Enter 3 floats:"
//* *输出格式要求："area=%.2f\n"
//程序运行示例如下：
//Enter 3 floats:2, 2, 3
//area = 1.98

#include<math.h>
#include<stdio.h>
int main()
{
    printf("Enter 3 floats:");
    float a, b, c;
    scanf("%f,%f,%f", &a, &b, &c);
    float p = (a + b + c) / 2;
    printf("area=%.2f\n", sqrt(p * (p - a) * (p - b) * (p - c)));
    return 0;
}
