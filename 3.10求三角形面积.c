#define  _CRT_SECURE_NO_WARNINGS

//����������������������ε������߳������������ε�������������ε������߳��ֱ�Ϊa��b��c��Ϊ�������������Ϊ����������߳���������ȷ�ģ��������һ�������Ρ�
//** �����ʽҪ��"%f,%f,%f"  ��ʾ��Ϣ��"Enter 3 floats:"
//* *�����ʽҪ��"area=%.2f\n"
//��������ʾ�����£�
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
