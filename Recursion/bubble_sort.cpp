//Perform bubble sort using recursion

#include<iostream>
using namespace std;

void sortArray(int arr[], int n){
    if (n==1){
        return;
    }
    for (int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
    }
    sortArray(arr, n-1);
}

int main(){
    int arr[]={6,8,1,3,0};
    sortArray(arr,5);
    for (int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}