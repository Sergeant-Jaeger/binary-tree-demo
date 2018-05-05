/*
Author: Aaron Jaeger
*/

#include "BinaryTreeDemo.h"

int main() {
	
	vector<int> vINT(MAX_SIZE);

	for (int i = 0; i < MAX_SIZE; i++) {

		vINT[i] = i;
	}	
	
	random_shuffle(vINT.begin(), vINT.end());

	BinaryTree<int> btINT;

	vector<int>::iterator it;

	for (it = vINT.begin(); it != vINT.end(); it++) {

		btINT.insert(*it);
	}

	cout << "Beginning Binary Tree Demo with Integers." << endl << endl;
		
	cout << "Integer Binary Tree Height: " << btINT.height() 
		<< endl << "Integer Binary Tree Size: " << btINT.size();

	cout << endl << endl << "In-order traversal:" << endl;
	
	rowCount = 0;
	
	btINT.inorder(print);

	cout << endl << endl << "Pre-order traversal:" << endl;
	
	rowCount = 0;
	
	btINT.preorder(print);
	
	cout << endl << endl <<"Post-order traversal:" << endl;
	
	rowCount = 0;
	
	btINT.postorder(print);

	cout << endl;
	
	return 0;
}
