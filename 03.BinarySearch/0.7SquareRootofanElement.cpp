#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int start = 1;
    int end = n;
    int ans = 0;
    while(start <= end){
        int mid = start + (end-start)/2;
        int k = mid*mid;
        if(k == n){
            ans = mid;
            cout<<mid<<endl;
            return 0;
        }
        else if(k > n){
            end = mid-1;
        }
        else if(k < n){
            start = mid+1;
        }
    }
    cout<<end<<endl;
    return 0;
    
}