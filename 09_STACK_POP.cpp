#include <iostream>
using namespace std;

void POP(int STACK[],int TOP,int ITEM){
	if(TOP == 0){
		cout<<"UNDERFLOW !";
		return;
	}
	STACK[TOP] = 0;
	//TOP = TOP - 1 ;
}
int main(){
	int STACK[7] = {10,20,30,40,50};
	int MAXSTK = sizeof(STACK)/sizeof(STACK[0]);
	int TOP = 4 ;
	int ITEM = 0;
	POP(STACK,TOP,ITEM);
	cout<<"After POP the element"<<endl;
	for(int i = 0 ; i < MAXSTK ; i++){
		cout<<STACK[i]<<"\t";
	}
	
	return 0;
}
