#include <iostream>
using namespace std;
void FACTORIAL(int &FACT,int N){
	if(N == 0){
		FACT = 1 ;
		return ;
	}
	int TEMP = FACT;
	FACTORIAL( FACT, N - 1 );
	FACT = N * FACT ;
}
int main(){
	
	int N = 6 ;
	int FACT = 1 ;
	FACTORIAL(FACT,N);
	cout<<"Factorial of "<<N<<" is = "<<FACT<<endl;
	return 0;
}
