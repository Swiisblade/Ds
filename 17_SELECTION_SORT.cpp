#include <iostream>
using namespace std;
void FINDMIN(int DATA[],int N,int &LOC,int K){
	int MIN = DATA[K];
	LOC = K ;
	for(int J = K + 1 ; J < N ; J++){ 
		if(MIN > DATA[J]){
			MIN = DATA[J];
			LOC = J ;
		}
	}
}
void SELECTION(int DATA[],int N){
	int LOC;
	for(int K = 0 ; K < N ; K++){
		FINDMIN(DATA,N,LOC,K);
		int TEMP = DATA[K] ;
		DATA[K] = DATA[LOC];
		DATA[LOC] = TEMP;
	}
	cout<<"Sorted Array :"<<endl;
	for(int i = 0 ; i < N ; i++){
		cout<<DATA[i]<<"\t";
	}
}
int main(){
	int DATA[] = {44,21,33,14,16,47,95,90,66,84,59};
	int N = sizeof(DATA)/sizeof(DATA[0]);
	SELECTION(DATA,N);
	return 0;
}
