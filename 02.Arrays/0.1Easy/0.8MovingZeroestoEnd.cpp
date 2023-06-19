#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    //brute
    vector<int> temp;
    for(int i = 0; i<n; i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    for(int i = 0; i < temp.size(); i++){
        arr[i] = temp[i];
    }
    int nz = temp.size();
    for(int i = nz; i<n; i++){
        arr[i] = 0;
    }
    
    
    
    // optimal
    // int j = -1;
    // for(int i = 0; i < n; i++){
    //     if(arr[i] == 0){
    //     j = i;
    //     break;
    //     }
    // }
    // if (j == -1) return 0;
    // for(int i = j+1; i < n; i++){
    //     if(arr[i] != 0){
    //         swap(arr[i],arr[j]);
    //         j++;
    //     }
    // }
    //print resulting array
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}