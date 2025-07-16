// Check if an array is sorted or not using recursion.

#include<iostream>
#include<vector>
using namespace std;

bool isSorted(int arr[], int size){
    //base case
    if(size==1 || size==0){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart= isSorted(arr+1,size-1);
        return remainingPart;
    }
}

int main(){
    int arr[]={2,4,5,6,8};
    int size=5;
    cout<<isSorted(arr,size);
}