/*
ָ��--���ݵ�ַ��һ����������
ָ�����--ָ���ֵ
����ָ�룺���ø������Ͷ���
eg.int *p1,p2;
   int *char1,*float2;
ǰ�߽���1��ָ�룬һ�����ͱ��������߽���2��ָ�� 
ָ��ʹ��ǰ��ʼ��
eg.int a=26;
   int *p1=&a;  //"&"����ȡ��ַ������ʼ��
   int *p;
   *p=&a;  //������ֵҲ����
eg.int a;
   int *p1;
   *p1=20  //δ����ֵ������
pָ��a��*p��aֵ��ͬ
eg.int a=20;
   int *p=&a;
   printf("The value of p is:%d.",*p);  //���The value of p is:20.
ָ������ĸ�ֵ
eg.int a=2,*pa=&a,*pb;
   int pb=pa;  //ָ��ָ��Ķ��帳ֵ
   int a=2,*pa=&a,*pb;
   int pb=pa;  //�ȼ�����ʽ
eg.int a[5],*pa;
   pa=a;  //����ָ��Ķ��帳ֵ
   int a[5],*pa;
   pa=&a[0];  //�ȼ�����ʽ
eg.char *pc="C Language"  //�ַ���ָ��Ķ��帳ֵ
eg.int (*pf)();
   pf=f;  //����ָ��Ķ��帳ֵ��f�Ǻ�����
eg.ֵ����
    int a=1,b=2,c;
    int *p1=&a,*p2=&b;
    cout<<"p1="<<*p1<<"\t"<<"p2="<<*p2<<endl;
    c=*p1;
	*p1=*p2;
	*p2=c;
	cout<<"p1="<<*p1<<"\t"<<"p2="<<*p2<<endl;
	return 0;  //�ı�a,bֵ 
	int a=1,b=2;
    int *p1=&a,*p2=&b,*p;
    cout<<"p1="<<*p1<<"\t"<<"p2="<<*p2<<endl;
    p=p1;
	p1=p2;
	p2=p;
	cout<<"p1="<<*p1<<"\t"<<"p2="<<*p2<<endl;
	return 0;  //���ı�a,bֵ 
���鸳ֵʱ��p+i��a+iָa[i]��ַ����&a[i]
*(p+i)��*(a+i)�ȼۣ�ָ��a[i]
ֻ��ָ�������ָ��������ԼӼ����㣬�����������ָ�������
*p++�ȼ�*(p++)����ȡ��p��ָ��ַ������*p����ʹp+1Ϊp
*++p�ȼ�*(++p)����p+1Ϊp����ȡ��ʹp��ָ��ַ������*p
*(p)++����ȡ��p��ָ��ַ������(*p)����ʹp����ֵ+1
���������ܸ�ֵ������ 
eg.ָ����������
    int a[5],i,*p=a;
    for(i=0;i<5;i++){
    	*p=i;  //����ָ�븳ֵʹa[i]=i 
		p++;  //�������ӣ�pָ��a[1],a[2],a[3],a[4]
	}
	p=a;  //�ٴγ�ʼ������p��a[5]תΪa[0] 
	for(i=0;i<5;i++){
    	printf("a[%d]=%d\n",i,*p++); //��ӡ��pָ���a[0]��������a[1]��ӡ��pָ���a[1]���Դ�����
	}
	return 0;
eg.ָ��ļӼ�
    int a[5]={5,20,8,6,13},*p1=&a[1],*p2=&a[4];
    printf("%d,%d\n",*p1,*p2);
    printf("%d\n",*p1-*p2);
    printf("%d\n",p1-p2);  //��ӡλ�ò�ֵ
ָ��Ƚ��õ�ַ�Ƚ�*p1=&a[1],*p2=&a[3],��p1<p2
eg.int a[5]={5,20,8,6,13},*p1=&a[1],*p2=&a[3],*p3;
	if(p1>p2){
		p3=p1;  //p1�ڵ�λ����if����else
	}
	else p3=p2; 
    printf("%d\n",*p3);  //p3=p2=a[3]=6 
    p1=p1+3,p2=p2-3;  //p1��Ϊa[4],p2��Ϊa[1] 
    if(p1>p2){
		p3=p1;  //p1�ڸ�λ����if
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
