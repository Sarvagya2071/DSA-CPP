#include<iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int pivet = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= arr[pivet] && i <= high - 1){
            i++;
        }
        while(arr[j] > arr[pivet] && j >= low){
            j--;
        }
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void sort(int arr[], int low, int high){
    if(low < high){
        int pIndex = partition(arr, low, high);
        sort(arr, low, pIndex-1);
        sort(arr, pIndex+1, high);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int low = 0;
    int high = n-1;
    sort(arr, low, high);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}