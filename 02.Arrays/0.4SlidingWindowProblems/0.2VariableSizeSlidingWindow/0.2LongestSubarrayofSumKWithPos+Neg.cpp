// Longest Subarray of Sum K With Positive + Negative elements in array

#include<iostream>
#include<map>
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

    map<int, int> preSum;
    int sum = 0;
    int maxlen = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
        if(sum == k){
            maxlen = max(maxlen, i+1);
        }
        int rem = sum - k;
        if(preSum.find(rem) != preSum.end()){
            int len = i - preSum[rem];
            maxlen = max(len, maxlen);
        }
        if(preSum.find(sum) == preSum.end()){
            preSum[sum] = i;
        }
    }
    cout<<maxlen<<endl;
    return 0;
}