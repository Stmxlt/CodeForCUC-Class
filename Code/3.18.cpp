#include<iostream>
using namespace std;

int maxl(int x,int y){
	if(x>=y){
		return x;
	}
	else{
		return y;
	}
};

int maxl(int x,int y,int z){
	if(x>=y){
		if(x>=z){
			return x;
		}
		else{
			return z;
		}
	}
	else{
		if(y>=z){
			return y;
		}
		else{
			return z;
		}
	}
};

double maxl(double x,double y){
	if(x>=y){
		return x;
	}
	else{
		return y;
	}
};
double maxl(double x,double y,double z){
	if(x>=y){
		if(x>=z){
			return x;
		}
		else{
			return z;
		}
	}
	else{
		if(y>=z){
			return y;
		}
		else{
			return z;
		}
	}
};

int main(){
	double num1,num2,num3;
	cout<<"Please type three numbers:"<<endl;
	cin>>num1>>num2>>num3;
	cout<<"The two numbers' maxinum is:"<<(maxl(num1,num2))<<endl;
	cout<<"The three numbers' numbers' maxinum is:"<<(maxl(num1,num2,num3))<<endl;
}
