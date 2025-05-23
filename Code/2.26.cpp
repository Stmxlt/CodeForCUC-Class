/*
指针--数据地址，一种数据类型
指针变量--指针的值
建立指针：利用各种类型定义
eg.int *p1,p2;
   int *char1,*float2;
前者建立1个指针，一个整型变量，后者建立2个指针 
指针使用前初始化
eg.int a=26;
   int *p1=&a;  //"&"符号取地址，并初始化
   int *p;
   *p=&a;  //这样赋值也可以
eg.int a;
   int *p1;
   *p1=20  //未赋初值，错误！
p指向a，*p和a值相同
eg.int a=20;
   int *p=&a;
   printf("The value of p is:%d.",*p);  //输出The value of p is:20.
指针变量的赋值
eg.int a=2,*pa=&a,*pb;
   int pb=pa;  //指针指针的定义赋值
   int a=2,*pa=&a,*pb;
   int pb=pa;  //等价于上式
eg.int a[5],*pa;
   pa=a;  //数组指针的定义赋值
   int a[5],*pa;
   pa=&a[0];  //等价于上式
eg.char *pc="C Language"  //字符串指针的定义赋值
eg.int (*pf)();
   pf=f;  //函数指针的定义赋值，f是函数名
eg.值交换
    int a=1,b=2,c;
    int *p1=&a,*p2=&b;
    cout<<"p1="<<*p1<<"\t"<<"p2="<<*p2<<endl;
    c=*p1;
	*p1=*p2;
	*p2=c;
	cout<<"p1="<<*p1<<"\t"<<"p2="<<*p2<<endl;
	return 0;  //改变a,b值 
	int a=1,b=2;
    int *p1=&a,*p2=&b,*p;
    cout<<"p1="<<*p1<<"\t"<<"p2="<<*p2<<endl;
    p=p1;
	p1=p2;
	p2=p;
	cout<<"p1="<<*p1<<"\t"<<"p2="<<*p2<<endl;
	return 0;  //不改变a,b值 
数组赋值时，p+i和a+i指a[i]地址，即&a[i]
*(p+i)与*(a+i)等价，指向a[i]
只有指向数组的指针变量可以加减运算，数组访问运用指针更方便
*p++等价*(p++)，先取出p所指地址的内容*p，再使p+1为p
*++p等价*(++p)，先p+1为p，再取出使p所指地址的内容*p
*(p)++，先取出p所指地址的内容(*p)，再使p所有值+1
数组名不能赋值、运算 
eg.指针算数运算
    int a[5],i,*p=a;
    for(i=0;i<5;i++){
    	*p=i;  //利用指针赋值使a[i]=i 
		p++;  //不断增加，p指向a[1],a[2],a[3],a[4]
	}
	p=a;  //再次初始化，将p由a[5]转为a[0] 
	for(i=0;i<5;i++){
    	printf("a[%d]=%d\n",i,*p++); //打印出p指向的a[0]，再移至a[1]，印出p指向的a[1]，以此类推
	}
	return 0;
eg.指针的加减
    int a[5]={5,20,8,6,13},*p1=&a[1],*p2=&a[4];
    printf("%d,%d\n",*p1,*p2);
    printf("%d\n",*p1-*p2);
    printf("%d\n",p1-p2);  //打印位置差值
指针比较用地址比较*p1=&a[1],*p2=&a[3],则p1<p2
eg.int a[5]={5,20,8,6,13},*p1=&a[1],*p2=&a[3],*p3;
	if(p1>p2){
		p3=p1;  //p1在低位跳过if运行else
	}
	else p3=p2; 
    printf("%d\n",*p3);  //p3=p2=a[3]=6 
    p1=p1+3,p2=p2-3;  //p1变为a[4],p2变为a[1] 
    if(p1>p2){
		p3=p1;  //p1在高位运行if
	}�
	else p3=p2;
    printf("%d\n",*p3);  //p3=p1=a[4]=13
	return 0;
*/
#include<iostream>
using namespace std;
int main(){
	int a[5]={5,20,8,6,13},*p1=&a[1],*p2=&a[3],*p3;
	if(p1>p2){
		p3=p1;
	}
	else p3=p2; 
    printf("%d\n",*p3);
    p1=p1+3,p2=p2-3;
    if(p1>p2){
		p3=p1;
	}
	else p3=p2;
    printf("%d\n",*p3);
	return 0;
}
