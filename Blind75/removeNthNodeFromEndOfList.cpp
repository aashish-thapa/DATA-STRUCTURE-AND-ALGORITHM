class Solution{
    public:
    ListNode* removeNthFromEnd(ListNode* head, int n){
        ListNode* c = head;
        int count = 0;
        while(c!=nullptr){
            count ++;
            c = c->next;
        }
        if(n ==  count){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        ListNode* curr = head;
        int pos = count - n - 1;
        int i = 0;
        while(curr != nullptr && i < pos){
            curr = curr->next;
            i++;
        }
        ListNode* NodeToDelete = curr->next;
        curr->next = NodeToDelete->next;
        delete NodeToDelete;
        return head;
    }
};