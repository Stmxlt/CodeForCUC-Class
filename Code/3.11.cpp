#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int cmp(const void *a,const void *b){
	int sum1=0,sum2=0;
	int num1=*((int *)a),num2=*((int *)b);
		sum1+=num1/10+num1%10;
		sum2+=num2/10+num2%10;
    if(sum1>sum2){
        return 1;
    }
    else if(sum1<sum2){
        return -1;
    }
    return 0;
}
int main(){
	int num[]={12,21,32,51,51,16,43,8,9,19},nums=10;
    qsort(num,nums,sizeof(int),cmp);
	for(nums=0;nums<10;nums++){
        cout<<num[nums]<<" ";
    }
	return 0;
}
