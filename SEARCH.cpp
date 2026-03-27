#include <iostream>
using namespace std ;

void SEARCH(int DATA[],int N ,int ITEM){
	int LOC = -1 ;
	int PTR = 0 ;
	while(PTR != N){
		if(DATA[PTR] == ITEM ){
			LOC = PTR ;
			break;
		}
		PTR = PTR + 1 ;
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
	cout<<"Enter element to search : ";
	int ITEM ;
	cin>>ITEM ;
	SEARCH(DATA,N,ITEM);
	return 0;
}
