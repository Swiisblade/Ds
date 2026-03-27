#include <iostream>
using namespace std;
void INSERTION(int DATA[],int N){
	DATA[0] = -1 ;
	for(int K = 1 ; K < N ; K++){
		int TEMP = DATA[K] ;
		int PTR = K - 1 ;
		while(TEMP < DATA[PTR]){
			DATA[PTR + 1] = DATA[PTR];
			PTR = PTR - 1 ; 
		}
		DATA[PTR + 1] = TEMP ;
	}
	cout<<"Sorted Array :"<<endl;
	for(int i = 0 ; i < N ; i++){
		cout<<DATA[i]<<"\t";
	}
}

int main(){
	int DATA[] = {0,44,21,33,14,16,47,95,90,66,84,59};
	int N = sizeof(DATA)/sizeof(DATA[0]);
	INSERTION(DATA,N);
	return 0;
}
