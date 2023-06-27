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
    // set<int>ans;
    // for(int i = 0; i < n1; i ++){
    //     ans.insert(arr1[i]);
    // }
    // for(int i = 0; i < n2; i ++){
    //     ans.insert(arr2[i]);
    // }
    // for(auto it : ans){
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    //optimal
    vector<int> ans;
    int i = 0;
    int j = 0;
    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            if(ans.size() == 0 || ans.back() != arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(ans.size() == 0 || ans.back() != arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }
    //if elements are still left in array
    while(i < n1){
        if(ans.size() == 0 || ans.back() != arr1[i]){
            ans.push_back(arr1[i]);
        }
        i++;
    }
    while(j < n2){
        if(ans.size() == 0 || ans.back() != arr2[j]){
            ans.push_back(arr2[j]);
        }
        j++;
    }
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}