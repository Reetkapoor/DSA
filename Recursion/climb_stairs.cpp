#include<iostream>
using namespace std;

int steps(int n){
    //base case
    if (n<0){
        return 0;
    }
    if (n==0){
        return 1;
    }
    int ans = steps(n-1)+steps(n-2);
    return ans;
}
int main(){
    int n=5;
    cout<<steps( n);
}