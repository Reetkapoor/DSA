// return sum of all the elements in the array using recursion

#include<iostream>
using namespace std;

int findSum(int arr[],int size){
    //base case
    if(size==0){
        return 0;
    }
    int sum = arr[0]+findSum(arr+1, size-1);
    return sum;
}

int main(){
    int arr[]={3,5,7,2,9,1};
    int size=6;
    cout<<findSum(arr,size);
}