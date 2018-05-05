/*
Author: Aaron Jaeger
*/

#ifndef BINARYTREEDEMO_H
#define BINARYTREEDEMO_H

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include "BinaryTree.h"

using std::cout;
using std::endl;
using std::setw;
using std::vector;

const int MAX_SIZE = 20;
const int WIDTH = 5;
const int ROW_SIZE = 5;

int rowCount = 0;

template <class T>
void print(T data) {
		
	cout << setw(WIDTH) << data;
	
	rowCount++;
	
	if (rowCount == ROW_SIZE) {
		
		cout << endl;
		
		rowCount = 0;
	}
}

#endif /*BINARYTREEDEMO_H*/
