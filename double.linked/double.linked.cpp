#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int noMhs();
	string name();
	Node* next;
	Node* prev;
};

class DoubleLinkedList {
private:
	Node* START = NULL;
public:
	void addNode();
	bool search(int rollNo, Node** previous, Node** current);
	bool deleteNode(int rollno);
	bool ListEmpety();
	void traverse();
	void revtraverse();
	void hapus();
	void searchdata();
};

DoubleLinkedList ::DoubleLinkedList ()
{
}

DoubleLinkedList ::~DoubleLinkedList ()
{
}