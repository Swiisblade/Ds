#include <iostream>
using namespace std;
void FINDA(int INFO[],int LINK[],int &START, int &ITEM,int &LOC){
	if(START == 0){
		cout<<"List is empty !!"<<endl;
		return ;
	}
	if(ITEM < INFO[START]){
		LOC = 0 ;
		return ;
	}
	int SAVE = START ;
	int PTR = LINK[START] ;
	
	while(PTR != 0){
		if (ITEM < INFO[PTR]){
			LOC = SAVE ;
			return ;
		}
		SAVE = PTR ;
		PTR = LINK[PTR] ;
		
	}
	LOC = SAVE ;
}
void INSLOC(int INFO[],int LINK[],int &START , int &AVAIL,int &ITEM,int &LOC){
	if(AVAIL == 0){
		cout<<"OVERFLOW !!"<<endl;
		return ;
	}
	int NEW = AVAIL ;
	AVAIL = LINK[AVAIL] ;
	
	INFO[NEW] = ITEM ;
	
	if(LOC == 0){
		LINK[NEW] = START ;
		START = NEW ;
	}else{
		LINK[NEW] = LINK[LOC];
		LINK[LOC] = NEW ;
	}
}

void INSERT(int INFO[] , int LINK[] , int &START , int &AVAIL, int &ITEM, int &LOC){
	FINDA(INFO,LINK,START,ITEM,LOC) ; 
	
	INSLOC(INFO, LINK , START, AVAIL, ITEM, LOC);
}


int main (){
	int INFO[] = { 0 , 150 , 200 , 0 , 300 , 0 , 0 , 100 , 250 , 0};
	int LINK[] = { 0 , 2 , 8 , 9 , 0 , 0 , 5 , 1 , 4 , 6 } ;
	int START = 7 ;
	int AVAIL = 3 ;
	int LOC = 8 ;
	int ITEM  = 500 ;
	
	INSERT(INFO,LINK,START,AVAIL,ITEM,LOC);
	
	cout<<"After Inserting ITEM :: "<<endl;
	
	int ptr2 = START;
	while (ptr2 != 0) {
		cout << INFO[ptr2] << " -> ";
		ptr2 = LINK[ptr2];
	}
	cout << "NULL" << endl;

	cout << "LINKs" << endl;
	ptr2 = START;
	while (ptr2 != 0) {
		cout << LINK[ptr2] << " -> ";
		ptr2 = LINK[ptr2];
	}
	cout << "NULL" << endl;
	return 0;
}
