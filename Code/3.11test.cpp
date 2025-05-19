/*
指针数组
char* proname[]={"Fortran","C","C++"}  //指针数组每个元素都存放一个字符指针
二级指针  //类型名 **指针变量名
e.g.int a,*pa,**ppa;
    pa=&a;
    ppa=&pa;  //**ppa=*(*ppa)=*(pa)=a
e.g.int a=100,*pa,**ppa;
    pa=&a;
    ppa=&pa;
    printf("%d,%u,%u\n",a,pa,ppa);
    printf("%d,%d,%d\n",a,*pa,**ppa);
    printf("%u,%u,%u\n",&a,pa,*ppa);  //%u输出变量地址
e.g.利用四种方式打印二维数组
    int a[3][4]={{0,1,2,3},{4,5,6,7},{8,9,3,6}},*b[3]={a[0],a[1],a[2]},**p=b;
    for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
	printf("%d,%d,%d,%d\n",a[i][j],*(*(a+i)+j),*(b[i]+j),*(*(p+i)+j));}}
e.g.利用二级指针引用字符串
    const char *ps[6]={"FORTRAN","C","C++","BASIC","PASCAL","COBOL"};  //字符串定义加const 
    const char **pp;
	pp=ps;
	for(int i=0;i<6;i++){puts(*pp++);}  //不断++,从ps[1]加到ps[6]
引用:给一个变量起一个别名(仅在C++内使用)
e.g.int a; int &b=a;  //声明b是a的引用(必须先声明初始化!!)
引用不是变量,没有地址,没有空引用,引用只能且永远用于已初始化的变量
const引用常量
e.g.int a=1; const int ca=1; int &r=ca; const int &cr=ca; const int &cq=a;  //第三句错误,变量不能用来引用常量,其余正确 
实体(包括数组、指针)可引用,字面值(包括引用自身)不可引用 
e.g.int a=3; int &r=a; double &rr=1;  //第三句错 
e.g.int a=3,b=8; int *p=&a; 
int *&rp=p; rp=&b; *rp=5;
e.g.int x[10]; int(&y)[10]=x;
e.g.int a; int &ra=a; int &rra=ra;  //不可以引用引用,错误
函数的参数传递(值传递、指针传递、引用传递) 
值传递在函数中已用过 
引用传递在被调用函数中使用了实参的别名,是双向操作 
e.g.值传递交换值
void swap(int a,int b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
    int s1=5,s2=10;
	swap(s1,s2);
	return 0;  
}  //直接转化,a与b值发生变化,而s1与s2值不发生变化 
e.g.引用传递交换值
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
    int s1=5,s2=10;
	swap(s1,s2);
	return 0;
}  //利用别名转化,a与b、s1与s2的值发生变化
e.g.指针传递交换值
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
    int s1=5,s2=10;
	swap(s1,s2);
	return 0;
}  //通过修改地址值实现,a与b、s1与s2的值发生变化
&前有类型标识符是引用,其余为取地址 
可以引用函数,使得全局变量改变
引用返回可以将函数用在赋值运算符的左边 
e.g.int a[]={1,2,3,4};
    int &index(int i){
        return a[i];
        }
    int main(){
	    cout<<a[3]<<endl;
	    index(3)=10;
	    cout<<a[3]<<endl;
	    return 0;
        }  //先输出4,在输出10 
可以利用指针访问结构体->
数组元素类型为结构组,称为结构数组 
*/
#include<iostream>
#include<cstring>
using namespace std;
int a[]={1,2,3,4};
int &index(int i){
    return a[i];
    }
int main(){
	cout<<a[3]<<endl;
	index(3)=10;
	cout<<a[3]<<endl;
	return 0;
    } 
