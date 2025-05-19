//Debug鸡兔同笼
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int x,y;
    for(x=0;x<=30;x++){
    	y=30-x;
    	if(2*x+4*y==100){
		    printf("鸡有%d只，兔子有%d只\n",x,y);
		}
		else{
			continue;
		}
	}
	return 0;
}

//Debug数列求和
#include<iostream>
#include<cstdio>
using namespace std;
double fun(int n)
{   int a,b,c,k;  
    double s;
    s=0.0;a=2;b=1;
    for(k=1;k<=n;k++){
        s=s+(double)a/b;
        c=a;a=a+b;b=c;
    }
    return s;
}
main( )
{  int n=5;
   printf("The value of  function is: %lf\n",fun(n));}

//计算乘积矩阵
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int m,n,k;
	int i1,j1,i2,j2,i3,j3;
	printf("Please type the three const m,n,k:");
	scanf("%d,%d,%d",&m,&n,&k);
	int matrixA[m][n],matrixB[n][k],resultmatrix[m][k];
	printf("Now,please type the two matrixes' elements\n");
	printf("First,please type the first matrix's elements:");
	for(i1=1;i1<=m;i1++){
		for(j1=1;j1<=n;j1++){
			scanf("%d",&matrixA[i1][j1]);
		}
	}
	printf("Now,please type the second matrix's elements:");
	for(i2=1;i2<=n;i2++){
		for(j2=1;j2<=k;j2++){
			scanf("%d",&matrixB[i2][j2]);
		}
	}
	for(i1=1,i3=1;i1<=m,i3<=m;i1++,i3++){
		for(j2=1,j3=1;j2<=k,j3<=k;j2++,j3++){
			int sum=0;
			for(j1=1,i2=1;j1<=n,i2<=n;j1++,i2++){
				sum+=matrixA[i1][j1]*matrixB[i2][j2];
			}
			resultmatrix[i3][j3]=sum;
		}
	}
	for(i3=1;i3<=m;i3++){
		for(j3=1;j3<=k;j3++){
			printf("%d ",resultmatrix[i3][j3]);
		}
		printf("\n");
	}
	return 0;
}
