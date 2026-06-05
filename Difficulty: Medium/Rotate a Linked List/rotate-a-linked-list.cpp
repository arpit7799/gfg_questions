/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        
        if(head == NULL || head->next == NULL || k == 0)
            return head;
        
        // Find length
        int len = 1;
        Node* tail = head;
        
        while(tail->next){
            tail = tail->next;
            len++;
        }
        
        k = k % len;
        
        if(k == 0)
            return head;
        
        Node* curr = head;
        
        // Reach kth node
        for(int i = 1; i < k; i++){
            curr = curr->next;
        }
        
        Node* newHead = curr->next;
        
        // Make circular
        tail->next = head;
        
        // Break
        curr->next = NULL;
        
        return newHead;
    }
};