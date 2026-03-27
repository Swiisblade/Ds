#include <iostream>
using namespace std;
void SEARCH(int INFO[] , int LINK[] , int START , int ITEM , int &LOC){
	int PTR = START ;
	while( PTR != 0 ){
		if( ITEM == INFO[PTR] ){
			LOC = PTR ;
			cout<<"Location of ITEM "<<ITEM<<" is : "<<LOC<<endl;
			return ;
		}
		PTR = LINK[PTR] ;
	}
	cout<<"Search is UNSUCESSFUL !!"<<endl;
}

int main (){
	int INFO[] = { 0 , 600 , 300 , 500 , 100 , 400};
	int LINK[] = { 0 , 2 , 5 , 0 , 1 , 3 };
	int START = 4 ;
	int ITEM = 100 ;
	int LOC = 0 ;
	SEARCH(INFO,LINK,START,ITEM,LOC) ;
	
	return 0;
}
