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
    return newNode;
}
Node* insertAtLast(Node* head, int data){
    Node* newNode = new Node(data);
    Node* curr = head;
    while(curr != nullptr && curr->next != nullptr){
        curr = curr->next;
    }
    curr->next = newNode;
    newNode->next = nullptr;
    newNode->prev = curr;
    
    return head;
}

Node* insertAt(Node* head, int data, int position){
    Node* newNode = new Node(data);
    if(position < 0 ){
        return head ;
    }
    if(position == 1){
        newNode->next = head;
        if(head!= nullptr){
            head->prev = newNode;
        }
    }
    Node* curr = head;
    int i = 1;
    while(curr != nullptr and i < position - 1){
        
        curr = curr->next;
        i++;
    }
    if(curr == nullptr){
        cout<<"Out of the bound";
        delete newNode;
        return head;
    }
    
    newNode->prev = curr;
    newNode->next = curr->next;
    curr->next = newNode;
    
    if (newNode->next != nullptr){
        newNode->next->prev = newNode;
    }
    return head;
}
Node* deleteAtBegin(Node* head){
    Node* temp = head;
    if(head == nullptr){
        return head;
    }
    else{
    head = head->next;
    }
    delete temp;
    return head;
    
    
}
Node* deleteAtEnd(Node* head){
    Node* curr = head;
    while(curr != nullptr && curr->next->next != nullptr){
        curr = curr -> next;
    }
    Node* nodeToDlt = curr -> next;
    curr -> next = nodeToDlt -> next;
    if(nodeToDlt -> next != nullptr){
        nodeToDlt -> next -> prev = curr;
    }
    delete nodeToDlt;
    return head;
}
Node* deleteAtPosition(Node* head, int position){
    
    if(position < 1){
        cout << "Empty";
        
    }
    if(position == 1){
        delete head;
        head->next = nullptr;
    }
    Node* curr = head;
    int i = 1;
    while(curr != nullptr && i < position - 1){
        curr = curr-> next;
        i++;
    }
    Node* NodeToDlt = curr -> next;
    curr -> next = NodeToDlt -> next;
    if(NodeToDlt -> next != nullptr){
        NodeToDlt -> next -> prev = curr;
    }
    delete NodeToDlt;
    return head;
}
void print(Node* head){
    Node* curr = head;
    while(curr != nullptr){
        cout << curr -> data << " ";
        curr = curr -> next;
    }
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
    print(deleteAtPosition(head, 2));
}
