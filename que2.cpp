#include<iostream>
using namespace std;
void DELQUE(int DATA[],int N ,int FRONT,int REAR){
	if (FRONT == -1){
		cout<<"UNDERFLOW"<<endl;
		return;
	}
	int ITEM = DATA[FRONT];
	cout<<"Deleted ITEM : "<<ITEM<<endl;
	DATA[FRONT] = 0 ;	
	
	for(int i = FRONT ; i <= REAR ; i++){
		DATA[i] = DATA[i + 1] ;
	}
	for(int i = 0 ; i < N ; i++){
		cout<<DATA[i]<<"\t";
	}
	cout<<endl;
	FRONT = FRONT + 1 ;
	REAR = REAR - 1 ;
}
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
	DELQUE(DATA,N,FRONT,REAR);
	DELQUE(DATA,N,FRONT,REAR);
	REAR = 2 ;
	INSQUE(DATA,N,FRONT,REAR,ITEM);
	return 0;
}
