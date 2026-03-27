#include <iostream>
using namespace std;

void FINDMAX(int DATA[],int N){
	int LOC = 0;
	int MAXVALUE = DATA[0];
	
	for(int K = 1 ; K < N ; K++){

		if(MAXVALUE < DATA[K]){
			LOC = K ;
			MAXVALUE = DATA[K];
		}
	}
	cout<<"Largest Element : "<<MAXVALUE<<"  LOC : "<<LOC<<endl;
}
int main(){
	int DATA[] = {70,15,11,12,10,9,14,58,47,51,62,47,26,22,18,17};
	int N = sizeof(DATA)/sizeof(DATA[0]);
	FINDMAX(DATA,N);
	return 0;
}
