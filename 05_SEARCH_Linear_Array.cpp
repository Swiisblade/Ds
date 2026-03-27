#include <iostream>
using namespace std;
void SEARCH(int DATA[] , int N ,int ITEM){
	int LOC = -1 ;
	for(int i = 0 ; i < N ; i++){
		if(DATA[i] == ITEM){
			LOC = i ;
		}
	}
	 if (LOC != -1) {
        cout << ITEM << " found at Location: " << LOC << endl;
    } else {
        cout << ITEM << " not in Array!!" << endl;
    }
	
}
int main(){
	int DATA[] = {70,15,11,12,10,9,14,58,47,51,62,47,26,22,18,73};
	int N = sizeof(DATA)/sizeof(DATA[0]);
	int ITEM = 12 ;
	SEARCH(DATA,N,ITEM);
	
	return 0;
}
