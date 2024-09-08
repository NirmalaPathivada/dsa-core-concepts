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

vector<int> inorder(Treenode* root){
    stack<Treenode*>st;
    vector<int>v;
    Treenode* temp=root;
   while(true){
    if(temp!=NULL){
        st.push(temp);
        temp=temp->left;
    }else{
        if(st.empty()){
            break;
        }
        temp=st.top();
        st.pop();
        v.push_back(temp->val);
        temp=temp->right;
    }
   }
   return v;

}
int main(){
Treenode* node=new Treenode(2);
    node->left=new Treenode(4);
    node->right=new Treenode(3);
   vector<int>g= inorder(node);
   for(auto it:g){
    cout<<it<<endl;
   }
   return 0;

}