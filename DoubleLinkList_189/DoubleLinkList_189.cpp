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
	int nim;
	string nim;
	cout << "\nEnter the roll number of the student: ";
	cin >> nim;
	cout << "\nEnter the roll name of the student: ";
	cin >> nim;

}