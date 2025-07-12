//Finding the first and last occurrence of a given element in a sorted array using binary search.
// Problem is divided into two parts: finding the first occurrence and last occurrence.

#include <iostream>
#include <vector>
using namespace std;

int binarySearchFirst(vector<int> &arr, int n, int target){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while (s<=e){
        if (arr[mid]<target){
            s=mid+1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            if (arr[mid-1]==target){
                e=mid-1;
            }
            else{
                return mid;
            }
        }
        mid = s+(e-s)/2;
    }
    return 0;
}

int binarySearchLast(vector<int> &arr, int n, int target){
    int s=0;
    int e= n-1;
    int mid = s+(e-s)/2;
    while (s<=e){
        if (arr[mid]<target){
            s=mid+1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            if (arr[mid+1]==target){
                s=mid+1;
            }
            else{
                return mid;
            }
        }
        mid= s+(e-s)/2;
    }
    return 0;
}
int main(){

    vector<int> arr = {-1,0,1,2,3,3,3,4,4,5,5,5,5,7};
    int n = arr.size();
    int target = 5;
    int firstOcc = binarySearchFirst(arr,n,target);
    int lastOcc = binarySearchLast(arr, n, target);
    cout<<"First occurrence of "<<target<<" is at index "<<firstOcc<<endl;
    cout<<"Last occurrence of "<<target<<" is at index "<<lastOcc<<endl;
    return 0;
}