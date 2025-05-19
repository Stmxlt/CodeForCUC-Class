#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int cmp(const void *a,const void *b){
    if(*(double*)a>=*(double*)b){
    	return 1;
	}
	else{
		return -1;
	}
}
int main(){
	double num[]={32.1,456.87,332.67,442.0,98.12,451.79,340.12,54.55,99.87,72.5};
	int nums=10;
    qsort(num,nums,sizeof(double),cmp);
	for(nums=0;nums<10;nums++){
        cout<<num[nums]<<" ";
    }
	return 0;
}
