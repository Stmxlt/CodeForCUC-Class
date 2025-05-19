#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int year,leap;
    printf("请输入年份:");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                leap=1;
            }
	        else{
                leap=0;
		    }
            }
	    else{
            leap=1;
        }
    }
	else{
        leap=0;
    }
    if(leap==1)
    printf("%d 是闰年. \n ",year);
    else
    printf("%d 不是闰年. \n ",year);
    return 0;
}

