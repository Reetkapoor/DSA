// return sum of array by manual addition method.

#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> &ans){
    int s=0;
    int e=ans.size()-1;
    while(s<=e){
        swap(ans[s++],ans[e--]);
    }
    return ans;
}
vector<int> addArrays(vector<int> &arr1, vector<int> &arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int> ans;
    int i=n-1;
    int j=m-1;
    int carry=0;
    while(i>=0 && j>=0){
        int val1=arr1[i];
        int val2=arr2[j];
        int sum=val1+val2+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    //case 1
    while(i>=0){
        int sum = arr1[i]+carry;
        carry= sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    //case 2
    while(j>=0){
        int sum= arr2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    //case 3
    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    return reverse(ans);
}



void print(vector<int> &ans, int n){
    for (int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    vector<int> arr1= {1,9,9};
    vector<int> arr2= {1,9};
    vector<int> ans=addArrays(arr1,arr2);
    print(ans, ans.size());
}

//218