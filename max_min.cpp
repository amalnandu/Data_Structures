#include<bits/stdc++.h>
using namespace std;

void read_array(int size,int arr[]){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}

int max_array(int size,int arr[]){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    return max;
}

int min_array(int size,int arr[]){
int min=arr[0];
for(int i=0;i<size;i++){
    if(arr[i]<=min){
        min=arr[i];
    }
} return min;
}

int main(){
int size;
int arr[100];

cin>>size;
read_array(size,arr);
int max=max_array(size,arr);
int min=min_array(size,arr);
cout<<max<<"\n";
cout<<min<<"\n";


    return 0;
}