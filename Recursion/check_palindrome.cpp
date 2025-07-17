//check palindrome

#include<iostream>
using namespace std;

bool isPalindrome(string str,int s,int e){
    //base case
    if (str[s]!=str[e]){
        return false;
    }
    if(s<=e){
        return true;
    }
    return isPalindrome(str,s+1,e-1);
}

int main(){
    string str="123321";
    int s=0;
    int e=str.length()-1;
    cout<<isPalindrome(str,s,e)<<endl;
}