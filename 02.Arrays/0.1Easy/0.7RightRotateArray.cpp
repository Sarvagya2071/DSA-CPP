#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int k;
    cin>>k;
    int t = n;
    int s = k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    //temp array
    int temp[k];
    for(int i = 0; i < n - k; i++){
        temp[i] = arr[t-k];
        t++;
    }
    // //shifting all values to temp 
    for(int i = 0; i < n - k; i++){
        temp[s] = arr[i];
        s++;
    }
    //printing temp
    for(int i = 0; i < n; i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    return 0;
}