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
    while(start <= end){
        mid = start + (end-start)/2;
        if(arr[mid] == ele){
            cout<<mid<<endl;
            break;
        }
        else if(ele > arr[mid])
            start = mid + 1;
        else if(ele < arr[mid])
            end = mid - 1;
    }
    if(arr[mid] != ele)
        cout<<"-1"<<endl;
    return 0;
}