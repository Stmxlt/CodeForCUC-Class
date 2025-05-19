#include<iostream>
using namespace std;
class Point{
	public:
		void setxy(int myx,int myy){
			X=myx;
			Y=myy;
		}
		void movexy(int x,int y){
			X+=x;
			Y+=y;
		}
	protected:
		int X,Y;
};
class Circle:protected Point{
	public:
		void setr(int myx,int myy,int myr){
			setxy(myx,myy);
			R=myr;
		}
		void movexy(int x,int y){Point::movexy();}
		void display();
	protected:
		int R;
};
void Circle::display(){
	cout<<"The position of center is:";
	cout<<"("<<X<<","<<Y<<")"<<endl;
	cout<<"The radius of circle is:"<<R<<endl;
}
class Cylinder:public Circle{
	
};
