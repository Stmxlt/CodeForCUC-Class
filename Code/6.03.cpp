#include<iostream>
#include<cstring>
using namespace std;
template <typename T>
T max(T a,T b){
	return a>b?a:b;
	}
int max(int a,float b){
	return a>b?a:b;
	}
char *max(char *a,char *b){
	return strcmp(a,b)>0?a:b;
}
int main(){
	char a="4",b="5";
	int c=5;
	char *p="qaz",*h="wsx";
	cout<<max(a,b)<<endl;
	cout<<max(a,c)<<endl;
	cout<<max(p,h)<<endl;
	return 0;
}
