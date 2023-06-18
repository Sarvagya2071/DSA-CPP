#include<iostream>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    //temp array
    int temp[k];
    for(int i = n-k; i < n; i++){
        temp[i] = arr[i];
    }
    //shifting
    // for(int i = n - k; i < n; i++){
    //     arr[n-k] = arr[i];
    // }
    // //put back temp
    // for(int i = 0; i < n-k; i++){
    //     arr[i] = temp[i];
    // }
    for(int i = 0; i < n; i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    return 0;
}