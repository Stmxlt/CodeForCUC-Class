/*
ָ������
char* proname[]={"Fortran","C","C++"}  //ָ������ÿ��Ԫ�ض����һ���ַ�ָ��
����ָ��  //������ **ָ�������
e.g.int a,*pa,**ppa;
    pa=&a;
    ppa=&pa;  //**ppa=*(*ppa)=*(pa)=a
e.g.int a=100,*pa,**ppa;
    pa=&a;
    ppa=&pa;
    printf("%d,%u,%u\n",a,pa,ppa);
    printf("%d,%d,%d\n",a,*pa,**ppa);
    printf("%u,%u,%u\n",&a,pa,*ppa);  //%u���������ַ
e.g.�������ַ�ʽ��ӡ��ά����
    int a[3][4]={{0,1,2,3},{4,5,6,7},{8,9,3,6}},*b[3]={a[0],a[1],a[2]},**p=b;
    for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
	printf("%d,%d,%d,%d\n",a[i][j],*(*(a+i)+j),*(b[i]+j),*(*(p+i)+j));}}
e.g.���ö���ָ�������ַ���
    const char *ps[6]={"FORTRAN","C","C++","BASIC","PASCAL","COBOL"};  //�ַ��������const 
    const char **pp;
	pp=ps;
	for(int i=0;i<6;i++){puts(*pp++);}  //����++,��ps[1]�ӵ�ps[6]
����:��һ��������һ������(����C++��ʹ��)
e.g.int a; int &b=a;  //����b��a������(������������ʼ��!!)
���ò��Ǳ���,û�е�ַ,û�п�����,����ֻ������Զ�����ѳ�ʼ���ı���
const���ó���
e.g.int a=1; const int ca=1; int &r=ca; const int &cr=ca; const int &cq=a;  //���������,���������������ó���,������ȷ 
ʵ��(�������顢ָ��)������,����ֵ(������������)�������� 
e.g.int a=3; int &r=a; double &rr=1;  //������� 
e.g.int a=3,b=8; int *p=&a; 
int *&rp=p; rp=&b; *rp=5;
e.g.int x[10]; int(&y)[10]=x;
e.g.int a; int &ra=a; int &rra=ra;  //��������������,����
�����Ĳ�������(ֵ���ݡ�ָ�봫�ݡ����ô���) 
ֵ�����ں��������ù� 
���ô����ڱ����ú�����ʹ����ʵ�εı���,��˫����� 
e.g.ֵ���ݽ���ֵ
void swap(int a,int b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
    int s1=5,s2=10;
	swap(s1,s2);
	return 0;  
}  //ֱ��ת��,a��bֵ�����仯,��s1��s2ֵ�������仯 
e.g.���ô��ݽ���ֵ
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
    int s1=5,s2=10;
	swap(s1,s2);
	return 0;
}  //���ñ���ת��,a��b��s1��s2��ֵ�����仯
e.g.ָ�봫�ݽ���ֵ
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
    int s1=5,s2=10;
	swap(s1,s2);
	return 0;
}  //ͨ���޸ĵ�ֵַʵ��,a��b��s1��s2��ֵ�����仯
&ǰ�����ͱ�ʶ��������,����Ϊȡ��ַ 
�������ú���,ʹ��ȫ�ֱ����ı�
���÷��ؿ��Խ��������ڸ�ֵ���������� 
e.g.int a[]={1,2,3,4};
    int &index(int i){
        return a[i];
        }
    int main(){
	    cout<<a[3]<<endl;
	    index(3)=10;
	    cout<<a[3]<<endl;
	    return 0;
        }  //�����4,�����10 
��������ָ����ʽṹ��->
����Ԫ������Ϊ�ṹ��,��Ϊ�ṹ���� 
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
