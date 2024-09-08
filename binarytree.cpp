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
void pretraversal(Treenode* root){
    if(root==NULL){
        return ;
    }
    cout<<root->val<<endl;
    pretraversal(root->left);
    pretraversal(root->right);  
}
void posttraversal(Treenode* root){
    if(root==NULL){
        return ;
    }
    posttraversal(root->left);
    posttraversal(root->right); 
    cout<<root->val<<endl; 
}
void intraversal(Treenode* root){
    if(root==NULL){
        return ;
    }
   
    intraversal(root->left);
     cout<<root->val<<endl;
    intraversal(root->right);  
}

Treenode* insert1(Treenode* root,int v){
   queue<Treenode*>q;
   q.push(root);
   while(!q.empty()){
    Treenode* temp=q.front();
    q.pop();
    if(temp==NULL){
        temp=new Treenode(v);
        break;
    }
    if(temp->left==NULL){
        temp->left=new Treenode(v);
        break;
    }else{
        q.push(temp->left);
    }
    if(temp->right==NULL){
        temp->right=new Treenode(v);
        break;
    }else{
        q.push(temp->right);
    }
   }
   return root;

}


int main(){
    Treenode* node=new Treenode(2);
    node->left=new Treenode(4);
    node->right=new Treenode(3);
    pretraversal(node);
    cout<<endl;
    intraversal(node);
    cout<<endl;
    posttraversal(node);
    cout<<endl;
    Treenode* temp=insert1(node,10);
    pretraversal(temp);
   
    int k=5.0e5;
    cout<<k;
     return 0;
}
