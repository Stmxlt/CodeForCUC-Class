/*
���캯���ص�:����::����(�βα�){������}
���а���������������,���Զ�ÿ����Ա��ֵ,���ù��캯����ʼ�� 
��������ִ�й��캯��,û��������Ĭ�Ϲ��캯��
���������ص�:����::~����(){������}
����������ִ����ɺ���ý��ڴ�ռ��ͷ�,��ջ�ͷ�,��������
�������캯��:����::����(const ����&������){������}
���ô��ڶ�������ݳ�Ա��ʼ��,������Ķ���
ǳ������Ĭ�Ͽ������캯��ʹ��,�ж�̬�����ڴ�ʱ���ͬһ�ڴ���������,����
������Զ��������캯��ʹ��,�ж�̬�����ڴ�ʱ��Էֱ����ɵ������ڴ���������,��ȷ
thisָ����Ϊ��ʽ�������ݸ�ÿ����static����,ָ����ÿ����������������������
thisָ�벻�ܹ���ʽ����,��������ʽʹ�� 
e.g.���ö������ 
class xy{
public:
    void set(int i,int a){x=i;y=a;}  //��ͬ��void set(int i,int a,xy *const this){this x->i;this y->a;},��xy *const this�Ǵ���Ĳ���д 
    void print(){cout<<x<<","<<y<<endl;};
private:
    int x,y;
};
int main(){
	xy s1,s2,s3;  //����s1,s2,s3�ڴ�ռ� 
	s1.set(10,15);  //��ͬ��s1.set(10,15,&s1);
	s1.print();
	s2.set(10,15);
	s2.print();
	s3.set(10,15);
	s3.print();
	return 0;
}
����ָ�� ���� *����ָ����
e.g.p a(5,2);p *ptr; ptr=&a;
����ָ����->getx()�൱��(*ptr).getx()
�������� ���� *����������[����]
����Ĭ�Ϲ��캯�������������
e.g.p a[2]={a(1,2),a(3,4)}
�Ӷ���
һ��������Ϊ��һ����ĳ�Ա,�ö����Ϊ����Ӷ���
e.g.class x{
public:
    class a;
    class b;
};
��ʼ��ʱҪʹ����Ĺ��캯���а�������������Ĺ��캯��
���ò�����ʼ����ʽ���캯��
x::x(������):��Ա1(������1),��Ա2(������2),...,��Աn(������n){...}
�ȵ��������Ӷ����캯����ʼ��,Ȼ����ִ�д���Ĺ��캯��,�Ӷ�����˳����private�е�˳����,�����빹���˳���෴
����ռ�Ŀ��д洢��Ԫ,�Ѷ����ǳ�������ʱ���Դ�����ɾ���Ķ���,��������������ջ������
new�����Ѷ���,����ֵ��һ��ָ��,deleteɾ���Ѷ���,�ͷ�new�����ĶѶ���
e.g. aclass *a; a=new aclass(3,7);delete a;
�������޵�,Ҫ���㹻�ռ������ڴ���Ҫ,û���㹻�ռ䷵�ؿ�ָ��
new ����˵����[�������ʽ]�����Ѷ�������,ֻ�ܹ�����Ĭ�ϵĹ��캯��,delete[] ָ����ɾ���������� 
e.g. aclass *a; a=new aclass[15];delete[] a;
*/
#include<iostream>
using namespace std ;
#include<string.h>
class name
{ public :
name(char *pn) ;
~ name() ;
protected :
char *pname ;
int size ;
} ;
name :: name(char *pn)
{ cout <<" Constructing " << pn << endl ;
pname = new char[strlen(pn)+1] ;
if (pname!=0) strcpy(pname,pn) ;
size = strlen(pn) ;
}
name :: ~ name()
{ cout << " Destructing " << pname << endl ;
delete []pname ;
size = 0 ;
}
int main()
{ name Obj1("NoName") ;
name Obj2 = Obj1 ;
}
