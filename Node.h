/*
Author: Aaron Jaeger
*/

#ifndef NODE_H
#define NODE_H

/*
Class: Node

Parent: n/a

Notes: This class is implemented with a template
	for data flexibility. The class also uses a 
	protected access modifier for inheritence 
	purposes
*/
template <class T>
class Node {

protected:
	
	T data;

public:
	
	Node(T nData) {

		data = nData;
	}
};
#endif /*NODE_H*/