#include<iostream>
using namespace std;
void MATMUL(int A[][3],int B[][2],int M,int N ,int P){
	int C[M][P] ;
	for(int i = 0 ; i < M ; i++){
		for(int j = 0 ; j < P ; j++){
			C[i][j] = 0 ;
		}
	}
	for(int i = 0 ; i < M ; i++){
		for(int j = 0 ; j < P ; j++){
			for(int k = 0 ; k < N ; k++){
				C[i][j] = C[i][j] + A[i][k]*B[k][j];
			}
		}
	}
	for(int i = 0 ; i < M ; i++){
		for(int j = 0 ; j < P ; j++){
			cout<<C[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int main(){
	
	int A[2][3] = {{10,15,20},{25,30,35}};
	int B[3][2] = {{40,45},{50,55},{60,65}};
	int M = 2 ;
	int N = 3 ;
	int P = 2 ;
	MATMUL(A,B,M,N,P);
	return 0;
}
