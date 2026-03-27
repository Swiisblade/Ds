#include <iostream>
using namespace std;

int main(){
	int const MAX=50;
	int m;
	int n;
	int SALE[MAX][MAX];
	
	cout<<"Enter Total Stores : ";
	cin>>m;
	
	cout<<"Enter Total Departments of the store : ";
	cin>>n;
	cout<<"Enter the weekly Sales of the stores : "<<endl;
	
	for(int i = 0 ; i < m ; i++){
		
		cout<<"STORE["<<i+1<<"] "<<endl;
		
		for(int j = 0 ; j < n ;j++){
			
			cout<<"DEPARTMENT["<<j+1<<"] = ";
			cin>>SALE[i][j];
		}
	}
	
	cout<<endl;
	cout<<endl;
	for(int i = 0 ; i < m ; i++){
		
		for(int j = 0 ; j < n ; j++){
			
			cout<<"\tSTORE ["<<i+1<<"] ["<<j+1<<"] = "<<SALE[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}
