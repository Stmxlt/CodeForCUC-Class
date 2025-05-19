/*//中心对称矩阵 
#include<iostream>
#include<cstdio>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	int Array1[m][n],Array2[m][n];
	srand((unsigned)time(NULL));
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			Array1[i][j]=rand()%101;
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			Array2[i][j]=Array1[m-1-i][n-1-j];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",Array2[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//计算sin(x)从1~pi/2定积分 
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int Num_Sub_Division;
	double Sin_Calculs=0.0,pi=3.14159265;
	scanf("%d",&Num_Sub_Division);
	for(double i=0.0;i<pi/2;i+=pi/2/Num_Sub_Division){
		Sin_Calculs+=pi/2/Num_Sub_Division*sin(i);
	}
	printf("%lf",Sin_Calculs);
	return 0;
}

//计算圆锥体积定积分 
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int Num_Sub_Division,R=10,H=20;
	double V_Calculs=0.0,pi=3.14159265;
	scanf("%d",&Num_Sub_Division);
	for(double i=0.0;i<20;i+=20.0/Num_Sub_Division){
		V_Calculs+=pi*(i/2)*(i/2)*20/Num_Sub_Division;
	}
	printf("%lf",V_Calculs);
	return 0;
}*/
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	float k[8][7];
	printf("%d",sizeof(k));
	return 0;}
