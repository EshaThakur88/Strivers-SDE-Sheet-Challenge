#include <bits/stdc++.h>

class node{

public:

    int data;

    int i;

    int j;

    node(int a,int b, int c){

    data=a;

    i=b;

    j=c;

    }

};

class compare{

public:

    bool operator()(node* a, node* b){

    return a->data > b->data;

    }

};

 

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k){

    vector<int> v;
    priority_queue<node*,vector<node*>,compare>minheap;

    // STEP1
    for(int i=0;i<kArrays.size();i++){
    node* temp=new node(kArrays[i][0],i,0);
    minheap.push(temp);
    }

    // STEP2
    while(minheap.size()>0){
        node* temp=minheap.top();
        v.push_back(temp->data);
        minheap.pop();

        if(temp->j+1<kArrays[temp->i].size()){
        node* temp1=new node(kArrays[temp->i][temp->j+1],temp->i,temp->j+1);
        minheap.push(temp1);
        }

    }

    return v;

}

 

