
//Program to insert at the beginning of linked list
#include <iostream>
using namespace std;
class Node {
	int data;
	Node* next;
	void insert(int x) {
		Node* temp = new Node();
		temp->data = x;
		temp->next = head;
		head = temp;
	}
	void print() {
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data<<endl;
			
			
			temp = temp->next;
		}

	}


};
Node* head;


void main() {
	
	head = NULL;
	int n, x;
	cout << "Enter number of nodes :";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Enter the number:";
		cin >> x;
		Node.insert(x);
		Node.print();

	}

	

	
}

