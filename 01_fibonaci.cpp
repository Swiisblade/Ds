#include <iostream>
using namespace std;

fibonaci(int pos){
	if(pos <=1){
		return pos;
	}else{
		return fibonaci(pos - 1) + fibonaci(pos - 2);
	}
}

int main(){
	int num = 0 ;
	int snum = 1;
	int fibo ;
	int pos;
	int n ;
	cout<<"Enter the fibonacci counts"<<endl;
	cin>>n;
	cout<<"num : "<< 0 <<" = " << num <<"  "<<endl;
	cout<<"num : "<< 1 <<" = "  << snum <<"  "<<endl;
	
	for(int i = 1 ; i < n ; i++ ){
		fibo = num + snum;
		num = snum;
		snum = fibo;
		cout<<"num : "<<i + 1<<" = " <<fibo<<"  "<<endl;
		
	}
	
	cout<<endl;
	cout<<endl;
	
	cout<<"Enter the position with one you have : ";
	cin>>pos;
	cout << "Position: " << pos << " = " << fibonaci(pos) << endl;
	
	return 0;
}
