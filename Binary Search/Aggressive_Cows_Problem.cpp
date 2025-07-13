// Position of n stalls are given in an array, we ned to place k cows in the stalls such that the minimum distance between any two cows is as large as possible.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &stalls, int n, int k, int mid){
        int cowCount= 1;
        int lastCowPlaced = 0;
        for (int i=1; i<n; i++){
            if (stalls[i]-stalls[lastCowPlaced]>=mid){
                lastCowPlaced=i;
                cowCount++;
                if (cowCount==k){
                    return true;
                }
            }
            else{
                continue;
            }

        }
        return false;
}

int maxMinDistance(vector<int> &stalls, int n, int k){
    int s=1;
    sort(stalls.begin(),stalls.end());
    int e = stalls[n-1]-stalls[0];
    int mid= s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if (isPossible(stalls, n, k, mid)){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> stalls = {9, 1, 8 , 2, 4};
    int n= stalls.size();
    int k = 3;
    maxMinDistance(stalls, n, k);
    int ans=  maxMinDistance(stalls ,n, k);
    cout<<"Maximum minimum distance that can be between the cows is: "<<ans<<endl;
}