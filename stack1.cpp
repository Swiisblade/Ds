#include<iostream>
using namespace std;
void INSSTK(int DATA[],int MAXSTK,int TOP ,int ITEM){
	if(TOP == MAXSTK){
		cout<<"OVERFLOW"<<endl;
		return;
	}
	TOP = TOP + 1 ;
	DATA[TOP] = ITEM ;
	
	for(int i = 0 ; i <= MAXSTK ; i++){
		cout<<DATA[i]<<"\t";
	}
}
int main(){
	int DATA[] = {10,20,30,40,50,0,0};
	int N = sizeof(DATA)/sizeof(DATA[0]);
	int MAXSTK = N - 1 ;
	int ITEM = 70 ;
	int TOP = 4 ;
	INSSTK(DATA,MAXSTK,TOP,ITEM);
	
	return 0;
}
