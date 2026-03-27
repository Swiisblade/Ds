#include <iostream>
using namespace std;
void PROCESS(int element){
	cout<<element<<"\t";
}
void TRAVERSE(int INFO[],int LINK[],int START){
	int PTR = LINK[START];
	while(PTR != START){
		PROCESS(INFO[PTR]);
		PTR = LINK[PTR] ;
	}
}
int main(){
	
	int INFO[] = {0 , 12 , 16 , 10 , 15 , 13 , 18 , 14 , 19 , 17 };
	int LINK[] = {0 , 5 , 9 , 1 , 2 , 7 , 8 , 4 , 3 , 6 };
	int START = 3 ;
	TRAVERSE(INFO,LINK,START);
	return 0;
}
