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

void DELETE(int INFO[],int LINK[],int START,int AVAIL,int LOC,int LOCP){
	if(LOCP == 0){
		START = LINK[START];
	}else{
		LINK[LOCP] = LINK[LOC];
	}
	LINK[LOC] = AVAIL;
	AVAIL = LOC ;
	TRAVERSE(INFO,LINK,START);
}
int main(){
	int INFO[] = { 0 , 150 , 200 , 0 , 300 , 0 , 0 , 100 , 250 , 0};
	int LINK[] = { 0 , 2 , 8 , 9 , 0 , 0 , 5 , 1 , 4 , 6 } ;
	int START = 7 ;
	int AVAIL = 3 ;
	int LOC = 8;
	int LOCP = 2;
	DELETE(INFO,LINK,START,AVAIL,LOC,LOCP);
	return 0;
}
