// Number of Times Sorted Array is Rotated
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int start = 0;
    int end = n-1;
    if(arr[start] <= arr[end]){
        cout<<start<<endl;
        return 0;
    }
    
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[start] <= arr[end]){
            cout<<start<<endl;
            break;
        }
        else if(arr[start] > arr[mid]){
            end = mid;
        } 
        else if(arr[mid] > arr[end]) {
            start = mid+1;
        }
    }
    return 0;
}