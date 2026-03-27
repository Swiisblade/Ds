#include <iostream>
using namespace std;

void INSFIRST(int INFO[], int LINK[], int &START, int &AVAIL, int ITEM) {
    if (AVAIL == 0) {
        cout << "OVERFLOW" << endl;
        return;
    }
    int NEW = AVAIL;
    AVAIL = LINK[AVAIL];
    INFO[NEW] = ITEM;
    LINK[NEW] = START;
    START = NEW;
}

int main() {
    int INFO[] = {0, 150, 200, 0, 300, 0, 0, 100, 250, 0};
    int LINK[] = {0, 2, 8, 9, 0, 0, 5, 1, 4, 6};
    int START = 7, AVAIL = 3, ITEM = 500;
    INSFIRST(INFO, LINK, START, AVAIL, ITEM);
    
    cout << "After Inserting ITEM: " << endl;
    for (int i : INFO) cout << i << " -> ";
    cout << "NULL\nLINKs: ";
    for (int i : LINK) cout << i << " -> ";
    return 0;
}

