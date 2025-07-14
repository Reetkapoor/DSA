// Rotate an array
// Hint: Property of % operator is, %n will have a range of (0,(n-1))

#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int> &arr, int n, int k){
    vector<int> temp(n);
     for (int i=0; i<n; i++){
        temp[(i+k)%n]=arr[i];
     }
     //copy temp to arr vector
     arr=temp;
    cout<<"Rotated array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<' ';
     }
}

int main(){
    vector<int> arr= {1,2,3,4,5};
    int k=3;
    rotateArray(arr, arr.size(),k);

}