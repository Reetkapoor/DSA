//calculate power using recursion

#include<iostream>
using namespace std;

float power(int n,int p){
    if(p==0){
        return 1;
    }
    if(p<0){
        return 1/power(n,-p);
    }
    int half = power(n, p / 2);
    if(p % 2 == 0)
        return half * half;
    else
        return n * half * half;
}

int main(){
    int n=3;
    int p=-3;
    cout<<power(n,p);
}
//time complexity- O(log p)
