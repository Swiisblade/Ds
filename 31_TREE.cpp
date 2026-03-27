#include <iostream>
using namespace std;
void PROCESS(char element){
	cout<<element<<"\t";
}
void PRETRAV(char INFO[],int LEFT[],int RIGHT[],int ROOT){
	int TOP = 0 ;
	int STACK[100];
	int PTR = ROOT ;
	while (PTR != -1 || TOP != -1) {
			while(PTR != 0){
				PROCESS(INFO[PTR]);
				if(RIGHT[PTR] != 0){
					TOP = TOP + 1 ;
					STACK[TOP] = RIGHT[PTR];
				}
				PTR = LEFT[PTR];
			}
			if(TOP != 0){
				PTR= STACK[TOP] ;
				TOP = TOP - 1;
			}
	}
}
int main(){
	char INFO[] = {'K','C','G',' ','A','H','L',' ',' ','B',' ','F','E',' ',' ',' ','J','D',' ',' '};
	int LEFT[] = {0,3,0,14,10,17,0,9,4,18,19,0,12,15,16,11,7,0,20,0};
	int RIGHT[] = {0,6,0,0,2,1,0,0,0,13,0,0,0,0,0,0,0,0,0,0};
	int ROOT = 4 ;
	PRETRAV(INFO,LEFT,RIGHT,ROOT);
	return 0;
}
