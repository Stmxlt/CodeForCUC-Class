//手算开立方 
/*#include<iostream>
#include<cstdio>
#include<math.h>
#define EPS 0.000001
using namespace std;

double CubeRoot(int a){
	double l=-10000.0,r=10000.0;
	for(int i=0;i<=100;i++){
		double X=(l+r)/2.0;
		if(X*X*X>a){r=X;}
		else{l=X;}
	}
	return r;
}

int main(){
	int number;
	double root,realcuberoot,deviation,division;
	scanf("%d",&number);
	root=CubeRoot(number);
	printf("%lf\n",root);
	division=1.0/3.0;
	realcuberoot=pow(number,division);
	deviation=root-realcuberoot;
	if(deviation<0){
		deviation=-deviation;
	}
	printf("%lf",deviation);
	return 0;
}
*/
//计算圆周率
#include<iostream>
#include<cstdio>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	srand((unsigned)time(NULL));
	double x=0.0,y=0.0,result=0.0,inner;
	for(int i=0;i<n*n;i++){
		x=rand()/(double)(RAND_MAX);
		y=rand()/(double)(RAND_MAX);
		if((x*x+y*y)<=1){inner++;}
		else{continue;}
	}
	result=inner/n/n*4;
	printf("%lf",result);
	return 0;
}
