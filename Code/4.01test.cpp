/*
构造函数特点:类名::类名(形参表){函数体}
类中包含多种数据类型,难以对每个成员赋值,利用构造函数初始化 
创建多项执行构造函数,没有则利用默认构造函数
析构函数特点:类名::~类名(){函数体}
析构函数在执行完成后调用将内存空间释放,按栈释放,不可重载
拷贝构造函数:类名::类名(const 类名&对象名){函数体}
利用存在对象对数据成员初始化,返回类的对象
浅拷贝在默认拷贝构造函数使用,有动态申请内存时会对同一内存析构两次,报错
深拷贝在自定拷贝构造函数使用,有动态申请内存时会对分别生成的两个内存析构两次,正确
this指针作为隐式参数传递给每个非static函数,指出了每个函数操作数据所属对象
this指针不能够显式声明,但可以显式使用 
e.g.调用多个对象 
class xy{
public:
    void set(int i,int a){x=i;y=a;}  //等同于void set(int i,int a,xy *const this){this x->i;this y->a;},但xy *const this是错误的不能写 
    void print(){cout<<x<<","<<y<<endl;};
private:
    int x,y;
};
int main(){
	xy s1,s2,s3;  //分配s1,s2,s3内存空间 
	s1.set(10,15);  //等同于s1.set(10,15,&s1);
	s1.print();
	s2.set(10,15);
	s2.print();
	s3.set(10,15);
	s3.print();
	return 0;
}
对象指针 类名 *对象指针名
e.g.p a(5,2);p *ptr; ptr=&a;
对象指针名->getx()相当于(*ptr).getx()
对象数组 类名 *对象数组名[长度]
利用默认构造函数构造对象数组
e.g.p a[2]={a(1,2),a(3,4)}
子对象
一个对象作为另一个类的成员,该对象成为类的子对象
e.g.class x{
public:
    class a;
    class b;
};
初始化时要使大类的构造函数中包含其中所有类的构造函数
利用参数初始化表方式构造函数
x::x(参数表):成员1(参数表1),成员2(参数表2),...,成员n(参数表n){...}
先调用所有子对象构造函数初始化,然后再执行大类的构造函数,子对象构造顺序按照private中的顺序构造,析构与构造的顺序相反
对象空间的空闲存储单元,堆对象是程序运行时可以创建或删除的对象,有数据区代码区栈区堆区
new创建堆对象,返回值是一个指针,delete删除堆对象,释放new创建的堆对象
e.g. aclass *a; a=new aclass(3,7);delete a;
堆是有限的,要有足够空间满足内存需要,没有足够空间返回空指针
new 类型说明符[算术表达式]创建堆对象数组,只能够调用默认的构造函数,delete[] 指针名删除对象数组 
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
