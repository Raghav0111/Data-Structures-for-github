#include<bits/stdc++.h>
using namespace std;

int floor(int arr[],int n,int ele){
    int start = 0;
    int end  = n-1;
    int res  = 0;
    while(start<=end){
        int mid  = (start+end)/2;
        if(arr[mid]== ele){
            return mid;
        }
        else if(arr[mid]<ele){
            res = arr[mid];
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return res;
}


int main(){
    int arr[] = {1,2,3,4,8,10,10,12,19};
    int n  = sizeof(arr)/sizeof(arr[0]);
    int ele = 5;
    int res  = floor(arr,n,ele);
    cout<<res<<endl;

    return 0;
}