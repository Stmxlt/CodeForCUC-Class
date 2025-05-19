/*include<iostream>
using namespace std;

class va{
	virtual void fun1()=0;
	void fun2(){fun1();}   //多态函数,派生类定义对象引用 
	va(){fun1();}  //纯虚函数不可定义构造函数 
}; 

int main(){
	return 0;
}*/

#include<iostream>
#include<cstring>
using namespace std;
class Employee{
	protected:
		int num;
		double salary;
		string name;
		static int totalnum;
	public:
		Employee(){
			num=totalnum++;
			cout<<"Type name:"<<endl;
			cin>>name;
			salary=0.0;
		}
		virtual void cumputesalary()=0;
		virtual void display()=0;
};

class Technician:public Employee{
	protected:
		double workhour;
	public:
		Technician(){
			cout<<name<<"Please type working hour:";
			cin>>workhour;
		}
		void cumputesalary(){
			salary=workhour*100;
		}
		void display(){
			cout<<"Technician name:"<<name<<endl;
			cout<<"id:"<<num<<endl;
			cout<<"salary:"<<salary<<endl;
		}
};

class Manager:virtual public Employee{
	public:
		Manager(){}
		void cumputesalary(){
			salary=8000;
		}
		void display(){
			cout<<"Manager name:"<<name<<endl;
			cout<<"id:"<<num<<endl;
			cout<<"salary:"<<salary<<endl;
		}
};

class Salesman:virtual public Employee{
	protected:
		double profit;
	public:
		Salesman(){
			cout<<"Please type profit this month:";
			cin>>profit;
		}
		void cumputesalary(){
			salary=profit*0.04;
		}
		void display(){
			cout<<"Salesman name:"<<name<<endl;
			cout<<"id:"<<num<<endl;
			cout<<"salary:"<<salary<<endl;
		}
};

class Sales_Manager:public Manager,public Salesman{
	public:
		Sales_Manager(){}
		void cumputesalary(){
			salary=8000+profit*0.05;
		}
		void display(){
			cout<<"Sales_Manager name:"<<name<<endl;
			cout<<"id:"<<num<<endl;
			cout<<"salary:"<<salary<<endl;
		}
};

int Employee::totalnum=10000;
int main(){
	Technician t;
	Manager m;
	Salesman s;
	Sales_Manager s_m;
	t.cumputesalary();
	t.display();
	m.cumputesalary();
	m.display();
	s.cumputesalary();
	s.display();
	s_m.cumputesalary();
	s_m.display();
	return 0;
}
