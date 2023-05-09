#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i <= high; i++){ 
        arr[i] = temp[i-low];
    }
}

void sort(int arr[], int low, int high){
    if(low >= high) return;
    int mid = (low+high)/2;
    sort(arr,low,mid);
    sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){ 
        cin>>arr[i];
    }
    int low = 0;
    int high = n - 1;
    sort(arr, low, high);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}