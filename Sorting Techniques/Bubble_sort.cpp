#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr , int n){
    for (int i=1; i<n; i++){
        bool swapped = false;
        for (int j=1; j<n-i+1; j++){
            if (arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                swapped=true;
            }
            else{
                continue;
            }
        }
        if (swapped == false){
            break;
        }
    }
}

int main(){
    vector<int> arr= {5,4,3,2,1};
    int n= arr.size();
    bubbleSort(arr,n);
    cout<<"Sorted array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}