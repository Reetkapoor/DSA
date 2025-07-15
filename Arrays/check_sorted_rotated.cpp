// Check if an Array is Sorted and Rotated.
// case1- sorted
// case2- sorted and rotated
// case3- random

#include<iostream>
#include<vector>
using namespace std;

bool checkSortedRotated(vector<int> &arr, int n){
    int count=0;
    for(int i=1; i<n;i++){
        if (arr[i-1]>arr[i]){
            count++;
        }
    }
    if (arr[n-1]>arr[0]){
        count++;
    }
    return count<=1;
}

int main(){
    vector<int> arr= {5,6,7,1,2,3};
    cout<<checkSortedRotated(arr,arr.size());
}

//1,1,1,1
//true