#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	printf("Please type the number of numbers:");
	scanf("%d",&n);
	int array1[n],array2[n];
	int i;
	printf("Please type all the numbers:");
	for(i=1;i<=n;i++){
		scanf("%d",&array1[i]);
	}
	for(i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(array1[j]<=array1[j+1]){
			    array2[j]=array1[j];
			}
		    else{
			    array2[j]=array1[j+1];
			    array2[j+1]=array1[j];
			    array1[j]=array2[j];
			    array1[j+1]=array2[j+1];
			}
		}	
	}
	printf("The result array is:");
	for(i=1;i<=n;i++){
		printf("%d ",array2[i]);
	}
	printf(".");
	return 0;
}
