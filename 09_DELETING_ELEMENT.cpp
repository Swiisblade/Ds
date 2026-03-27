#include <iostream>
using namespace std;

void DELETE(int LA[],int& N,int K){
	int	ITEM = LA[K];
	for(int J = K ; J < N - 1 ; J++){
		LA[J] = LA[J + 1];		
	}
	N = N - 1;
}
int main(){
	int LA[10] = {74,85,65,45,25,42,62,35,41,36};
	int N = 10;
	int K = 4;
	cout<<"Before Deleting an Element :"<<endl;
	for(int i = 0 ; i < 10 ; i++){
		cout<< LA[i] << "\t";
	}
	DELETE(LA,N,K);
	cout<<endl;
	cout<<"After Deleting an Element :"<<endl;
	for(int i = 0 ; i < 10 ; i++){
		cout<< LA[i] << "\t";
	}
	return 0;
}
