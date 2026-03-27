#include<iostream>
using namespace std;
void INSQUE(int DATA[],int N ,int FRONT,int REAR,int ITEM){
	int LAST = N- 1 ;
	if (LAST == REAR){
		cout<<"OVERFLOW"<<endl;
		return;
	}
	REAR = REAR + 1 ;
	DATA[REAR] = ITEM ;
	
	for(int i = 0 ; i < N ; i++){
		cout<<DATA[i]<<"\t";
	}
}
int main(){
	int DATA[] = {10,20,30,40,50,0,0};
	int N = sizeof(DATA)/sizeof(DATA[0]);
	int FRONT = 0 ;
	int REAR = 4 ;
	int ITEM = 60 ;
	INSQUE(DATA,N,FRONT,REAR,ITEM);
	
	return 0;
}
