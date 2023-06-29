#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i = 0; i < n-1; i++){
        cin>>arr[i];
    }
    //better
    int hash[n + 1];
    //yeh wala loop is liye kyuki mera xcode problem de raha h, varna hash[n+1] = {0}; se sab initialize kardu
    for(int i = 0; i < n+1; i++){
        hash[i] = 0;
    }
    for(int i = 0; i < n-1; i++){
        hash[arr[i]] = 1;
    }
    for(int i = 1; i <=n; i++){
        if(hash[i] == 0)
        cout<<i<<endl;
    }

    //optimal
    // int ans = 0;
    // int sum = (n*(n+1))/2;
    // int diff = 0;
    // for(int i = 0; i < n-1; i++){
    //     diff = diff + arr[i];
    // }
    // ans = sum - diff;
    // cout<<ans<<endl;
    return 0;
}