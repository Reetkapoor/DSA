// Finding Pivot in a sorted and rotated array using binary search
// Rotated sorted array: arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3, 4}

// Explaination: This array can be divided into two lines, first is from arr[0] to arr[pivot-1] and the second is from arr[pivot] to arr[n-1]. If mid lies on the first line, then arr[mid]>arr[0], then we need to search on the right, otherwise it lies on the second line, and we neem to search on the left

#include <iostream>
#include <vector>
using namespace std;

int findPivotIndex(vector<int> arr, int n){
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
int main(){
    vector<int> arr = {5, 6, 7, 8, 9, 10, 1, 2, 3, 4};
    int n = arr.size();
    int pivot = findPivotIndex(arr, n);
    cout << "Pivot Index: " << pivot << endl;
    return 0;
}