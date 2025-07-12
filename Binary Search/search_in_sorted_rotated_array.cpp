//Finding target value in a sorted and rotated array using binary search.
// This problem is divided into two halfs, finding the pivot index and then applying binary search to find the element

#include <iostream>
#include <vector>
using namespace std;

int findPivotIndex(vector<int> &arr, int n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while (s<e){
        if (arr[mid]>arr[0]){
            s=mid+1;
        }
        else {
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return mid;
}

int binarySearch(vector<int> &arr, int n, int start, int end, int target){
        int s=start;
        int e=end;
        int mid = s+(e-s)/2;
        while (s<=e){
            if(arr[mid]<target){
                s=mid+1;
            }
            else if (arr[mid]>target){
                e=mid-1;
            }
            else{
                return mid;
            }
            mid = s+(e-s)/2;
        }
        return -1;
}
int searchRotatedArray(vector<int> &arr, int n,int pivot, int target){
    if (target>=arr[0]){
        return binarySearch(arr, n, 0, pivot-1, target);
    }
    else{
        return binarySearch(arr, n, pivot, n-1, target);
    }
}

int main(){
    vector<int> arr = {1,2,3,9,8,0,-3};
    int target = 1;
    int n = arr.size();
    int pivot= findPivotIndex(arr,n);
    cout << "Pivot index: " << pivot << endl;
    int result = searchRotatedArray(arr, n, pivot, target);
    cout << "Element found at index: " << result << endl;
}