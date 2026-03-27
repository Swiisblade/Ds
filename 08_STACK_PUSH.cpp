#include <iostream>
using namespace std;

void PUSH(int STACK[],int MAXSTK,int TOP,int ITEM){
	if(TOP == MAXSTK){
		cout<<"OVERFLOW !";
		return;
	}
	TOP = TOP + 1 ;
	STACK[TOP] = ITEM ;
}
int main(){
	int STACK[7] = {10,20,30,40,50};
	int MAXSTK = sizeof(STACK)/sizeof(STACK[0]);
	int TOP = 4 ;
	int ITEM = 55 ;
	PUSH(STACK,MAXSTK,TOP,ITEM);
	cout<<"After Pushing the element"<<endl;
	for(int i = 0 ; i < MAXSTK ; i++){
		cout<<STACK[i]<<"\t";
	}
	
	return 0;
}
