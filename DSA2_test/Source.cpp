#include <iostream>
using namespace std;

struct node {
	int data;
	node* next = NULL;
};

void addTail(node *pHead, int data) {
	node * p_new = new node;
	while (pHead->next) pHead = pHead->next;
	pHead->next = p_new;
	p_new->data = data;
	p_new->next = NULL;
}

void printLinkedList(node* p1) {
	cout << p1->data<<" ";
	if (p1->next) printLinkedList(p1->next);
};

int main() {
	node* p1 = new node, *p2 = new node, *p3 = new node, *p4 = new node, *p5 = new node;
	p1->data = 1; p1->next = p2;
	p2->data = 3; p2->next = p3;
	p3->data = 2; p3->next = p4;
	p4->data = 7; p4->next = p5;
	p5->data = 9; p5->next = NULL;
	addTail(p1, 4);
	printLinkedList(p2); 
	cout << endl;
	delete p1; delete p2; delete p3; delete p4; delete p5;
	system("pause");
	return 0;
}