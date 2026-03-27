#include<iostream>
using namespace std;
void DELSTK(int DATA[],int N ,int TOP){
	if(DATA[TOP] == 0){
		cout<<"UNDERFLOW"<<endl;
		return;
	}
	DATA[TOP] = 0 ;
	TOP = TOP - 1 ;
	
	for(int i = 0 ; i < N ; i++){
		cout<<DATA[i]<<"\t";
	}
}
int main(){
	int DATA[] = {10,20,30,40,50,0,0};
	int N = sizeof(DATA)/sizeof(DATA[0]);
	int TOP = 4 ;
	DELSTK(DATA,N,TOP);
	
	return 0;
}
