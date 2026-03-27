#include <iostream>
using namespace std;

int PARTITION(int DATA[], int START, int END) {
    int INDEX = START - 1;
    int PIVOT = DATA[END];

    for (int i = START; i < END; i++) {
        if (DATA[i] <= PIVOT) {
            INDEX++;
            swap(DATA[i], DATA[INDEX]);
        }
    }
    swap(DATA[INDEX + 1], DATA[END]);
    return INDEX + 1;
}

void QUICKSORT(int DATA[], int START, int END) {
    if (START < END) {
        int PINDX = PARTITION(DATA, START, END);
        QUICKSORT(DATA, START, PINDX - 1);
        QUICKSORT(DATA, PINDX + 1, END);
    }
}

int main() {
    int DATA[] = {10, 55, 48, 66, 45, 25, 35, 62, 41, 47, 95, 65, 15, 35, 45, 99, 59, 57};
    int N = sizeof(DATA) / sizeof(DATA[0]);
	int START = 0 ;
	int END = N -1 ;
    QUICKSORT(DATA,START,END);

    cout << "Sorted array:" << endl;
    for (int i = 0; i < N; i++) {
        cout << DATA[i] << "\t";
    }
    cout << endl;

    return 0;
}

