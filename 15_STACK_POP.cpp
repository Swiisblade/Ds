#include <iostream>
using namespace std;

void POP(int STACK[],int TOP,int ITEM){
	if(TOP == 0){
		cout<<"UNDERFLOW !!"<<endl;
		return;
	}
	ITEM = STACK[TOP];
	TOP = TOP - 1;
}
int main(){
	int STACK[7] = {10,20,55,44,66};
	int TOP = 4;
	int ITEM = 66;
	cout<<"Before Deleting the element :"<<endl;
	for(int i = 0 ; i <= TOP ; i++){
		cout<<STACK[i]<<"\t";
	}
	POP(STACK,TOP,ITEM);
	cout<<endl;
	cout<<"After Deleting the element :"<<endl;
	for(int i = 0 ; i < TOP; i++){
		cout<<STACK[i]<<"\t";
	}
	return 0;
}
