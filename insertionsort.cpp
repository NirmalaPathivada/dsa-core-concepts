#include<bits/stdc++.h>
using namespace std;

void insertionsort1(vector<int>v){
    int n=v.size();
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(v[j]>v[j-1]){
                break;
            }else{
                int temp=v[j-1];
                v[j-1]=v[j];
                v[j]=temp;
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
int main(){
    vector<int>v={13,6,3,28,9,10};
    insertionsort1(v);
    return 0;
}
