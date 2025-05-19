/*#include<iostream>
#include<cstdio>
using namespace std;
double jiecheng(int a){
	double result=1;
	for(int i=1;i<=a;i++){
		result*=i;
	}
	return result;
}

int main()
{
	double result;
	result=jiecheng(20);
	printf("%.0lf",result);
	return 0;
}*/


#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int random(void){
	int sum=0,i;
	int num[20];
	srand((unsigned)time(NULL));
    for(i=1;i<=20;i++){
        num[i]=rand()%100;
        sum+=num[i];
    }
	return sum;
}

int main()
{
	double result;
	int sum=random();
	result=sum/20.00;
	printf("%.2lf",result);
	return 0;
}
