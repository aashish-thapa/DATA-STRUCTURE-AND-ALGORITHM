// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int val){
        data = val;
        prev = next = nullptr;
    }
};
void forwardTraversal(Node* head){
    Node* curr = head;
    while(curr != nullptr){
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout<<endl;
}

void backwardTraversal(Node* tail){
    Node* curr = tail;
    while(curr != nullptr){
        cout << curr->data << " ";
        curr = curr->prev;
    }
    cout<<endl;
}
int returnCount(Node* head){
    Node* curr = head;
    int count = 0;
    while(curr != nullptr){
        count ++;
        curr = curr->next;
    }
    return count;
}

Node* insertAtBegin(Node* head, int data){
    Node* newNode = new Node(data);
    Node* curr = head;
    newNode->next = head;
    
    if(head != nullptr){
        head->prev = newNode;
    }
    return newNode->next;
}

int main() {
    // Write C++ code here
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    
    
    backwardTraversal(third);
    cout << endl;
    forwardTraversal(head);
    cout << endl;
    cout << "The size of the linklist is " << returnCount(head);
    cout << endl;
    cout << insertAtBegin(head, 5);
    return 0;
}
