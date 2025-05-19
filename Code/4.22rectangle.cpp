#include <iostream>
using namespace std;

class Point{
protected:
    double x,y;
public:
    Point(double x=0,double y=0):x(x),y(y){} //默认(0,0)再修改 
    void display()const{ //显示点类信息 
        cout<<"Point:("<<x<<","<< y<<")"<<endl;
    }
};

class Rectangle:public Point{
protected:
    double length;
    double width;
public:
    Rectangle(double x,double y,double l,double w):Point(x,y),length(l),width(w){}
    void display()const{ //显示矩形类信息 
        Point::display();
        cout<<"Rectangle length="<<length<<",Width="<<width<<endl;
		}
    double Area()const{ //计算面积 
        return length*width;
    }
};

class Cube:public Rectangle{
protected:
    double height;
public:
    Cube(double x,double y,double l,double w,double h):Rectangle(x,y,l,w),height(h){}
    void display()const{ //显示长方体类信息 
        Rectangle::display();
        cout<<"Cube:Height="<<height<<endl;
    }
    double Volume()const{ //显计算体积
        return length*width*height;
    }
};

int main() {
    Cube cube(1.0,2.0,3.0,3.0,4.0);
    cube.display();
    cout<<"Cube Volume:" <<cube.Volume()<<endl;
    Rectangle rectangle(0.0,0.0,5.0,10.0);
    rectangle.display();
    cout<< "Rectangle Area:"<<rectangle.Area()<<endl;
    return 0;
}
