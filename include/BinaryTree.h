/*
Author: Aaron Jaeger
*/

#ifndef BINARYTREE_H
#define BINARYTREE_H

template <class T>
struct Node {

	T data;
	Node<T>* childLeft;
	Node<T>* childRight;

	Node<T>(T nData) {

		data = nData;
		
		childLeft = nullptr;
		childRight = nullptr;
	}
};

template <class T>
class BinaryTree {

protected:

	Node<T>* root;
	
	int height(Node<T>* node) const {

		int treeHeight;

		if (node == nullptr) {

			treeHeight = -1;
		}
		else {

			int heightL = height(node->childLeft);
			int heightR = height(node->childRight);

			if (heightL < heightR) {

				treeHeight = heightR + 1;
			}
			else {

				treeHeight = heightL + 1;
			}
		}

		return treeHeight;
	}

	void insert(Node<T>* &node, T nData) {

		if (node == nullptr) {

			node = new Node<T>(nData); 	
		}
		else {

			if (height(node->childLeft) > height(node->childRight)) {

				insert(node->childRight, nData);
			}
			else {

				insert(node->childLeft, nData);
			}
		}
	}

	unsigned int size(Node<T>* node) const {

		unsigned int treeSize;

		if (node == nullptr) {

			treeSize = 0;
		}
		else {

			treeSize = size(node->childLeft) + size(node->childRight) + 1;
		}

		return treeSize;
	}

	void inorder(Node<T>* node, void(*printFunction)(T)) {

		if (node != nullptr) {

			inorder(node->childLeft, printFunction);

			printFunction(node->data);

			inorder(node->childRight, printFunction);
		}
	}

	void preorder(Node<T>* node, void(*printFunction)(T)) {

		if (node != nullptr) {

			printFunction(node->data);

			preorder(node->childLeft, printFunction);

			preorder(node->childRight, printFunction);
		}
	}

	void postorder(Node<T>* node, void(*printFunction)(T)) {

		if (node != nullptr) {

			postorder(node->childLeft, printFunction);

			postorder(node->childRight, printFunction);

			printFunction(node->data);
		}
	}

public:

	BinaryTree<T>() {

		root = nullptr;
	}

	int height() const {

		return height(root);
	}

	void insert(T nData) {

		insert(root, nData);
	}

	unsigned int size() const {

		return size(root);
	}

	void inorder(void(*printFunction)(T)) {

		inorder(root, printFunction);
	}

	void preorder(void(*printFunction)(T)) {

		preorder(root, printFunction);
	}

	void postorder(void(*printFunction)(T)) {

		postorder(root, printFunction);
	}

};
#endif /*BINARYTREE_H*/
