// Find an Element in Rotated Sorted Array
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(k == arr[mid]){
            cout<<mid<<endl;
            break;
        }
        if(arr[start] < arr[mid]){
            if(k <= arr[mid] && k >= arr[start])
                end = mid-1;
            else
                start = mid+1;
        }
        else{
            if(k <= arr[end] && k >= arr[mid])
                start = mid+1;
            else
                end = mid-1;
        }
    }
    return 0;
}