#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i=0; i<n-1; i++){
        int minIdx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx =j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

void arrPrint(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {5,4,1,3,2};

    int n = sizeof(arr)/sizeof(int);

    cout<<"Before Sorting"<<endl;
    arrPrint(arr, n);
    selectionSort(arr, n);

    cout<<"After Sorting"<<endl;
    arrPrint(arr, n);


}