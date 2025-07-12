// Finding the maximum element index in an mountain array using  binary search.
// The mountain array is defined as an array that is first increasing and then decreasing.

// Explaination: The array can be divided into two parts, increasing and deceasing. The maximum element is the peak of the mountain.  If the mid lies on increasing line then , arr[mid] < arr[mid+1], so we search in the right half. Otherwise, the mid lies on decreasing line, so we search in the left half.

#include <iostream>
#include <vector>
using namespace std;

int findPeakIndex(vector<int> &arr, int n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while (s<e){
        if (arr[mid] < arr[mid+1]){
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
    vector<int> arr = {1, 3, 5, 7, 9, 8, 3, -1, -3};
    int n= arr.size();
    int peak = findPeakIndex(arr, n);
    cout << "Peak element index: " << peak;
    return 0;
}