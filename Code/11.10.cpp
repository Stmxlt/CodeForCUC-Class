#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int N;
	printf("Please type the total number of month:");
	scanf("%d",&N);
	int a[N];
	int i;
	for(i=0;i<N;i++){
		if(i==0||i==1){
			a[i]=1;
		}
		else{
			a[i]=a[i-1]+a[i-2];
		}
	}
	int num;
	printf("Please type the number of target month:");
	scanf("%d",&num);
	printf("The number of pairs of bunny is:%d",a[num-1]);
	return 0;
}



#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int score[10];
	int i,maxinum,location;
	printf("Please type scores of 10 people:");
	for(i=0;i<=9;i++){
		scanf("%d",&score[i]);
	}
	maxinum=score[0];
	location=1;
	for(i=1;i<=9;i++){
		if(maxinum<=score[i]){
			maxinum=score[i];
			location=i+1;
		}
		else{
			continue;
		}
	}
	printf("The highest score is:%d\n.",maxinum);
	printf("The number ");
	for(i=0;i<=9;i++){
		if(maxinum==score[i]){
			location=i+1;
			printf("%d,",location);
		}
		else{
			continue;
		}
	}
	printf("person has the highest score.");
	return 0;
}
