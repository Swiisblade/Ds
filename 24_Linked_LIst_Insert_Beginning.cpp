#include <iostream>
using namespace std;

void INSFIRST(int INFO[] , int LINK[] , int &START ,int &AVAIL, int &ITEM){
	if(AVAIL == 0 ){
		cout<<"OVERFLOW"<<endl;
		return;
	}
	int NEW = AVAIL ;
	AVAIL = LINK[AVAIL];
	
	INFO[NEW] = ITEM ;
	
	LINK[NEW] = START ;
	
	START = NEW ;
}
int main (){
	int INFO[] = { 0 , 150 , 200 , 0 , 300 , 0 , 0 , 100 , 250 , 0};
	int LINK[] = { 0 , 2 , 8 , 9 , 0 , 0 , 5 , 1 , 4 , 6 } ;
	int START = 7 ;
	int AVAIL = 3 ;
	int ITEM  = 500 ;
	
	INSFIRST(INFO,LINK,START,AVAIL,ITEM);
	
	cout<<"After Inserting ITEM :: "<<endl;
	
	int N = sizeof(INFO)/sizeof(INFO[0]);
	
	for(int i = 0 ; i < N ; i++ ){
		cout<<INFO[i]<<" -> ";
	}
	cout<<"NULL"<<endl;
	cout<<endl;
	cout<<"LINKs"<<endl;;
	for(int i = 0 ; i < N ; i++ ){
		cout<<LINK[i]<<" -> ";
	}
	return 0;
}
