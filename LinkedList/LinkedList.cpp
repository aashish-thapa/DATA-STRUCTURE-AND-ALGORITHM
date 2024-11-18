#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        next = NULL;
        data = 0;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList{
    public:
    Node* head;
    LinkedList(){
        head = NULL;
    }
    void insertatFront(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        
        newNode->next = this->head;
        this->head = newNode;
    }
    void insertAfter(int key, int data){
        Node* curr = head;
        while(curr!=NULL){
            if(curr->data == key){
                return;
            }
            curr = curr->next;
        }
        if(curr==NULL){
            return;
        }
        Node* newNode = new Node(data);
        newNode->next = curr->next;
        curr->next = newNode;
    }
    void insertbefore(int key, int data){
        if(head == nullptr){
            return;
        }
        if(head->data == key){
            Node* newNode = new Node(data);
            
            newNode->next = head;
            head = newNode;
            return;
            
        }
        Node* curr = head;
        Node* prev = nullptr;
        
        while(curr!=nullptr && curr->data != key){
            prev = curr;
            curr = curr->next;
        }
        
        if(curr!=nullptr){
            Node* newNode = new Node(data);
            prev->next = newNode;
            newNode->next = curr;
            
        }
        return;
    }
    void inserAt(int position, int data){
        Node* newNode = new Node(data);
        if(position == 1){
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* current = head;
        for(int i = 1; i < position-1 && current!=nullptr; i++){
            current = current->next;
        }
        if(current==nullptr){
            cout<<"Position out of bound";
            delete newNode;
            return;
        }
        newNode->next = current->next;
        current->next = newNode;

    }
    void print(){
        Node* temp = head;
        if(head==NULL){
            cout<<"list is empty";
            return;
        }
        while(temp!=NULL){
            cout<<temp->data<< " ";
            temp = temp->next;
        }
    }
};
int main(){
    LinkedList list;
    list.insertatFront(5);
    list.insertatFront(10);
    list.insertatFront(15);
    list.print();
    list.insertbefore(10, 20);
    list.insertAfter(15, 20);
    cout<<"before"<<endl;
    
    list.print();
    cout<<"After"<<endl;
    list.inserAt(2, 12);
    list.print();
}