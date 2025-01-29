#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int x): data(x), next(nullptr) {}

};

Node* mergeTwo(Node* head1, Node* head2){
    Node* dummy = new Node(-1);
    Node* curr = dummy;
    while(head1 != nullptr && head2 != nullptr){
        if(head1->data <= head2->data){
            curr->next = head1;
            head1 = head1->next;
        }
        else{
            curr->next = head2;
            head2 = head2->next;
        }
        curr = curr->next;
    }
    if(head1 != nullptr){
        curr->next = head1;
    }
    else{
        curr->next = head2;
    }
    return dummy->next;
}
Node* mergeL(vector<Node*> &klist){
    Node* res = nullptr;
    for(Node* node : klist){
        res = mergeTwo(res, node);
    }
    return res;
}