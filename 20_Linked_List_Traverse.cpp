#include <iostream>
using namespace std;
void PROCESS(char element){
	cout << element <<" -> ";
}
void TRAVERSE (char INFO[] , int LINK[] , int START){
	int PTR = START ;
	while(PTR != 0){
		PROCESS(INFO[PTR]) ;
		PTR = LINK[PTR] ;
	}
	cout << "NULL" << endl;
}
int main (){
	char INFO[] = { ' ', 'B' , 'C' , 'E' , 'A' , 'D'};
	int LINK[] = { 0 , 2 , 5 , 0 , 1 , 3 };
	int START = 4 ;
	TRAVERSE(INFO, LINK , START);
	
	return 0;
}
