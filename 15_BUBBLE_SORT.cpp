#include <iostream>
using namespace std;
void BUBBLE(int DATA[],int N){
	for(int I = 0 ; I < N ; I++){
		int PTR = 0 ;
		while(PTR < N){
			if(DATA[PTR] > DATA[PTR + 1]){
				int TEMP = DATA[PTR];
				DATA[PTR] = DATA[PTR + 1];
				DATA[PTR + 1] = TEMP;
			}
			PTR = PTR + 1 ;
		}
	}
	for(int i = 0 ; i < N ; i++){
		cout<<DATA[i]<<"\t";
	}
}
int main(){
	int DATA[] = {44,21,33,14,16,47,95,90,66,84,59};
	int N = sizeof(DATA)/sizeof(DATA[0]);
	BUBBLE(DATA,N);
	
	return 0;
}
