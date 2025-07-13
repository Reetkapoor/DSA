// Reverse an array

 #include<iostream>
 using namespace std;

// void reverseArray(char arr[], int n){
//     for (int i=0; i<n/2; i++){
//         swap(arr[i], arr[n-i-1]);
//     }
//     for (int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

//Better alternative:
void reverseArray(char arr[], int n){
    int s=0; 
    int e= n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    char arr[]={'a','b','c','d','e'};
    int n= sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,n);
}