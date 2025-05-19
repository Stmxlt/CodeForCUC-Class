#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
int n,capital;
float rate=0.0025,deposit;
printf("input n,capital:");
scanf("%d %d",&n,&capital);
deposit=capital*((1+rate)*n);
printf("depsit=%f\n",deposit);
return 0;
}
