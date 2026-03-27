#include <iostream>
using namespace std;

void PUSH(int STACK[],int TOP, int MAXSTK, int ITEM){
	if(TOP == MAXSTK){
		cout<<"OVERFLOW !!"<<endl;
		return;
	}
	TOP = TOP + 1;
	STACK[TOP] = ITEM;
}
int main(){
	
	int STACK[7] = {10,20,55,44,66};
	int MAXSTK = 7;
	int TOP = 4;
	int ITEM = 90;
	cout<<"Before pushing the element :"<<endl;
	for(int i = 0 ; i < MAXSTK ; i++){
		cout<<STACK[i]<<"\t";
	}
	PUSH(STACK,TOP,MAXSTK,ITEM);
	cout<<endl;
	cout<<"After pushing the element :"<<endl;
	for(int i = 0 ; i < MAXSTK ; i++){
		cout<<STACK[i]<<"\t";
	}
	
	return 0;
}
