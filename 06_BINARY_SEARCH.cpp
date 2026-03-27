#include <iostream>
using namespace std;
void BINARY(int DATA[],int N , int LB , int UB ,int ITEM){
	int LOC = -1 ;
	int BEG = LB ;
	int END = UB ;
	int MID ;
	
	while(BEG <= END){
		MID = (BEG+END)/2 ;
		if(DATA[MID] == ITEM){
			LOC = MID ;
			break ;
		}else if(ITEM < DATA[MID]){
			END = MID - 1 ;
		}else{
			BEG = MID + 1 ;
		}
	}
	
	if (LOC != -1) {
        cout << ITEM << " found at Location: " << LOC << endl;
    } else {
        cout << ITEM << " not in Array!!" << endl;
    }
}

int main(){
	int DATA[] = {10,12,14,16,18,22,24,36,46,56,57,58,60,65,70,73,79,99};
	int N = sizeof(DATA)/sizeof(DATA[0]);
	int ITEM = 18 ;
	int LB = 0 ;
	int UB = N - 1 ; 
	BINARY(DATA,N,LB,UB,ITEM);
	
	return 0;
}
