#include <iostream>
using namespace std ;

void INSERT(int DATA[],int N,int LOC,int ITEM){
	if(DATA[N - 1] != 0 ){
		cout<<"OVERFLOW"<<endl;
		return;
	}
	for(int J = N - 1 ; J >= LOC ; J--){
		DATA[J + 1 ] = DATA[J];
	}
		
	DATA[LOC] = ITEM ;
	N = N + 1 ;
		
	for(int i = 0 ; i < N - 1 ; i++){
		cout<<DATA[i]<<"\t";
	}
}
int main(){
	int DATA[] = {70,15,11,12,10,9,14,58,47,51,62,47,26,22,18,0};
	int N = sizeof(DATA)/sizeof(DATA[0]);
	cout<<"Enter element to Insert : ";
	int ITEM ;
	cin>>ITEM ;
	cout<<"Enter Location to Insert : ";
	int LOC ;
	cin>> LOC ;
	cout<<"After Inserting Element : "<<endl;
	INSERT(DATA,N,LOC,ITEM);
	
	return 0;
}
