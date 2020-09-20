// Insert_at_nth_position.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    
};
Node* head;    //global variable
void Insert(int data, int n) {
    Node* temp1 = new Node;//Create new node
    temp1->data = data;//add data to the data part
    temp1->next = NULL;//initially pointing to null
    //adding at first position
    if (n == 1) {
        temp1->next = head;//link of next =existing head
        head = temp1;//new head = addres of new node(temp1)
        return;
    }
    Node* temp2 = head;
    //traversing ll to reach n-1th node
    for (int j = 0; j < n - 2; j++) {
        temp2 = temp2->next;

    }
    temp1->next = temp2->next;
    temp2->next = temp1;

}
void print() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        temp = temp->next;

    }
}





int main()
{
    head = NULL;//empty list
    int x;
    cout << "enter no of elements to be entered\n";
    cin >> x;
    
    for (int i = 0; i < x; i++) {
        
        int y, z;
        cout << "enter data\n";
        cin >> y;
        cout << "enter position\n";
        cin >> z;
        Insert(y, z);
        print();
    }
    

}
