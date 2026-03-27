#include <iostream>
using namespace std;

int INSERT(int TREE[], int INDEX, int SIZE, int ITEM) {
    if (INDEX >= SIZE) return -1; // Out of bounds

    if (TREE[INDEX] == -1) {
        TREE[INDEX] = ITEM;
        return INDEX;
    }

    if (ITEM < TREE[INDEX]) {
        return INSERT(TREE, 2 * INDEX, SIZE, ITEM); // Go left
    } else if (ITEM > TREE[INDEX]) {
        return INSERT(TREE, 2 * INDEX + 1, SIZE, ITEM); // Go right
    } else {
        return -1; // Duplicate
    }
}

int main() {
    int TREE[32] = { 0 , 40 , 20 , 70 , 10 , 15 , 50 , 80 , 8 , 12 , -1 , 17 , 45 , 55 , 75 , 85 };
    int SIZE = sizeof(TREE) / sizeof(TREE[0]);

    // Fill remaining unused indexes with -1
    for (int i = 16; i < SIZE; i++) {
        TREE[i] = -1;
    }

    int ITEM;
    cout << "Enter the element to insert: ";
    cin >> ITEM;

    int LOC = INSERT(TREE, 1, SIZE, ITEM);
    if (LOC != -1) {
        cout << "Element " << ITEM << " inserted at index " << LOC << ".\n";
    } else {
        cout << "Insertion failed: duplicate or tree is full.\n";
    }

    return 0;
}

