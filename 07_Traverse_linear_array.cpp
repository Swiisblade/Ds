#include <iostream>
using namespace std;

void PROCESS(int element){
	cout<<element<<"\t";
}

int main(){
	
	int LA[10] = {75,65,48,98,82,15,65,47,66,55};
	int LB = 0; //lower bound
	int UB = 9; //upper bound
	int K = LB;
	while(K <= UB){
		PROCESS(LA[K]);
		K = K + 1;
	}
	
	return 0;
}
