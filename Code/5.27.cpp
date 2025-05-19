#include<iostream>
using namespace std;

//成员函数重载 
class Time{
	public:
		Time(double s=0.0,double m=0.0,double h=0.0);
		Time operator + (Time t);
		Time operator - (Time t);
		void display();
	private:
		double Second,Minute,Hour;
};
Time::Time(double s,double m,double h){
	Second=s; Minute=m; Hour=h;
}//构造函数 
Time Time:: operator + (Time t){
	Time result;
	result.Second=Second+t.Second;
	result.Minute=Minute+t.Minute;
	result.Hour=Hour+t.Hour;
	return result;
}//重载+符号 
Time Time:: operator - (Time t){
	Time result;
	result.Second=Second-t.Second;
	result.Minute=Minute-t.Minute;
	result.Hour=Hour-t.Hour;
	return result;
}//重载-符号 
void Time::display(){
	while(Second>60){
		Second-=60;
		Minute+=1;
	};
	while(Minute>60){
		Minute-=60;
		Hour+=1;
	};
	while(Second<0){
		Second+=60;
		Minute-=1;
	}
	while(Minute<0){
		Minute+=60;
		Hour-=1;
	};
	cout<<"Result is:"<<Second<<"s "<<Minute<<"m "<<Hour<<"h"<<endl;
}
/*
//友元函数重载
class Time{
	public:
		Time(double s=0.0,double m=0.0,double h=0.0);
		friend Time operator + (Time t1,Time t2);
		friend Time operator - (Time t1,Time t2);
		void display();
	private:
		double Second,Minute,Hour;
};
Time::Time(double s,double m,double h){
	Second=s; Minute=m; Hour=h;
}//构造函数
Time operator + (Time t1,Time t2){
	Time result;
	result.Second=t1.Second+t2.Second;
	result.Minute=t1.Minute+t2.Minute;
	result.Hour=t1.Hour+t2.Hour;
	return result;
}//友元重载+符号 
Time operator - (Time t1,Time t2){
	Time result;
	result.Second=t1.Second-t2.Second;
	result.Minute=t1.Minute-t2.Minute;
	result.Hour=t1.Hour-t2.Hour;
	return result;
}//友元重载-符号 
void Time::display(){
	while(Second>60){
		Second-=60;
		Minute+=1;
	};
	while(Minute>60){
		Minute-=60;
		Hour+=1;
	};
	while(Second<0){
		Second+=60;
		Minute-=1;
	}
	while(Minute<0){
		Minute+=60;
		Hour-=1;
	};
	cout<<"Result is:"<<Second<<"s "<<Minute<<"m "<<Hour<<"h"<<endl;
}
*/
//测试数据 
int main(){
	Time t1(11,45,14),t2(191,98,10),t;
	t=t1+t2;
	t.display();
	t=t1-t2;
	t.display();
}
