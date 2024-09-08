#include<bits/stdc++.h>
using namespace std;

void selectionsort1(vector<int>v){
    int n=v.size();
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i+1;j<n;j--){
            if(v[j]<v[mini]){
                mini=j;
            }
        }
        int temp=v[mini];
        v[mini]=v[i];
        v[i]=temp;
    }
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int>v={13,6,3,28,9,10};
    selectionsort1(v);
    return 0;
}