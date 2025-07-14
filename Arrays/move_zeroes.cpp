// Move all the zeroes to the right and preserve the order of the non zero elements

#include<iostream>
using namespace std;

void moveZeroes(int arr[], int n){
    int i=0;
    for (int j=0; j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
    for (int k=0; k<n; k++){
        cout<<arr[k]<<' ';
    }
}

int main(){
    int arr[7]={1,0,5,0,2,3,2};
    moveZeroes(arr,7);
}