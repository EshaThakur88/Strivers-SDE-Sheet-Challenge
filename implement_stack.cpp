#include <bits/stdc++.h> 
// Stack class.
class Stack {
    int* arr;
    int size;
    int topmost;
    int cnt;

public:
    
    Stack(int capacity) {
        arr=new int[capacity];
        size=capacity;
        topmost=-1;
        cnt=0;
    }

    void push(int num) {
        if(cnt<size){
            topmost++;
            arr[topmost]=num;
            cnt++;
        }
    }

    int pop() {
        if(cnt==0) return -1;
        else{
            int ans=arr[topmost];
            arr[topmost]=-1;
            topmost--;
            cnt--;
            return ans;
        }
    }
    
    int top() {
        if(cnt==0) return -1;
        return arr[topmost];
    }
    
    int isEmpty() {
        if(cnt==0) return 1;
        else return 0;
    }
    
    int isFull() {
        if(cnt==size) return 1;
        else return 0;
    }
    
};