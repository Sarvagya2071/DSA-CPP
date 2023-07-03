#include<iostream>
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

    //optimal
    int left = 0;
    int right = 0;
    int sum = arr[0];
    int maxlen = 0;
    while(right < n){
        while(left <= right && sum > k){
            sum = sum - arr[left];
            left++;
            if(sum == k){
                maxlen = max(maxlen, right-left+1);
            }
            right++;
            if(right < n){
                sum = sum + arr[right];
            }
        }
    }
    cout<<maxlen<<endl;
    return 0;
}