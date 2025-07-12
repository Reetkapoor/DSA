#include <iostream>
#include <vector>
using namespace std;

void selectionSort( vector<int> &arr, int n){
    for (int i=0 ; i<n ; i++){
        int minIndex = i;
        for (int j=i+1 ; j<n ; j++){
            if (arr[j]<arr[minIndex]){
                swap(arr[j], arr[minIndex]);
            }
        }
    }
}
int main(){
    vector<int> arr= {5,4,3,2,1};
    int n= arr.size();
    selectionSort(arr,n);
    cout<<"Sorted array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}