// Max of All Subarrays of Size K

#include<iostream>
#include<list>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int i = 0;
    int j = 0;
    list<int> ls;
    vector<int> ans;
    while(j < n){
        //calculation
        while(arr[j] > ls.back() && ls.size() > 0){
            ls.pop_back();
        }
        ls.push_back(arr[j]);

        //maki the window size
        if(j-i+1 < k){
            j++;
        }
        //if subarray reaches the window size 
        if(j-i+1==k){
            //ans calculation
            ans.push_back(ls.front());

            //slide the window
            if(ls.front() == arr[i]){
                ls.pop_front();
            }
            i++;
            j++;
        }
    }
    for(int i = 0 ; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}