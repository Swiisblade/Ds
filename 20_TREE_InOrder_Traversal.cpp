#include <iostream>
using namespace std;

void PreTrav(int TREE[],int INDEX,int SIZE){
	if(INDEX >= SIZE || TREE[INDEX] == -1){
		return;
	} 
	PreTrav(TREE,2 * INDEX,SIZE);
	cout<<TREE[INDEX]<<" - ";
	PreTrav(TREE,2 * INDEX + 1 ,SIZE);
}
int main(){
	int TREE[] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 };
	int SIZE = sizeof(TREE)/sizeof(TREE[0]);
	int INDEX = 1;
	PreTrav(TREE,INDEX,SIZE);
	return 0;
}
