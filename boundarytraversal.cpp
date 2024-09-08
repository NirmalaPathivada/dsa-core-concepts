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
bool isleafnode(Treenode* root){
  if(root->left==NULL && root->right==NULL){
    return true;
  }
  return false;
}

void leaft(Treenode* root,vector<int>&v){
  if(isleafnode(root))return ;
  root=root->left;
  while(root){
    v.push_back(root->val);
    if(root->left) root=root->left;
    else root=root->right;
  }

}

void rightt(Treenode* root,vector<int>&v){
  if(isleafnode(root))return ;
  vector<int>temp;
  root=root->right;
  while(root){
    temp.push_back(root->val);
    if(root->right) root=root->right;
    else root=root->left;
  }
  for(int i=temp.size()-1;i>=0;i--){
    v.push_back(temp[i]);
  }

}

void leavt(Treenode* root,vector<int>&v){
  if(isleafnode(root)){
    v.push_back(root->val);
    return;
  }
  if(root->left) {
    leavt(root->left,v);
  }
  else{
    leavt(root->right,v);
  }
     
}


int main(){
    Treenode* root=new Treenode(4);
    root->left=new Treenode(3);
    root->right=new Treenode(1);
    root->left->left=new Treenode(5);
    root->right->left=new Treenode(6);
    root->left->left->left=new Treenode(9);
    root->right->left->right=new Treenode(7);
    vector<int>n;
    n.push_back(root->val);
    leaft(root,n);
    leavt(root,n);
    rightt(root,n);
  for(auto it:n){
    cout<<it;
  }
  return 0;


}