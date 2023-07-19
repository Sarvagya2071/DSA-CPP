#include<iostream>
using namespace std;

int so(int arr[], int n, int ele){
    int start = 0;
    int end = n-1;
    int mid = 0;
    int last = -1;
    while(start <= end){
        mid = start +(end-start)/2;
        if(mid[arr] == ele){
            last = mid;
            start = mid+1;
        }
        else if(ele < arr[mid]){
            end = mid-1;
        }
        else if(ele > arr[mid]){
            start = mid+1;
        }
    }
    return last;   
}

int fo(int arr[], int n, int ele){
    int start = 0;
    int end = n-1;
    int mid = 0;
    int first = -1;
    while(start <= end){
        mid = start +(end-start)/2;
        if(mid[arr] == ele){
            first = mid;
            end = mid-1;
        }
        else if(ele < arr[mid]){
            end = mid-1;
        }
        else if(ele > arr[mid]){
            start = mid+1;
        }
    }
    return first;   
}

int main(){
    int n;
    cin>>n;
    int ele;
    cin>>ele;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int count = 0;
    fo(arr, n, ele);
    so(arr, n, ele);
    count = so(arr, n, ele) - fo(arr, n, ele) + 1;
    cout<<count<<endl; 
    return 0;
}