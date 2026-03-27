#include <iostream>
using namespace std;

void BUBBLE(int DATA[] , int& N){
	for(int K = 0 ;  K < N - 1; K++){
		int PTR = 0;
		while(PTR < N-K){
			if(DATA[PTR] > DATA[PTR + 1]){
				int TEMP = DATA[PTR];
				DATA[PTR] = DATA[PTR + 1];
				DATA[PTR + 1] = TEMP;
			}
			PTR = PTR + 1 ;
		}
	}
}
int main(){
	
	int DATA[10] = {96,47,56,37,10,29,102,87,34,119};
	int N = 10;
	cout<<"Before sorted"<<endl;
	for(int K = 0 ; K < N ; K++){
		cout<<DATA[K]<<"\t";
	}
	BUBBLE(DATA,N);
	cout<<endl;
	cout<<"After sorted"<<endl;
	for(int K = 0 ; K < N ; K++){
		cout<<DATA[K]<<"\t";
	}
	
	
	
	return 0;
}
