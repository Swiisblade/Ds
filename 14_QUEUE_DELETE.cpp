#include <iostream>
using namespace std;
void DELETE(int QUEUE[],int N ,int &FRONT, int &REAR){
	if(FRONT == -1){
		cout<<"UNDERFLOW"<<endl;
		return;
	}
	int ITEM = QUEUE[FRONT];
	cout << "Deleted Item: " << ITEM << endl;
	QUEUE[FRONT] = 0 ;
	if(FRONT == REAR){
		FRONT = -1 ;
		REAR = -1 ;
	}else if(FRONT = -1){
		FRONT = 0 ;
	}else{
		FRONT = FRONT + 1 ;
	}
	while(FRONT != N - 1 ){ 
	
		QUEUE[FRONT] = QUEUE[FRONT + 1];
		FRONT = FRONT + 1 ;
	}
}

int main(){
	
	int QUEUE[] = {12,15,17,18,19,20,21,0};
	int FRONT = 0;
	int REAR = 6 ;
	int N = sizeof(QUEUE)/sizeof(QUEUE[0]);
	DELETE(QUEUE,N,FRONT,REAR);
	for(int i = 0 ; i < N ; i++){
		cout<<QUEUE[i]<<"\t";
	}
	
	return 0;
}
