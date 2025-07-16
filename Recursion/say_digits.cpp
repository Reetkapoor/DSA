// for 412 output should be Four One Two.

#include<iostream>
#include<string>
#include<vector>
using namespace std;


void sayDigits(int n, string arr[]){
    //base case
    if(n==0){
        return;
    }
    //processing
    int digit=n%10;
    n=n/10;
    
    //recursive call
    sayDigits(n,arr);
    cout<<arr[digit]<<" ";

}

int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n=412;
    sayDigits(n,arr);
}