#include <bits/stdc++.h> 
//Take an example and iterate
class Queue {
    int *arr;
    int cursize;
    int start{-1}, end {-1};

  public:
    Queue() {
        // Implement the Constructor
        start = -1;
        end = -1;
        arr = new int[6000];
        cursize = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(cursize==0) return true;
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(end == -1) start = 0;
        end = (end + 1)%6000;
        arr[end] = data;
        cursize++;
        
    }

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty()) return -1;
        int a = arr[start];
        if(cursize==1){
            start = -1;
            end = -1;
            cursize = 0;
        } else {
            start = (start + 1) % 6000;
            cursize--;
        }
        return a;
    }

    int front() {
        // Implement the front() function
        if(isEmpty()) return -1;
        return arr[start];
    }
};
