#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

struct Date{
		int year;
		int month;
		int day;
	};

struct information{
		unsigned long long num;
		char name[20];
		Date birthday;
		float score;
		int age;
	};

int main(){
	information stu;
	scanf("%d",&stu.age);
	strcpy(stu.name,"tiansuohaoer");
	stu.num=1145141919810;
	stu.birthday.month=12;
	cout<<stu.num<<"\n"<<stu.name<<"\n"<<endl;
	scanf("%s",&stu.name);
	cout<<stu.name;
	return 0;
}
