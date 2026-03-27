#include <iostream>
using namespace std ;

DELETE(int DATA[], int N,int LOC){
	if(DATA[0] == 0){
		cout<<"UNDERFLOW"<<endl;
	}
	DATA[LOC] = 0 ;
	for(int I = LOC ; I < N ; I++){
		DATA[I] = DATA[I + 1];
		DATA[I + 1] = 0;
	}
	
	for(int i = 0 ; i < N ; i++){
		cout<<DATA[i]<<"\t";
	}
}
int main(){
	int DATA[] = {70,15,11,12,10,9,14,58,47,51,62,47,26,22,18,20};
	int N = sizeof(DATA)/sizeof(DATA[0]);
//	cout<<"Enter element to Insert : ";
//	int ITEM ;
//	cin>>ITEM ;
	cout<<"Enter Location to delete : ";
	int LOC ;
	cin>> LOC ;
	cout<<"After Delete Element : "<<endl;
	DELETE(DATA,N,LOC);
	
	return 0;
}
