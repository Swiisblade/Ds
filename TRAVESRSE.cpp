#include <iostream>
using namespace std ;
void PROCESS(int element){
	
	cout<<element<<"\t";
}
void TRAVERSE(int DATA[],int N){
	int PTR = 0 ;
	while(PTR != N){
		PROCESS(DATA[PTR]);
		PTR = PTR + 1 ;
	}
}
int main(){
	int DATA[] = {70,15,11,12,10,9,14,58,47,51,62,47,26,22,18,17};
	int N = sizeof(DATA)/sizeof(DATA[0]);
	TRAVERSE(DATA,N);
	return 0;
}
