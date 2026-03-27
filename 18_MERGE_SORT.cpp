#include <iostream>
using namespace std;

void MERGING(int A[], int R, int B[], int S, int C[],int N) {
    int NA = 0;
	int NB = 0;
	int PTR = 0;

    while (NA < R && NB < S) {
        if (A[NA] < B[NB]) {
            C[PTR] = A[NA];
            NA = NA + 1;
        } else {
            C[PTR] = B[NB];
            NB = NB + 1; 
        }
        PTR = PTR + 1 ;
    }

    while (NA < R) {
        C[PTR] = A[NA];
        NA = NA + 1 ;
        PTR = PTR + 1 ;
    }

    while (NB < S) {
        C[PTR] = B[NB];
        NB = NB + 1 ;
        PTR = PTR + 1 ;
    }
    cout<<"After Sorting Array : "<<endl;
    for (int i = 0; i < N; i++) {
        cout << C[i] << " ";
    }
    cout << endl;
}


int main() {
    int A[] = {10,15,20,25,30,35};
    int B[] = {40,45,50,55,60,65,70};
    int R = sizeof(A) / sizeof(A[0]);
    int S = sizeof(B) / sizeof(B[0]);
    int N = R + S;
    int C[N];

    MERGING(A, R, B, S, C, N);

    return 0;
}

