#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);//������������
    printf("%d\n",a+b);//���a+b�Ľ��
    printf("%d\n",a-b);//���a-b�Ľ��
    printf("%d\n",a*b);//���a*b�Ľ��
    if(a%b==0) //�ж��Ƿ���Ա�����
    {
        printf("%d\n",a/b); //���a/b�Ľ��
    }
    else
    {
        printf("%d\n",a*b); //���a*b�Ľ��
    }
    return 0;
}

