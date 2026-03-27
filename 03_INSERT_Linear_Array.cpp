#include <iostream>
using namespace std;
void INSERT(int DATA[],int N ,int K, int ITEM){
	int J = N - 1 ;
	if(DATA[J] != 0){
		cout<<"OVERFLOW"<<endl;
		return;
	}
	
	while (K <= J){
		DATA[J + 1] = DATA[J];
		J = J - 1;
	}
	DATA[K] = ITEM;
	//N = N + 1 ;
	cout<<"After Inserting Element :"<<endl;
	for(int i = 0 ; i < N ; i++){
		cout<<DATA[i]<<"\t";
	}
}
int main(){
	int DATA[] = {70,15,11,12,10,9,14,58,47,51,62,47,26,22,18,0};
	int N = sizeof(DATA)/sizeof(DATA[0]);
	int K = 5 ;
	int ITEM = 45;
	INSERT(DATA,N,K,ITEM);
	
	return 0;
}
