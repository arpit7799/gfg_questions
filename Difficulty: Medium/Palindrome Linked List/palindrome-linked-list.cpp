/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    
    Node* reverse(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        
        while(curr){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    
    bool isPalindrome(Node *head) {
        
        if(head == NULL || head->next == NULL)
            return true;
        
        // Step 1: find middle
        Node* slow = head;
        Node* fast = head;
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Step 2: reverse second half
        Node* second = reverse(slow->next);
        
        // Step 3: compare
        Node* first = head;
        
        while(second){
            if(first->data != second->data)
                return false;
            
            first = first->next;
            second = second->next;
        }
        
        return true;
    }
};