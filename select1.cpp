#include <iostream>
using namespace std;
void MIN(int DATA[], int N, int K, int &LOC) {
	int MIN = DATA[K];
	LOC = K;
	for (int J = K + 1; J < N; J++) {
		if (MIN > DATA[J]) {
			MIN = DATA[J];
			LOC = J;
		}
	}
}
void SELECT(int DATA[], int N) {
	int LOC;
	for (int K = 0; K < N; K++) {
		MIN(DATA, N, K, LOC);
		int TEMP = DATA[K];
		DATA[K] = DATA[LOC];
		DATA[LOC] = TEMP;
	}
	
	cout << "Sorted array:" << endl;
	for (int i = 0; i < N; i++) {
		cout << DATA[i] << "\t";
	}
	cout << endl;
}
int main() {
	int DATA[] = { 10, 55, 48, 66, 45, 25, 35, 62, 41, 47, 95, 65, 15, 35, 45, 99, 59, 57 };
	int N = sizeof(DATA) / sizeof(DATA[0]);
	SELECT(DATA, N);
	return 0;
}
