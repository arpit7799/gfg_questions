/* Structure of a link list node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* headRef) {
        
        if(headRef == NULL) return headRef;
        
        Node* curr = headRef;
        
        while(curr != NULL && curr->next != NULL){
            
            if(curr->data == curr->next->data){
                
                Node* del = curr->next;
                
                curr->next = del->next;
                
                if(del->next != NULL){
                    del->next->prev = curr;
                }
                
                delete del;
            }
            else{
                curr = curr->next;
            }
        }
        
        return headRef;
    }
};