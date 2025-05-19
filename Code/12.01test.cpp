#include<iostream>
#include<cstdio>
using namespace std;

int sum(int a){
	int s=1;
	for(int i=1;i<=a;i++){
		s*=i;
	}
	return s;
}

int main(){
	int s,a;
	scanf("%d",&a);
	s=sum(a);
	printf("%d",s);
	return 0;
}
