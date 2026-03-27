//sorted List in desending order
#include <iostream>
using namespace std;
void SEARCHSL(int INFO[] , int LINK[] , int START , int ITEM , int &LOC){
	int PTR = START ;
	while( PTR != 0 ){
		if( ITEM < INFO[PTR] ){
			PTR = LINK[PTR] ;
		}else if( ITEM == INFO[PTR] ){
			LOC = PTR ;
			cout<<"Location of ITEM "<<ITEM<<" is : "<<LOC<<endl;
			return ;
		}
	}
	cout<<"Search is UNSUCESSFUL !!"<<endl;
}

int main (){
	int INFO[] = { 0 , 900 , 800 , 600 , 1000 , 700};
	int LINK[] = { 0 , 2 , 5 , 0 , 1 , 3 };
	int START = 4 ;
	int ITEM ;
	cout<<"Enter the ITEM for Search : ";
	cin>>ITEM;
	int LOC = 0 ;
	SEARCHSL(INFO,LINK,START,ITEM,LOC) ;
	
	return 0;
}
