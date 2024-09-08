#include<bits/stdc++.h>
using namespace std;

class Stack{
    int size;
    int top;
    int* arr;
    
public:
    Stack(){
       top=-1;
       size=1000;
       arr=new int[size];
    
    }
 void push(int val){
    top++;
    arr[top]=val;

   }
int pop(){
    int k=arr[top];
    top--;
    return k;
}
   int Size(){
    return top+1;

}
   int Top(){
    return arr[top];
   }
    
};


int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int k=s.Top();
    cout<<k;


        
        



}