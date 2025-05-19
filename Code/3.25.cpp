/*
类
抽象找出同一类对象成为类
类是自订的数据类型,包含有数据和函数,先定义再使用
e.g.class 类名{
访问限定符[public/protected/private]
    数据成员
	成员函数}; 
e.g.class Point{
public:
    int getX(){return x;}
    viod setX(int t){x=t;}
private:
	int x,y;
	}; 
private只允许本类中的函数和友元函数访问,外部函数连接访问,不定义类型时定义为private
protected在继承和派生时可以被派生类成员函数访问
注意：1.允许已定义的类名出现在本类(的指针)或是其它类中  //class Point{Point x;}错误,class Point{Point *x;}正确 
2.类可以无名,直接声明对象
3.可以只有数据成员或是成员函数,或者为空

成员函数
写在类体的内部,或是声明类体后再类体外定义
e.g.在类体外定义成员函数
返回类型 类名::成员函数名(参数说明){函数体}
e.g.定义点类
class Point{
public:
    viod setxy(int x,int y){
	    X=x;
	    Y=y;
		}
	viod displayxy(){
	    cout<<"("<<X<<","<<Y<<")"<<endl;
		}
private:
	int x,y;
	};
类的界面:将所有数据成员以及成员函数的原型放在头文件中共享
类的实现:加快编译速度
e.g.定义点类
class Point{
public:
    viod setxy(int x,int y)
	viod displayxy()
private:
	int x,y;
	};
	
#include "hello"
viod Point::setxy(int x,int y){
	X=x;
	Y=y;
	}
viod Point::displayxy(){
	cout<<"("<<X<<","<<Y<<")"<<endl;
	}
对象:有一个类定义的类型,称为类类型
类名 对象名表:
为对象分配存储空间(静态、动态)创建对象
静态分配,对象的创建和销毁是由程序本身决定的
Point p1,p[];
动态分配人为分配空间,由堆空间分配new、delete,对象的创建和销毁是由程序本身决定的
对象成员访问
对象名.数据成员或函数名(参数)
对象引用名.数据成员或函数名(参数)
对象指针名->数据成员或函数名(参数)
(*对象指针名)->数据成员或函数名(参数)
e.g.判断闰年 
class Date{
public:
    void set(int year,int month,int day){
	    Y=year;
	    M=month;
	    D=day;
		}
	void display(){
	    cout<<M<<"/"<<D<<"/"<<Y<<endl;
		}
	int justify(){
		return (Y%400==0||(Y%4==0&&Y%100!=0));
    }
private:
	int Y,M,D;
};

int main(){
	Date question,*r;
	r=&question;
	question.set(2024,3,25);
	cout<<"现在是:";
	question.display();
	question.justify();
	if(r->justify()){
		cout<<"这是闰年"<<endl;
	}
	else{
		cout<<"这不是闰年"<<endl;
	}
	return 0;
}
构造函数完成类数据成员的初始化
class Student{
public:
    Student(int i,int a){id=i;age=a;}
private:
	int id,age;
};

int main(){
	Student s1(1001,15),s2(1002,16),s3(1003,17);  //初始值不一样可以给数据成员赋值 
	return 0;
}
构造函数是特殊成员函数,对象的创建初始化工作由它完成,没有构造函数时系统自动提供默认构造函数
构造函数有参数能重载,不能指定返回类型,不可以显式调用,可以重载,一般为公有函数 
类名::类名(形参表){函数体}
析构函数作用是在对象消失时反向顺序消除内容(根据构造函数调用的对象)
类名::~类名(){函数体}
析构函数没有参数不能重载,一个类中只能定义有一个析构函数,不能指定返回类型,可以显式调用,但不提倡
一般先构造的后析构,后构造的先析构,static对象、全局对象或main析构完再析构
拷贝构造函数:对对象初始化
类名::类名(const 类名&对象名){函数体}
拷贝构造函数只有一个参数(对对象的引用),不能指定返回类型,不可以显式调用
*/

#include <iostream>
using namespace std;
class Point{
public:
Point(int=0,int=0);
Point(const Point&);
void displayxy();
~Point();
private:
int X,Y;
};
Point::Point (int x,int y)
{
X=x ;
Y=y;
cout<<"Constructor is called!";
displayxy();
}
Point::Point (const Point &p)
{
X=p.X ;
Y=p.Y;
cout<<"Copy constructor iscalled!";
displayxy();
}
Point::~Point()
{
cout<<"Destructor is called!";
displayxy();
}
void Point::displayxy()
{
cout<<"("<<X<<", "<<Y<<")"<<endl;
}
void func(Point p)
{
int x=10*2;
int y=10*2;
Point pp(x,y);
}


int main()
{
{
Point p1(3,4);
Point p2=p1;
func(p1);
}
return 0;
}
