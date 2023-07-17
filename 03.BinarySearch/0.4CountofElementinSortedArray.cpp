#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ele;
    cin>>ele;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int start = 0;
    int end = n-1;
    int mid = 0;
    int count = 0;
    int first = -1;
    int last = -1;
    while(start <= end){
        mid = start + (end-start)/2;
        if(arr[mid] == ele){
            first = mid;
            last = mid;
        }
        else if(ele > arr[mid])
            start = mid + 1;
        else if(ele < arr[mid])
            end = mid - 1;
    }
    if(arr[mid] != ele)
        cout<<count<<endl;
    return 0;
}