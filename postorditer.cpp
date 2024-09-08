#include<bits/stdc++.h>
using namespace std;

struct Treenode{
    int val;
   struct Treenode* left;
   struct Treenode* right;
    Treenode(int data){
        val=data;
        left=NULL;
        right=NULL;
    }
};

vector<int> postorder(Treenode* root){
    Treenode* temp=root;
    vector<int>v;
    stack<Treenode*>t;
    stack<Treenode*>s;
    t.push(temp);
    while(!t.empty()){
       Treenode* node=t.top();
        t.pop();
        s.push(node);
        if(node->left!=NULL){
          t.push(node->left);
        }
        if(node->right!=NULL){
            t.push(node->right);
        }
    }
    while(!s.empty()){
        Treenode* k=s.top();
        v.push_back(k->val);
        s.pop();
    }
        
    return v;
}


int main(){
    Treenode* node=new Treenode(2);
    node->left=new Treenode(4);
    node->right=new Treenode(3);
    vector<int>k=postorder(node);
    for(auto it:k){
        cout<<it<<endl;
    }
return 0;
}