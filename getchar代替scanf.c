//��̴Ӽ�������һ��СдӢ����ĸ������ת��Ϊ��дӢ����ĸ������ת����Ĵ�дӢ����ĸ����ʮ���Ƶ�ASCII��ֵ��ʾ����Ļ�ϡ�
//** ������ʾ��Ϣ** ��"Please input a low-case letter from keyboard:"
//* *�������ݸ�ʽ * *��"%c"
//* *������ݸ�ʽ * *��"The capital letter and its ASCII value are:%c and %d.
//"
//��ʾ���Ӽ�������һ���ַ�����scanfҲ����getchar
//��������ʾ����
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