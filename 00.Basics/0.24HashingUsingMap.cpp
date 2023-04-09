#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i  = 0; i < n; i++){
        cin>>arr[i];
    }

    //precompute
    map<long long, long long> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    //iterate in the map to see how map works
    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;   
        
    }
      
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        //fetch
        cout << mpp[number] << endl;
    }
    return 0;
}