#include <iostream>
using namespace std;

void LINEAR(int DATA[] , int& N, int ITEM){
	DATA[N + 1] = ITEM ;
	int LOC = 0;
	while(DATA[LOC] != ITEM){
		LOC = LOC + 1;
	}
	if(LOC == N + 1){
		LOC = 0 ;
	}
	cout<<"LOCATION of "<<ITEM<<"  : DATA["<<LOC<<"]"<<endl;
}
int main(){
	int DATA[10] = {45,65,51,48,95,75,86,42,63,61};
	int N = 10;
	int ITEM = 42;
	LINEAR(DATA,N,ITEM);
	
	return 0;
}
