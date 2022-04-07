#include "bits/stdc++.h"
using namespace  std;

int firstOcc(int arr[1000], int size, int key){

    int start=0;
    int end=size-1;

    int mid = start+((end-start)/2);
    int ans = INT_MIN;

    while(start<=end){
        if(arr[mid]==key){
            ans= mid;
            end = mid-1;
        }else if(key>arr[mid]){
            start =mid+1;
        }else if(key<arr[mid]){
            end =mid-1;
        }
        mid = start+((end-start)/2);
    }

    return ans;
}int lastOcc(int arr[1000], int size, int key){

    int start=0;
    int end=size-1;

    int mid = start+((end-start)/2);
    int ans = INT_MIN;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start =mid+1;
        }else if(key>arr[mid]){
            start =mid+1;
        }else if(key<arr[mid]){
            end =mid-1;
        }
        mid = start+((end-start)/2);
    }

    return ans;
}

int main(){
    int num[1000]={1,2,3,4,5,5,5,5,5,5,5,5,6,6,6,6,6,6,6,6,6,6,6,6,6,7,8};

    cout<<"Fist occurrence : "<<firstOcc(num,27,6)<<endl;
    cout<<"Last occurrence : "<<lastOcc(num,27,6)<<endl;

    int Number=((lastOcc(num,27,6)-firstOcc(num,27,6))+1);
    cout<<"Number of occurrence : "<<Number<<endl;

}
