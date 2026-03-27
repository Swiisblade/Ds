#include <iostream>
using namespace std;
void FORWARD(int INFO[],int FORW[],int FIRST){
	int PTR = FIRST;
	while(PTR != 0){
		cout<<INFO[PTR]<<" -> ";
		PTR = FORW[PTR];
	}
	cout<<"NULL"<<endl;
	
}
void BACKWARD(int INFO[],int BACK[],int LAST){
	int PTR = LAST;
	while(PTR != 0){
		cout<<INFO[PTR]<<" -> ";
		PTR = BACK[PTR];
	}
	cout<<"NULL"<<endl;
	
	
}

int main(){
	
	int INFO[] = { 0 , 70 , 20 , 30 , 10 , 90 , 50 , 40 , 80 , 60 };
	int FORW[] = { 0 , 8 , 3 , 7 , 2 , 0 , 9 , 6 , 5 , 1 };
	int BACK[] = { 0 , 9 , 4 , 2 , 0 , 8 , 7 , 3 , 1 , 6 };
	int AVAIL = 0;
	int FIRST = 4 ;
	int LAST = 5 ;
	FORWARD(INFO,FORW,FIRST);
	BACKWARD(INFO,BACK,LAST);
	return 0;
}
