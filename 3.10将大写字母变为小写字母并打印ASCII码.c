#define _CRT_SECURE_NO_WARNINGS

//�Ӽ�������һ����дӢ����ĸ������ת��ΪСдӢ����ĸ�󣬽�ת�����СдӢ����ĸ����ʮ���Ƶ�ASCII��ֵ��ʾ����Ļ�ϡ�
//** �����ʽҪ����ʾ��Ϣ��"Press a key and then press Enter:"
//* *�����ʽҪ��"%c, %d\n"
//��������ʾ�����£�
//Press a key and then press Enter : B
//b, 98

#include<stdio.h>
int main()
{
    char ch;
    printf("Press a key and then press Enter:");
    scanf("%c", &ch);
    int num = ch + 32;
    ch = ch + 32;
    printf("%c, %d", ch, num);
    return 0;
}