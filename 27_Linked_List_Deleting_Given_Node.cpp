//Deletion at given node..
#include <iostream>
using namespace std;

DEL(int INFO[],int LINK[],int &START,int &AVAIL, int &LOC , int &LOCP){
	if(LOCP == 0 ){
		START = LINK[START];
	}else{
		LINK[LOCP] = LINK[LOC];
	}
	LINK[LOC] = AVAIL;
	AVAIL = LOC ;
}

int main (){
	int INFO[] = { 0 , 150 , 200 , 0 , 300 , 0 , 0 , 100 , 250 , 0};
	int LINK[] = { 0 , 2 , 8 , 9 , 0 , 0 , 5 , 1 , 4 , 6 } ;
	int START = 7 ;
	int AVAIL = 3 ;
	int LOC = 8 ;
	int LOCP = 2 ;
	
	DEL(INFO,LINK,START,AVAIL,LOC,LOCP);
	
	
	cout<<"After Deleting ITEM :: "<<endl;
	
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
