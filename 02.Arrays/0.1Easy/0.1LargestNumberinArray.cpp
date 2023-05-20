#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    int LargestNumber = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > LargestNumber){
            LargestNumber = arr[i];
        }
    }
    cout << LargestNumber<<endl;
    return 0;
}