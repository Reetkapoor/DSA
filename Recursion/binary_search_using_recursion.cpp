// Perform Binary search using recursion

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &arr, int s,int e, int key){
    int mid= s+(e-s)/2;
    //base case
    //element not found
    if(s>e){
        return -1;
    }
    //element found
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){
        return binarySearch(arr, mid+1, e, key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }
}


int main(){
    vector<int> arr={2,4,6,8,9};
    int s=0;
    int e=arr.size()-1;
    int key=2;

    cout<<binarySearch(arr,s,e,key);
}