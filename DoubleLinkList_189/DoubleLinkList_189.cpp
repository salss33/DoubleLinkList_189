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

DoubleLinkedList::DoubleLinkedList() {
	START = NULL;
}

void DoubleLinkedList::addNode() {
	int nim;
	string nim;
	cout << "\nEnter the roll number of the student: ";
	cin >> nim;
	cout << "\nEnter the roll name of the student: ";
	cin >> nim;
	Node* newNode = new Node(); //step 1
	newNode->name = nim; //step 2
	newNode->name = nim; //step 2

	/*insert a node in the beginning of a doubly - Linked List*/
	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL && nim == START->noMhs) {
			cout << "\nDuplicate number not allowed" << endl;
			return;
		}
		newNode->next = START; //step 3
		if (START != NULL)
			START->prev = newNode; //step 4
		newNode->prev = NULL; //step 5
		START - newNode; // step 6
		return;
	}

	}



}