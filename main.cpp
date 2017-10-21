#include<iostream>
using std::cout;
using std::endl;

#include "kbBuffer.hpp"

int main () {
	kbBuffer buf("test.txt");
	cout << buf.getMaxSeq() << endl;
	cout << buf.getCompleteBuffers() << endl;
	cout << buf.getFileSize() << endl;
}
