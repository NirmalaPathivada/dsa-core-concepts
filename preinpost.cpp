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

void prepostin(Treenode* root){
    vector<int>pre;
    vector<int>in;
    vector<int>post;
    stack<pair<Treenode*,int>>st;
    st.push({root,1});
    while(!st.empty()){
        auto it=st.top();
        st.pop();
        if(it.second==1){
            pre.push_back(it.first->val);
            it.second++;
            st.push(it);
            if(it.first->left!=NULL){
               st.push({it.first->left,1});
            }
        }
        else if(it.second==2){
            in.push_back(it.first->val);
            it.second++;
            st.push(it);
            if(it.first->right!=NULL){
               st.push({it.first->right,1});
            }
        }else{
            post.push_back(it.first->val);
            
        }
    }
    for(auto it:pre){
        cout<<it;
    }
    cout<<endl;
    for(auto it:in){
        cout<<it;
    }
    cout<<endl;
    for(auto it:post){
        cout<<it;
    }


}
int main(){
    Treenode* node=new Treenode(2);
    node->left=new Treenode(4);
    node->right=new Treenode(3);
    prepostin(node);
}