#include <bits/stdc++.h> 
class Stack {
	queue<int> q1, q2;
    // int size;

   public:
    Stack() {
        
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return q1.size();
    }

    bool isEmpty() {
        return q1.size()==0;
    }

    void push(int element) {
        q2.push(element);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1,q2);
        // size++;
    }

    int pop() {
        if(q1.empty()) return -1;
        else{
            int top=q1.front();
            q1.pop();
            // size--;
            return top;
        }
    }

    int top() {
        if(q1.empty()) return -1;
        else{
            return q1.front();
        }
    }
};