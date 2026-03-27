#include <iostream>
using namespace std;

int main(){
	int n;
	int DATA[100];
	int MIN=DATA[0];
	int LOC=0;
	
	cout<<"Enter the number of elements :";
	cin>>n;
	cout<<endl;
	
	for(int i = 0 ; i < n ; i++){
		cout<<"DATA["<<i<<"] = ";
		cin>>DATA[i];
	}
	
	for(int j = 0 ; j < n ; j++){
		if(MIN > DATA[j]){
			LOC = j;
			MIN = DATA[j];
		}
		
	}
	cout<<endl;
	cout << "Results :" << endl;
	cout << "LOC = "<<"DATA[" << LOC<<"]" << "   MIN = " << MIN << endl;
	return 0;
}
