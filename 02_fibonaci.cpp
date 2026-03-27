#include <iostream>
using namespace std;

fibonaci(int n){
	if(n <= 1 ){
		return n;
	}else{
		return fibonaci(n - 1) + fibonaci(n  - 2 );
	}
}
int main(){
	int n ;
	cout<<"Enter the position :";
	cin>>n;
	
	cout<<"fibonaci  = "<<n <<"   = "<<fibonaci(n)<<endl;
	
}
