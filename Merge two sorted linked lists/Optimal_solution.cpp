#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
 
    Node<int>* t1 = first;
    Node<int>* t2 = second;

    if(t1==NULL) return second;
    if(t2==NULL) return first;
   

    if(t1->data > t2->data) swap(t1,t2);
    Node<int>* ans = t1;
    // t1 wale ko smallest aur t2 ko greatest value ke saath update karte chalna hai
    // Ex: t1 = 1 4 5 -1
    //     t2 = 2 3 5 -1
    
    while(t1!=NULL && t2!=NULL){
        Node<int>* temp = NULL;
        while(t1!=NULL && t1->data <= t2->data){
            
            temp = t1;  // uss value tak jana hai jana last less value mile t2->data ke 
            t1 = t1->next;
        }
        
        temp->next = t2;
        swap(t1,t2); // phir se smallest aur greatest ko append karke swap karna hai
    }

    return ans;
    
    
}

