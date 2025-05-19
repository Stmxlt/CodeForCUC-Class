#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);//输入两个数字
    printf("%d\n",a+b);//输出a+b的结果
    printf("%d\n",a-b);//输出a-b的结果
    printf("%d\n",a*b);//输出a*b的结果
    if(a%b==0) //判断是否可以被整除
    {
        printf("%d\n",a/b); //输出a/b的结果
    }
    else
    {
        printf("%d\n",a*b); //输出a*b的结果
    }
    return 0;
}

