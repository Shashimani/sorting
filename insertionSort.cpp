#include<iostream>
using namespace std;

void pr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int curr=arr[i];
        int prev=i-1;

        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }

        arr[prev + 1] = curr;
    }
}

int main(){
    int arr[] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);

    cout<<"before sorting:"<<endl;
    pr(arr, n);

    cout<<"After sorting:"<<endl;
    insertionSort(arr, n);
    pr(arr, n);
}