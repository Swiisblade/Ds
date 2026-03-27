#include <iostream>
using namespace std ;
void BUBLE(int DATA[],int N){
	for(int I = 0 ; I < N - 1  ; I++){
		int PTR = 0 ;
		while(PTR < N - 1  ){
			if(DATA[PTR]  > DATA[PTR + 1]){
				int TEMP = DATA[PTR];
				DATA[PTR] = DATA[PTR + 1] ;
				DATA[PTR + 1] = TEMP ;
			}
			PTR = PTR + 1 ;
		}
	}
	for(int i = 0 ; i < N ; i++){
		cout<<DATA[i]<<"\t";
	}
}
void BINARY(int DATA[],int N ,int LB ,int UB ,int ITEM){
	int BEG = LB ;
	int END = UB ;
	int MID = (BEG + END)/2 ;
	int LOC = -1 ;
	while(BEG <= END){
		MID = (BEG + END)/2 ;
		if(DATA[MID] == ITEM){
			LOC = MID ;
			break;
		}else if(ITEM < DATA[MID]){
			END = MID - 1 ;
		}else{
			BEG = MID + 1 ;
		}
	}
	if(LOC == -1 ){
		cout<<"Search is Unsucessful !!"<<endl;
	}else{
		cout<<"ITEM : "<<ITEM <<" | LOCATION : "<<LOC<<endl;
	}
}
int main(){
	int DATA[] = {70,15,11,12,10,9,14,58,47,51,62,47,26,22,18,17};
	int N = sizeof(DATA)/sizeof(DATA[0]);
	int LB = 0 ;
	int UB = N - 1 ;
	
	cout<<"Sorted Array : "<<endl;
	BUBLE(DATA,N);
	cout<<endl;
	cout<<"Enter element to search : ";
	int ITEM ;
	cin>>ITEM ;
	BINARY(DATA,N,LB,UB,ITEM);
	return 0;
}
