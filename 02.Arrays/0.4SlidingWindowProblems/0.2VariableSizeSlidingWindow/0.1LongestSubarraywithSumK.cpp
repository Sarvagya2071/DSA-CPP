// Longes tSubarray with Sum K (only positive number in array)

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

    int i = 0;
    int j = 0;
    int sum = 0;
    int len = 0;
    while(j < n){
        sum = sum + arr[j];
        if(sum < k){
            j++;
        }
        else if(sum == k){
            len = max(len, j-i+1);
            j++;
        }
        else if(sum > k){
            while(sum > k){
                sum = sum - arr[i];
                i++;
            }
            j++;
            
        }
    }
    cout<<len<<endl;
    return 0;
}