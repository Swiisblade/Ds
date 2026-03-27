#include <iostream>
using namespace std;

int SEARCH(int TREE[],int INDEX,int SIZE,int ITEM){
	int LOC ;
	if(INDEX >= SIZE || TREE[INDEX] == -1){
		return -1 ;
	} 
	if(TREE[INDEX] == ITEM){
		return INDEX ;
	}
	int LEFT = SEARCH(TREE,2 * INDEX,SIZE,ITEM);
	if(LEFT != -1){
		return LEFT;
	}
	int RIGHT = SEARCH(TREE,2 * INDEX + 1 ,SIZE,ITEM);
	return RIGHT;
	
}
int main(){
	int TREE[] = { 0 , 1 , 2 , 8 , 4 , 5 , 6 , 7 };
	int SIZE = sizeof(TREE)/sizeof(TREE[0]);
	int INDEX = 1;
	int ITEM;
	cout << "Enter the element to search: ";
    cin >> ITEM;
	int LOC = SEARCH(TREE,INDEX,SIZE,ITEM);
	if (LOC != -1) {
        cout << "Element " << ITEM << " found at index " << LOC<< "." << endl;
    } else {
        cout << "Element " << ITEM<< " not found in the tree." << endl;
    }
	return 0;
}
