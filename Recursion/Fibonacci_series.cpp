#include<iostream>
using namespace std;

int fib(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans= fib(n-1)+fib(n-2);
    return ans;
}


int main(){
    int n=8;
    cout<< fib(n);
    
}
//finonacci series- 0,1,1,2,3,5,8,13,21....
//output is 21.