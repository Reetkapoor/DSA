#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int n){
    for (int i=1; i<n; i++) { //first element is already sorted
        int temp=arr[i];
        int j=i-1;
        for (; j>=0; j--){
            if (arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                //arr[j+1]=temp;  gets skipped if even 0th element is smaller than temp
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main(){
    vector<int> arr = {9, 5, 1, 8, 3, 7, 4, 6, 2};
    int n = arr.size();
    insertionSort(arr, n);
    cout << "Sorted array: \t";
    for(int i : arr){
        cout <<i<<" ";
    }

}


//output
//Sorted array:   1 2 3 4 5 6 7 8 9 