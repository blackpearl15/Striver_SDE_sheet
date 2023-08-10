#include <bits/stdc++.h> 
//slow-fast pointer + reverse the linked list
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int>* rev(LinkedListNode<int>* h1){
    //cout << "isme " << endl;
    LinkedListNode<int> *left = NULL;
    LinkedListNode<int> *curr = h1;
    LinkedListNode<int> *right;

    while(curr!=NULL){
        right = curr->next;
        curr->next = left;

       // cout << curr->data <<endl;

        left = curr;
        curr = right;
    }

    h1->next = NULL;
    //cout << left->data <<endl;

    return left;
} 


bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(!head) return true;
    if(!head->next) return true;

    LinkedListNode<int> *slow = head;
    LinkedListNode<int> *fast = slow->next;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    LinkedListNode<int> *temp = slow->next;
    LinkedListNode<int> *t2 = rev(temp);
    LinkedListNode<int> *t1 = head;

    while(t1!=NULL && t2!=NULL){
        if(t1->data != t2->data)
          return false;

        t1=t1->next;
        t2=t2->next;
    }

    return true;



}
