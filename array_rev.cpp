#include<bits/stdc++.h>
using namespace std;



void rev_array(int size,int arr[]){
    int temp,start,end;
    start=0;
    end=size-1;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++; end--; 
    }
}


void print_array(int size,int arr[]){
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int ar[]={
        2,4,5,7,9
    };
 
rev_array(5,ar);
print_array(5,ar);

return 0;
}