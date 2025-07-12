// Finding square root using binary search
// here, our search space is from 0 to key

#include<iostream>
using namespace std;

int findSqrtInt(int key){
    int s=0;
    int e=key;
    int mid= s+(e-s)/2;
    int ans=-1;
    while (s<=e){
        if(mid*mid<key){
            s=mid+1;
            ans=mid;
        }
        else {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
// Finding decimals upto two points using linear search
float findSqrt(int sqrt_int, int target){
    float dec1=0.0;
    float dec2=0.00;
    for (float i=0.0;i<1.0;i+=0.1){
        if((sqrt_int+i)*(sqrt_int+i)<=target){
            dec1=i;
        }
    }
    float new_sqrt = sqrt_int + dec1;
    for (float i=0.00;i<0.1;i+=0.01){
        if((new_sqrt+i)*(new_sqrt+i)<=target){
            dec2=i;
        }
    }
    return new_sqrt+dec2;
}

int main(){
    int key= 6;
    int sqrt_integer= findSqrtInt(key);
    float sqrt=findSqrt(sqrt_integer, key);
    cout<< "Square root of"<<key<< " is"<<sqrt;
}