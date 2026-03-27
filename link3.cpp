#include <iostream>
using namespace std;
void SEARCH(int INFO[],int LINK[],int START,int ITEM){
	int LOC = 0 ;
	int PTR = START ;
	while(PTR  != 0){
		if(ITEM > INFO[PTR]){
			PTR = LINK[PTR];
		}else if(INFO[PTR] == ITEM){
			LOC = PTR;
			cout<<"LOCATION of :"<<ITEM<<" is : "<<LOC<<endl;
			return;
		}
	}
	cout<<"Search is unsucessful"<<endl;
	
}
int main(){
	int INFO[] = { 0 , 600 , 300 , 500 , 100 , 400, 200};
	int LINK[] = { 0 , 0 , 5 , 1 , 6 , 3 , 2 };
	int START = 4 ;
	int ITEM = 400 ;
	SEARCH(INFO,LINK,START,ITEM) ;
	return 0 ;
}
