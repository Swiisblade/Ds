#include <iostream>
using namespace std;

void BINARY(int DATA[],int N ,int LB , int UB ,int ITEM ){
	int BEG = LB ; 
	int END = UB ;
	int LOC = 0;
	int MID = ((BEG+END)/2) ;
	while(BEG < END && DATA[MID] != ITEM){
		if(ITEM < DATA[MID]){
			END = MID - 1 ;
		}else{
			BEG = MID + 1;
		}
		MID = ((BEG + END)/2);
	}
	if(DATA[MID] == ITEM){
		LOC = MID;
	}else{
		LOC = 0;
	}
	cout<<"LOC of "<<ITEM<<" : DATA["<<LOC<<"]"<<endl;
}
int main(){
	
	int DATA[10] = {12, 23 , 34 , 45 , 56 , 78 , 89 , 98 , 107 , 98 };
	int N = 10 ;
	int LB = 0 ;
	int UB = 9 ;
	int ITEM = 203;
	
	BINARY(DATA,N,LB,UB,ITEM);
	
	return 0;
}
