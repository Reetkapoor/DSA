// An array of number of pages in some books  eg-[10,20,75,45] have to be distributed among m students. Books are to be allocated in contiguous manner so that no student and book is left unallocated. Condtion: number of maximum pages allocated to a student should be minimum. 

//Our search space woruld be from 1 to total number of pages. For every mid we'll check of the answer is possible or not. If possible, then we'll try to find out minimum pages by moving mid to the left. If not possible, then we'll move mid to the right.

#include<iostream>
#include<vector>
using namespace std;

bool isPossible( vector<int> &books, int n, int m, int mid){
    int count=0;

    int pagesAllocated = 0;
    for (int i=0; i<n ; i++){
        if (pagesAllocated+books[i]>mid){
            count++;
            pagesAllocated=0;
        }
        if(count<m && books[i]<=mid){
            pagesAllocated+=books[i];
        }
        else{
            return false;
        }
    }
return true;
}


int minMaxPages(vector<int> books, int n, int m){
    int total=0;
    for (int i=0;i<n;i++){
        total+=books[i];
    }
    int s= 0;
    int e= total;
    int mid= s+(e-s)/2;
    while(s<=e){
        if (isPossible(books, n, m, mid)){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}
int main(){
    vector<int> books = {20, 30, 30, 10};
    int n=books.size();
    int m=2; //number of students
    int ans = minMaxPages(books, n, m);
    cout << "Minimum number of maximum pages alloted to a student = " << ans<< endl;
    return 0;
}

//books=10,20,30,10,20, m=2
//30

//books=50,10,10,10, m=2
//50

