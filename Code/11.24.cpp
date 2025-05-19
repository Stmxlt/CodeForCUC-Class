//生成单位矩阵
/*#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	printf("Please type the order of the target identity matrix:");
	scanf("%d",&n);
	int a[n][n],i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j){
				a[i][j]=1;
			}
			else{
				a[i][j]=0;
			}
	    }
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d ",a[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}*/

//矩阵最大元素 
/*#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int m,n;
	printf("Please type the order of the target identity matrix:");
	scanf("%d %d",&m,&n);
	int a[m][n],i,j,row=1,column=1;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(a[i][j]>a[row][column]){
				a[row][column]=a[i][j];
				row=i;
				column=j;
			}
			else{
				continue;
			}
	    }
	}
	printf("The maximun element in the matrix is%d.\nIt's row number is%d\n.It's column number is%d.",a[row][column],row,column);
	return 0;
}*/

//矩阵最小元素 
/*#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int m,n,k;
	printf("Please type the order of the target identity matrix:");
	scanf("%d %d %d",&m,&n,&k);
	int a[m][n][k],i,j,g,row=1,column=1,high=1;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			for(g=1;g<=k;g++){
			    scanf("%d",&a[i][j][g]);
		    }
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			for(g=1;g<=k;g++){
			    if(a[i][j][g]<a[row][column][high]){
				    a[row][column][high]=a[i][j][g];
				    row=i;
				    column=j;
				    high=g;
				}
				else{
				    continue;
			    }
		    }
		}
	}
	printf("The minimun element in the matrix is%d.\nIt's row number is%d\n.It's column number is%d.\nIt's high number is%d.",a[row][column][high],row,column,high);
	return 0;
}*/

//计算矩阵2次幂和3次幂 
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	int i1,j1,i2,j2,i3,j3;
	printf("Please type order of the matrix:");
	scanf("%d",&n);
	int matrixA[n][n],matrixB[n][n],matrix2[n][n],matrix3[n][n];
	printf("Now,please type the matrix's elements\n");
	for(i1=1;i1<=n;i1++){
		for(j1=1;j1<=n;j1++){
			scanf("%d",&matrixA[i1][j1]);
		}
	}
	for(i1=1;i1<=n;i1++){
		for(j1=1;j1<=n;j1++){
			matrixB[i1][j1]=matrixA[i1][j1];
		}
	}
	for(i1=1,i3=1;i1<=n,i3<=n;i1++,i3++){
		for(j2=1,j3=1;j2<=n,j3<=n;j2++,j3++){
			int sum=0;
			for(j1=1,i2=1;j1<=n,i2<=n;j1++,i2++){
				sum+=matrixA[i1][j1]*matrixB[i2][j2];
			}
			matrix2[i3][j3]=sum;
		}
	}
	for(i3=1;i3<=n;i3++){
		for(j3=1;j3<=n;j3++){
			printf("%d\t",matrix2[i3][j3]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(i1=1,i3=1;i1<=n,i3<=n;i1++,i3++){
		for(j2=1,j3=1;j2<=n,j3<=n;j2++,j3++){
			int sum=0;
			for(j1=1,i2=1;j1<=n,i2<=n;j1++,i2++){
				sum+=matrixA[i1][j1]*matrix2[i2][j2];
			}
			matrix3[i3][j3]=sum;
		}
	}
	for(i3=1;i3<=n;i3++){
		for(j3=1;j3<=n;j3++){
			printf("%d\t",matrix3[i3][j3]);
		}
		printf("\n");
	}
	return 0;
}
