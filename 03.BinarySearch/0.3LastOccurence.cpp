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
    int last = -1;
    while(start <= end){
        int mid = start + (end-start)/2;

        if(k == arr[mid]){
            last = mid;
            start = mid + 1;
        }
        else if(k < arr[mid]){
            end = mid - 1;
        }
        else if(k > arr[mid]){
            start = mid + 1;
        }
    }
    cout<<last<<endl;
    return 0;
}