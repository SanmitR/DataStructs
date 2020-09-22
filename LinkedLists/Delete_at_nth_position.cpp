// Delete_at_nth_position.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* head;//defining head node
//insert list
void Insert(int data, int pos) {
    Node* temp1 =new Node();
    temp1->data = data;
    temp1->next = NULL;
    if (pos == 1) {
        temp1->next = head;
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for (int i = 0; i < pos - 2; i++) {
        
        temp2 = temp2->next;

    }
    temp1->next = temp2->next;
    temp2->next = temp1;


}
//delete node function
void Delete(int delpos) {
    Node* temp2 = head;
    if (delpos == 1) {
        head = temp2->next;
        delete(temp2);
        return;
    }
    
    for (int k = 0; k < delpos -2; k++) {
        temp2 = temp2->next;
    }
    Node* temp3=temp2->next;
    temp2->next = temp3->next;
    delete(temp3);
   

}
//print function
void Print() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        temp = temp->next;
    }
}
int main()
{

    head = NULL;
   
    
    int x;
    cout << "enter no of elements to be entered";
    cin >> x;

    for (int i = 0; i < x; i++) {
            int data, pos;
            cout << "enter data:";
            cin >> data;
            cout << "enter position:";
            cin >> pos;
            Insert(data, pos);
     }
    Print();
        
    
    int delpos;
    cout << "enter position to be deleted ";
    cin >> delpos;
    Delete(delpos);

    
    Print();

}
