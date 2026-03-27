#include <iostream>
using namespace std;
void MERGING(int A[], int P, int B[], int Q, int C[],int R) {
	int NA = 0 ;
	int NB = 0 ;
	int PTR = 0 ;
	
	while(NA < P && NB < Q){
		if (A[NA] < B[NB]){
			C[PTR] = A[NA];
			NA = NA + 1;
		}else{
			C[PTR] = B[NB];
			NB = NB + 1 ;
		}
		PTR = PTR + 1 ;
	}
	
	while(NA < P){
		C[PTR] = A[NA];
		NA = NA + 1 ;
		PTR = PTR + 1 ;
	}
	while(NB < Q){
		C[PTR] = B[NB];
		NB = NB + 1 ;
		PTR = PTR + 1 ;
	}
	cout<<"After Sorting Array : "<<endl;
	for (int i = 0; i < R; i++) {
		cout << C[i] << "\t";
	}
cout << endl;
}
int main() {
int A[] = {10,15,20,25,35,75};
int B[] = {40,45,50,55,60,65,70};
int P = sizeof(A) / sizeof(A[0]);
int Q = sizeof(B) / sizeof(B[0]);
int R = P + Q;
int C[R];
MERGING(A, P, B, Q, C, R);
return 0;
}
