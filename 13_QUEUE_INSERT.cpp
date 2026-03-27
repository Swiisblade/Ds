#include <iostream>
using namespace std;
void INSERT(int QUEUE[],int N ,int FRONT, int REAR,int ITEM){
	if(REAR == N - 1 && FRONT == 1 || FRONT == REAR + 1 ){
		cout<<"OVERFLOW"<<endl;
		return;
	}
	if(FRONT == -1){
		FRONT = 1 ;
		REAR = 1 ;
	}else if(REAR == N - 1){
		REAR = 1 ;
	}else{
		REAR = REAR + 1 ;
	}
	QUEUE[REAR] = ITEM ;
}

int main(){
	
	int QUEUE[] = {0,12,15,17,18,19,20,21,0};
	int FRONT = 1 ;
	int REAR = 7 ;
	int N = sizeof(QUEUE)/sizeof(QUEUE[0]);
	int ITEM = 25 ;
	INSERT(QUEUE,N,FRONT,REAR,ITEM);
	for(int i = 0 ; i < N ; i++){
		cout<<QUEUE[i]<<"\t";
	}
	
	return 0;
}
