#include <iostream>
using namespace std;

void INSERTTWL(int INFO[], int FORW[], int BACK[], int &FIRST, int &AVAIL, int LOC, int ITEM) {
    if (AVAIL == 0) {
        cout << "No available space to insert.\n";
        return;
    }

    int NEW = AVAIL;
    AVAIL = FORW[AVAIL];

    INFO[NEW] = ITEM;

    if (LOC == FIRST) {
        FORW[NEW] = FIRST;
        BACK[FIRST] = NEW;
        FIRST = NEW;
        BACK[NEW] = 0;
    } else {
        FORW[NEW] = FORW[LOC];
        BACK[NEW] = LOC;
        if (FORW[LOC] != 0) {
            BACK[FORW[LOC]] = NEW;
        }
        FORW[LOC] = NEW;
    }
}


void PROCESS(int element) {
    cout << element << " -> ";
}

void TRAVERSE(int INFO[], int FORW[], int FIRST) {
    int PTR = FIRST;
    while (PTR != 0) {
        PROCESS(INFO[PTR]);
        PTR = FORW[PTR];
    }
}

int main() {
    int INFO[] = { 0 , 70 , 20 , 30 , 10 , 0 , 50 , 40 , 80 , 60 };
    int FORW[] = { 0 , 8 , 3 , 7 , 2 , 0 , 9 , 6 , 0 , 1 };
    int BACK[] = { 0 , 9 , 4 , 2 , 0 , 0 , 7 , 3 , 1 , 6 };
    int AVAIL = 5;
    int FIRST = 4;
    int LAST = 8;
    int LOC = 3;
    int VALUE = 100;

    INSERTTWL(INFO, FORW, BACK, FIRST, AVAIL, LOC, VALUE);
    
    cout << "Updated Doubly Linked List: ";
    TRAVERSE(INFO, FORW, FIRST);
    cout << "NULL" << endl;
    
    return 0;
}

