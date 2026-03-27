#include <iostream>
using namespace std;

int main(){
	
	int DATA[10] = {74,240,14,84,396,75,35,15,25,100};
	int N = 10;
	int LOC = 0;
	int MAX = DATA[0];
	
	for(int K = 0 ; K < N ; K++){
		
		if(MAX < DATA[K]){
			LOC = K ;
			MAX = DATA[K];
		}
	}
			cout << "Largest value: " << MAX << " found at index: " << LOC << endl;
	return 0;
}
