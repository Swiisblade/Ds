#include <iostream>
using namespace std;
void INSERT(int DATA[],int N){
	DATA[0] = -1;
	for(int K = 1 ; K < N - 1 ; K++){
		int TEMP = DATA[K];
		int PTR = K - 1 ;
		while(TEMP < DATA[PTR]){
			DATA[PTR + 1] = DATA[PTR];
			PTR = PTR - 1 ;
		}
		DATA[PTR + 1] = TEMP;
	}
	cout << "Sorted array:" << endl;
    for (int i = 0; i < N; i++) {
        cout << DATA[i] << "\t";
    }
    cout << endl;
}
int main(){
	int DATA[] = {10, 55, 48, 66, 45, 25, 35, 62, 41, 47, 95, 65, 15, 35, 45, 99, 59, 57};
    int N = sizeof(DATA) / sizeof(DATA[0]);
    INSERT(DATA,N);
	return 0;
}
