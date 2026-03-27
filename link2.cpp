#include <iostream>
using namespace std;
void SEARCH(int INFO[],int LINK[],int START,int ITEM){
	int LOC = 0 ;
	int PTR = START ;
	while(PTR  != 0){
		if(INFO[PTR] == ITEM){
			LOC = PTR;
			cout<<"LOCATION of :"<<ITEM<<" is : "<<LOC<<endl;
			return;
		}
		PTR = LINK[PTR];
	}
	cout<<"Search is unsucessful";
	
}
int main(){
	int INFO[] = { 0 , 600 , 300 , 500 , 100 , 400};
	int LINK[] = { 0 , 2 , 5 , 0 , 1 , 3 };
	int START = 4 ;
	int ITEM = 400 ;
	SEARCH(INFO,LINK,START,ITEM) ;
	return 0 ;
}
