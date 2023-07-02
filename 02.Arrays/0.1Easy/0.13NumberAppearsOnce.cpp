#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    //better
    map<long long, int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second == 1){
            cout<<it.first<<endl;
        }
    }

    // //optimal
    // int xorr = 0;
    // for(int i = 0; i < n; i++){
    //     xorr = xorr^arr[i];
    // }
    // cout<<xorr<<endl;

    return 0;
}