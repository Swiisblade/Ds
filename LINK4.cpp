#include <iostream>
using namespace std;
void TRAVERSE(int INFO[],int LINK[],int START){
	int PTR = START;
	while(PTR != 0){
		cout<<INFO[PTR]<<" -> ";
		PTR = LINK[PTR];
	}
	cout<<"NULL"<<endl;
}
void INSERT(int INFO[],int LINK[],int START,int AVAIL,int LOC ,int ITEM){
	int PTR = START ;
	if(AVAIL == 0){
		cout<<"OVERFLOW"<<endl;
		return;
	}
	int NEW = AVAIL ;
	AVAIL = LINK[AVAIL];
	INFO[NEW] = ITEM ;

	if (LOC == 0){
		LINK[NEW] = START;
		START = NEW ;
	}else{
		LINK[NEW] = LINK[LOC];
		LINK[LOC] = NEW ;
	}
	cout<<"After Inserting element :"<<endl;
	TRAVERSE(INFO,LINK,START);
	
}
int main(){
	int INFO[] = { 0 , 150 , 200 , 0 , 300 , 0 , 0 , 100 , 250 , 0};
	int LINK[] = { 0 , 2 , 8 , 9 , 0 , 0 , 5 , 1 , 4 , 6 } ;
	int START = 7 ;
	int AVAIL = 3 ;
	int LOC = 8;
	int ITEM = 500 ;
	INSERT(INFO,LINK,START,AVAIL,LOC,ITEM);
	return 0;
}
