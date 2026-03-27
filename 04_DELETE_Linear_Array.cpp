#include <iostream>
using namespace std;
void DELETE(int DATA[],int &N ,int K){
	int ITEM = DATA[K];
	for(int J = K ; J < N ; J++){
		DATA[J] = DATA[J + 1];
	}
	N = N - 1;
	cout<<"After Deleting LOC : "<< K <<endl;
	for(int i = 0 ; i < N ; i++){
		cout<<DATA[i]<<"\t";
	}
}
int main(){
	int DATA[] = {70,15,11,12,10,9,14,58,47,51,62,47,26,22,18,73};
	int N = sizeof(DATA)/sizeof(DATA[0]);
	int K = 6 ;
	DELETE(DATA,N,K);
	
	return 0;
}
