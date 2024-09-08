#include<bits/stdc++.h>
using namespace std;

class Queue{
    int maxsize;
    int* arr;
    int curr;
    int front;
    int rare;
    public:
    Queue(){
        arr=new int(16);
         front=-1;
         rare=-1;
         curr=0;
    }
    Queue(int maxsize){
       (*this).maxsize=maxsize;
       arr=new int[maxsize];
       front=-1;
       rare=-1;
       curr=0;
    }
    void Push(int val){
        if(curr==maxsize){
            cout<<"queue filled";
        }
        if(rare==-1){
          rare=0;
          front=0;
          arr[rare]=val;
        }else{
        rare=(rare+1)%maxsize;
        arr[rare]=val;
        
        }
        curr++;
    }
    int  pop(){
       if(curr==0){
        cout<<"empty";
      }
      int popp=arr[front];
      front=(front+1)%maxsize;
      curr--;
      return popp;
    }
};
int main(){
    Queue q;
    q.Push(10);
    q.Push(20);
    q.Push(30);
    q.Push(30);
int k=q.pop();
cout<<k;
    


}