#include <iostream>
using namespace std;
void MATMUL(int A[][3], int B[][2],int M, int N, int P ){
	int C[M][P];
	
	for (int I = 0; I < M; I++) {
        for (int J = 0; J < P; J++) {
            C[I][J] = 0;
        }
    }
	
	for(int I = 0 ; I < M ; I++){
		for(int J = 0 ; J < P ; J++){
			for(int K = 0 ; K < N ; K++){
				C[I][J] = C[I][J] + A[I][K]*B[K][J];
			}
		}
	}
	for(int i = 0 ; i < M ; i++){
		for(int j = 0 ; j < P ; j++){
			cout<<C[j][j]<<"\t";
		}
		cout<<endl;
	}
}
int main(){
	
	int A[2][3] = {{10,20,30},{40,50,60}};
	int B[3][2] = {{15,25},{45,55},{60,70}};
	int M = 2;
	int N = 3;
	int P = 2;
	MATMUL(A,B,M,N,P);
	
	return 0;
}
