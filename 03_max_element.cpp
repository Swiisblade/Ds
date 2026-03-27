#include <iostream>
using namespace std;

int main() {
	//Initialization
	int LOC=0;
	int DATA[50];
	int MAX=DATA[0];
	int n;
	
	//input the elements
	cout << "Enter the element Numbers : ";
	cin >> n;
	//given input from user
	for (int i = 0; i < n; i++) {
		cout << "" << "[" << i << "]  = ";
		cin >> DATA[i];
	}

	cout << endl;
	cout << endl;
	//finding the max and loc 
	for (int j = 1; j < n; j++) {
		if (MAX < DATA[j]) {
			LOC = j;
			MAX = DATA[j];
		}

	}
	cout << endl;
	//output
	cout << "Results :" << endl;
	cout << "LOC = "<<"DATA[" << LOC<<"]" << "   MAX = " << MAX << endl;

	return 0;
}

