#include<iostream>
#include<vector>
using namespace std;
void bubblesortascending(vector<int> &arr, int n){
    bool swapstatus = false;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapstatus = true;
            }
        }
        if (swapstatus == false) break;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    bubblesortascending(arr, n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}