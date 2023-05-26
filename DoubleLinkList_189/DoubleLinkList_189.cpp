#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

class DoubleLinkedList {
private:
	Node* START;
public:
	DoubleLinkedList();
	void addNode();
	bool search(int rollNo);
	bool deleteNode(int rollNo);
	bool listEmpty();
	void traverse();
	void reutraverse();
	void hapus();
	void SearchData();
};

DoubleLinkedList::addNode() {
}