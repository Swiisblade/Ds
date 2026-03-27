#include <iostream>
using namespace std;


void INSERT(int LA[],int& N, int K,int ITEM){
	int J = N - 1;
	while(J >= K ){
		LA[J + 1] = LA[J];
		J = J - 1;
	}
	LA[K] = ITEM;
	N = N + 1;
}

int main(){
	int LA[11] = {10,34,65,45,48,65,47,75,32,73};
	int N = 11;
	cout<<"Before Inserting an Element :"<<endl;
	for(int i = 0 ; i < 11 ; i++){
		cout<< LA[i] << "\t";
	}
	
	int ITEM = 100;
	int K = 4;
	INSERT(LA,N,K,ITEM);
	cout<<"After Inserting an Element :"<<endl;
	for(int i = 0 ; i < 11 ; i++){
		cout<< LA[i] << "\t";
	}
	
	return 0;
}
