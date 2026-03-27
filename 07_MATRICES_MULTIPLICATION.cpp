#include <iostream>
using namespace std;
void MATMUL(int A[][3],int B[][2],int M,int N,int P){
	int C[M][P];
	
	for(int I = 0 ; I < M ; I++){
		for(int J = 0 ; J < P ; J++){
			C[I][J] = 0 ;
		}
	}
	for(int I = 0 ; I < M ; I++){
		for(int J = 0 ; J < P ; J++){
			for(int K = 0 ; K < N ; K++){
				C[I][J] = C[I][J] + A[I][K]*B[K][J];
			}
		}
	}
	cout<<"MATRICES multiplication :"<<endl;
	for(int I = 0 ; I < M ; I++){
		for(int J = 0 ; J < P ; J++){
			cout<<"C["<<I<<"]["<<J<<"] = "<<C[I][J]<<"\t";
		}
		cout<<endl;
	}
}

int main(){
	
	int A[2][3] = {{20,40,60},{30,50,70}};
	int B[3][2] = {{10,30},{20,40},{25,35}} ;
	int M = 2 ;
	int N = 3 ;
	int P = 2 ;
	MATMUL(A,B,M,N,P);
	
	return 0;
}
