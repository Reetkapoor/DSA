// Reverse a string using recursion

//string to be passed as a reference variable to make changes in the original string rather than applying changes in just a copy of it
#include<iostream>
using namespace std;

void reverseStr(string& str,int i,int j){
    //base case
    if(i>j){
        return;
    }
    swap(str[i++],str[j--]);
    reverseStr(str,i,j);
}

int main(){
    string str="abcde";
    int i=0;
    int j=str.size()-1;
    reverseStr(str,i,j);
    cout<<str<<endl;
    
}