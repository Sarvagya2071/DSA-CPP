#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int k = 0;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] != arr[i+1]){
            k++;
        }
    }
    cout<<k<<endl;
    return 0;
}