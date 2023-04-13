#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    //precompute
    unordered_map<long long, long long> mpp;    // does not store in a sorted way
    for (int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        //fetch 
        cout<<mpp[number]<<endl;
    }
    return 0;
}