#define _CRT_SECURE_NO_WARNINGS 1

//������������ƽ����
//�Ӽ��̶�������ʵ������̼��㲢������ǵ�ƽ���ͣ�Ҫ��ʹ����ѧ����pow(x, y)����ƽ��ֵ������������2λС����
//��ʾ��ʹ����ѧ������Ҫ�ڳ����м������Ԥ�������� #include <math.h>
//
//����Ϊ��������ʾ����
//Please input xand y:
//1.2, 3.4�L
//result = 13.00
//
//�����ʽ :
//    "%f,%f"
//
//    �����ʽ��
//    ������ʾ��Ϣ��"Please input x and y:\n"
//    �����ʽ��"result=%.2f\n"


#include<stdio.h>
#include<math.h>
int main()
{
    printf("Please input x and y:\n");
    float x, y;
    scanf("%f,%f", &x, &y);
    printf("result=%.2f\n", pow(x, 2) + pow(y, 2));
    return 0;
}