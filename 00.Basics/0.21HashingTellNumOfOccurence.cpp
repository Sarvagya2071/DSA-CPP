#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }

    //precompute or pre calculate
    int hash[15] = {0};
    for(int i = 0; i<n; i++){
        hash[arr[i]] += 1;      // go to the index of aar[i] and update hash
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        
        //fetch
        cout<<hash[number]<<endl;
        
    }
    return 0;
}