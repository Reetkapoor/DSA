//Perform Linear search using recursion

#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    //base case
    if(size==0){
        return 0;
    }
    return arr[0]==key || linearSearch(arr+1,size-1,key);
}

int main(){
    int arr[]={3,4,7,6,1,2,9};
    int size=7;
    int key=0;
    cout<<linearSearch(arr,size,key);
}