#include<iostream>
using namespace std;
const double PI=3.14;

class Circle{
	public:
		Circle(){};
		virtual double volume() const {return 0.0;}
	double radius,higth;
	};

class Column:public Circle{
	public:
		Column(double radius,double higth){R=radius;H=higth;}
		double volume() const {return PI*R*R*H;}
	private:
		double R,H;
	};

class Sphere:public Circle{
	public:
		Sphere(double radius){R=radius;}
		double volume() const {return 4.0/3.0*R*R*R*PI;}
	protected:
		double R;
	};

void fun(Circle &p){
	cout<<p.volume()<<endl;
}

int main(){
	Sphere s_obj(3.0);
	Column c_obj(4.0,6.0);
	cout<<"The volume of sphere is:";
	fun(s_obj);
	cout<<"The volume of column is:";
	fun(c_obj);
	return 0;
}

