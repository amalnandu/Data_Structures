#include<bits/stdc++.h>
using namespace std;

void read_array(int size,int arr[]){
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}

void sort_array_asc(int size, int arr[]){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]>arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
}


void sort_array_desc(int size, int arr[]){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
}

void print_array(int size, int arr[]){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";

    }
}


int main(){
int size, k;

cin>>size;
int arr[size];
read_array(size,arr);
cout<<"Enter the kth value";
cin>>k;
sort_array_desc(size,arr);
print_array(size,arr); cout<<"\n";
cout<<arr[k-1]<<"  \n"; 
sort_array_asc(size,arr);
cout<<arr[k-1];

    return 0;
}