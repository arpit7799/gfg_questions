/*
class Node {
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
  
    // Merge two sorted lists
    Node* merge(Node* l1, Node* l2){
        Node dummy(0);
        Node* tail = &dummy;
        
        while(l1 && l2){
            if(l1->data < l2->data){
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
        
        if(l1) tail->next = l1;
        if(l2) tail->next = l2;
        
        return dummy.next;
    }
    
    // Find middle
    Node* getMid(Node* head){
        Node* slow = head;
        Node* fast = head->next;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
    
    Node* mergeSort(Node* head) {
        
        // Base case
        if(head == NULL || head->next == NULL)
            return head;
        
        // Step 1: split
        Node* mid = getMid(head);
        Node* right = mid->next;
        mid->next = NULL;
        
        // Step 2: sort halves
        Node* left = mergeSort(head);
        right = mergeSort(right);
        
        // Step 3: merge
        return merge(left, right);
    }
};