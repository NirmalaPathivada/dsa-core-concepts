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
vector<vector<int>> levelord(Treenode* node){
    vector<vector<int>>ans;
    queue<Treenode*>q;
    q.push(node);
    while(q.size()){
         vector<int>lev;
         int size=q.size();
         for(int i=0;i<size;i++){
            Treenode* temp=q.front();
            q.pop();
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
            lev.push_back(temp->val);

         }
         ans.push_back(lev);
    }
    return ans;
}
int main(){
    Treenode* root=new Treenode(1);
    root->left=new Treenode(4);
    root->right=new Treenode(3);
    root->left->left=new Treenode(5);
    root->left->right=new Treenode(6);
    vector<vector<int>> v=levelord(root);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
    return 0;
}
