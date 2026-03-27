#include <iostream>
using namespace std;
void FIBONACCI(int &FIBO,int N ){
	 if (N == 0) {
        FIBO = 0;
        return;
    }
    if (N == 1) {
        FIBO = 1;
        return;
    }
	int FIBA ;
	int FIBB ;
	
	FIBONACCI(FIBA,N-1);
	FIBONACCI(FIBB,N-2);
	
	FIBO = FIBA + FIBB;
}
int main(){
	int N = 10 ;
	int FIBO = 0;
	FIBONACCI(FIBO,N);
	cout<<"FIBO : "<<FIBO<<endl;
	return 0;
}
