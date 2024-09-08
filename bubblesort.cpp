#include<bits/stdc++.h>
using namespace std;

void bubblesort1(vector<int>v){
  int n=v.size();
  for(int i=n-1;i>=0;i--){
    for(int j=0;j<=i-1;j++){
        if(v[j]>v[j+1]){
            int temp=v[j+1];
            v[j+1]=v[j];
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
    bubblesort1(v);
    return 0;
}


