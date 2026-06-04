/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        int count = 0;
        
        // Reverse first k nodes
        while(curr != NULL && count < k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        // Recursively reverse remaining list
        if(next != NULL){
            head->next = reverseKGroup(next, k);
        }
        
        return prev;
    }
};