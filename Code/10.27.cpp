#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i=9,j=9;
	for(i;i>=1;i--){
		for(j=9;j>=i;j--){
			printf("%dx%d=%d\t",j,i,i*j);
		}
		printf("\n");
	}
	return 0;
}




#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int nums[10];
	int target;
	for(int i=0;i<=10;i++){
		scanf("%d",&nums[i]);
	}
	scanf("%d",&target);
	for(int a=0;a>=0;a++){
		for(int b=a+1;b>a;b++){
			if(nums[a]+nums[b]==target){
				printf("%d",nums[a,b]);
			}
			else{
				continue;
			}
		}
	}
	return 0;
}
