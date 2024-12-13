#include<bits/stdc++.h>
using namespace std;

class heap{
    int size;
    int cap;
    int* arr;
public:
 heap(int capi){
     size=0;
     arr=new int[capi];
     cap=capi;
 }
 //to insert element into heap;
 void insert(int k){
     if(size==cap){
         cout<<"cant insert";
         return;
     }
     size++;
     arr[size-1]=k;
     int i=size-1;
    while(i>0 && arr[i]>arr[(i-1)/2]){
        swap(arr[i],arr[(i-1)/2]);
        i=i/2;
    }
 }
 // to remove element from heap based on priority
 void extract(){
     if(size==0){
         cout<<"heap is empty";
     }
     arr[0]=arr[size-1];
     size--;
     heapify(0);
 }
 // to print peek element 
 void peek(){
     if(size==0){
         cout<<"no element";
         return ;
     }
     cout<<arr[0];
 }
 //maintain the heap rule
 void heapify(int i){
     int larg=i;
     int left=2*i+1;
     int righ=2*i+2;
     if(left<size && arr[left]>arr[larg]){
         larg=left;
     }
     if(righ<size && arr[righ]>arr[larg]){
         larg=righ;
     }
     if(larg!=i){
         swap(arr[i],arr[larg]);
         heapify(larg);
     }
 }
 void increase(int i,int newval){
     if(size==0){
         cout<<"element not exist";
     }
     arr[i]=newval;
     while(i>0 && arr[i]>arr[(i-1)/2]){
         swap(arr[i],arr[(i-1)/2]);
         i=(i-1)/2;
     }
 }
 void printheap(){
     for(int i=0;i<size;i++){
         cout<<arr[i];
     }
 }
 void delte(int i){
     if(i<0 && i>size){
         cout<<"invalid index";
     }
     increase(i,20);
     extract();
 }
};
int main(){
    heap h(5);
    h.insert(1);
    h.insert(6);
    h.insert(3);
    h.insert(10);
    h.printheap();
    h.delte(2);
    h.printheap();
}