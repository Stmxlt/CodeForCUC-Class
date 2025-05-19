#include<iostream>
using namespace std;
int main(){
	int r1,r2,c1,c2,rows,cols,element;
	cout<<"Now you're requested to type the number of rows and columns of the two matrices."<<endl;
	cout<<"Please type the number of rows of the first matrices:";
	cin>>r1;
	cout<<"Please type the number of rows of the second matrices:";
	cin>>r2;
	cout<<"Please type the number of columns of the first matrices:";
	cin>>c1;
	cout<<"Please type the number of columns of the second matrices:";
	cin>>c2;
	if(c1!=r2){
		cout<<"The number of columns of the first matrices isn't equals to the number of rows of the second matrices. The matrix multiplication can't be done successfully!!"<<endl;
		exit(404);
	}
	int matrixA[r1][c1],matrixB[r2][c2],result_matrix[r1][c2];
	cout<<"Now begin to build two matrices needed to be mutipled."<<endl;
	cout<<"Please type every elements for the first matrix row by row:";
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cin>>matrixA[i][j];
			cout<<" ";
		}
	}
	cout<<"Please type every elements for the second matrix row by row:";
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			cin>>matrixB[i][j];
			cout<<" ";
		}
	}
	cout<<"Now show the first matrix:"<<endl;
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cout<<matrixA[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Now show the second matrix:"<<endl;
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cout<<matrixB[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			element=0;
			for(rows=cols=0;rows<r2,cols<c1;rows++,cols++){
				element+=matrixA[i][cols]*matrixB[rows][j];
			}
			result_matrix[i][j]=element;
		}
	}
	cout<<"Now show the result matrix:"<<endl;
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			cout<<result_matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"The matrix multiplication has been done successfully!"<<endl;
	return 0;
}
