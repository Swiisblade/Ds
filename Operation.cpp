#include <iostream>
using namespace std;

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
	cout<<endl;
	cout<<endl;
}

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
	cout<<endl;
	cout<<endl;
}
int main(){
	int DATA[] = {70,15,11,12,10,9,14,58,47,51,62,47,26,22,18,20,0,0,0};
	int N = sizeof(DATA)/sizeof(DATA[0]);
	while(true){
		cout<<"Enter wich Operation perform :(INSERT/DELETE/EXIT) "<<endl;
		cout<<"Operation : ";
		string A ;
		cin>>A;
		if(A =="INSERT" ){
			cout<<"Enter element to Insert : ";
			int ITEM ;
			cin>>ITEM ;
			cout<<"Enter Location to Insert : ";
			int LOC ;
			cin>> LOC ;
			INSERT(DATA,N,LOC,ITEM);
		}else if(A == "DELETE"){
			cout<<"Enter Location to delete : ";
			int LOC ;
			cin>> LOC ;
			cout<<"After Delete Element : "<<endl;
			DELETE(DATA,N,LOC);
		}else if(A=="EXIT"){
			cout<<"Exited Sucessfully ...."<<endl;
			break;
		}else{
		cout<<"Write right spelling !!"<<endl;
		}	
	}
	
	return 0;
}
