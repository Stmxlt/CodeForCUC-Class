/*
��
�����ҳ�ͬһ������Ϊ��
�����Զ�����������,���������ݺͺ���,�ȶ�����ʹ��
e.g.class ����{
�����޶���[public/protected/private]
    ���ݳ�Ա
	��Ա����}; 
e.g.class Point{
public:
    int getX(){return x;}
    viod setX(int t){x=t;}
private:
	int x,y;
	}; 
privateֻ�������еĺ�������Ԫ��������,�ⲿ�������ӷ���,����������ʱ����Ϊprivate
protected�ڼ̳к�����ʱ���Ա��������Ա��������
ע�⣺1.�����Ѷ�������������ڱ���(��ָ��)������������  //class Point{Point x;}����,class Point{Point *x;}��ȷ 
2.���������,ֱ����������
3.����ֻ�����ݳ�Ա���ǳ�Ա����,����Ϊ��

��Ա����
д��������ڲ�,��������������������ⶨ��
e.g.�������ⶨ���Ա����
�������� ����::��Ա������(����˵��){������}
e.g.�������
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
��Ľ���:���������ݳ�Ա�Լ���Ա������ԭ�ͷ���ͷ�ļ��й���
���ʵ��:�ӿ�����ٶ�
e.g.�������
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
����:��һ���ඨ�������,��Ϊ������
���� ��������:
Ϊ�������洢�ռ�(��̬����̬)��������
��̬����,����Ĵ������������ɳ����������
Point p1,p[];
��̬������Ϊ����ռ�,�ɶѿռ����new��delete,����Ĵ������������ɳ����������
�����Ա����
������.���ݳ�Ա������(����)
����������.���ݳ�Ա������(����)
����ָ����->���ݳ�Ա������(����)
(*����ָ����)->���ݳ�Ա������(����)
e.g.�ж����� 
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
	cout<<"������:";
	question.display();
	question.justify();
	if(r->justify()){
		cout<<"��������"<<endl;
	}
	else{
		cout<<"�ⲻ������"<<endl;
	}
	return 0;
}
���캯����������ݳ�Ա�ĳ�ʼ��
class Student{
public:
    Student(int i,int a){id=i;age=a;}
private:
	int id,age;
};

int main(){
	Student s1(1001,15),s2(1002,16),s3(1003,17);  //��ʼֵ��һ�����Ը����ݳ�Ա��ֵ 
	return 0;
}
���캯���������Ա����,����Ĵ�����ʼ�������������,û�й��캯��ʱϵͳ�Զ��ṩĬ�Ϲ��캯��
���캯���в���������,����ָ����������,��������ʽ����,��������,һ��Ϊ���к��� 
����::����(�βα�){������}
���������������ڶ�����ʧʱ����˳����������(���ݹ��캯�����õĶ���)
����::~����(){������}
��������û�в�����������,һ������ֻ�ܶ�����һ����������,����ָ����������,������ʽ����,�����ᳫ
һ���ȹ���ĺ�����,�����������,static����ȫ�ֶ����main������������
�������캯��:�Զ����ʼ��
����::����(const ����&������){������}
�������캯��ֻ��һ������(�Զ��������),����ָ����������,��������ʽ����
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
