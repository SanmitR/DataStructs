// DataStructs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Program to insert at the beginning of linked list
#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next;

};
Node* head;
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
		cout << temp->data;
		temp = temp->next;
	}

}
void main() {
	
	head = NULL;
	int n, x;
	cout << "Enter number of nodes :";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Enter the number:";
		cin >> x;
		insert(x);
		print();

	}

	

	
}
