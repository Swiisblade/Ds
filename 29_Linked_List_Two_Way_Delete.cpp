#include <iostream>
using namespace std;
void DELTWL(int INFO[],int FORW[], int BACK[] ,int &FIRST,int &AVAIL,int LOC ){
if (LOC == FIRST) {
        FIRST = FORW[LOC];
        BACK[FIRST] = 0;
    } else {
        FORW[BACK[LOC]] = FORW[LOC];
    }

    if (FORW[LOC] != 0) {
        BACK[FORW[LOC]] = BACK[LOC];
    }
}
void PROCESS(int element){
	cout<<element<<" -> ";
}
void TRAVERSE(int INFO[],int FORW[],int FIRST){
	int PTR = FIRST ;
	while(PTR != 0){
		PROCESS(INFO[PTR]);
		PTR = FORW[PTR];
	}
}

int main(){
	int INFO[] = { 0 , 70 , 20 , 30 , 10 , 90 , 50 , 40 , 80 , 60 };
	int FORW[] = { 0 , 8 , 3 , 7 , 2 , 0 , 9 , 6 , 5 , 1 };
	int BACK[] = { 0 , 9 , 4 , 2 , 0 , 8 , 7 , 3 , 1 , 6 };
	int AVAIL = 0;
	int FIRST = 4 ;
	int LAST = 5 ;
	int LOC = 6 ;
	DELTWL(INFO,FORW, BACK,FIRST,AVAIL,LOC );
	TRAVERSE(INFO,FORW,FIRST);
	cout<<"NULL"<<endl;
	return 0;
}
