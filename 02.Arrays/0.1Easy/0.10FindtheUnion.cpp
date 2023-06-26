#include<iostream>
#include<set>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    int arr1[n1];
    for(int i = 0; i < n1; i++){
        cin>>arr1[i];
    }
    int arr2[n2];
    for(int i = 0; i < n2; i++){
        cin>>arr2[i];
    }

    //brute
    set<int>ans;
    for(int i = 0; i < n1; i ++){
        ans.insert(arr1[i]);
    }
    for(int i = 0; i < n2; i ++){
        ans.insert(arr2[i]);
    }
    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}