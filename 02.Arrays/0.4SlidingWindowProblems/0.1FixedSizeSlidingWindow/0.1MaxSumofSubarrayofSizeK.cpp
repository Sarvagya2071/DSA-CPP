// Max Sum of Subarray of Size K

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

    //better
    int i = 0;
    int j = 0;
    int sum = 0;
    int smax = 0;
    while(j < n){
        //taking initial sum
        sum = sum + arr[j];

        // if size of window is less than asked
        if(j-i+1 < k)
            j++;

        // when the size is same taking the max sum
        else{
            smax = max(smax, sum);

            //removing the calculation for i that will be left out while we slide the window 
            sum = sum - arr[i];

            //maintaining the size of window => moving the window one step ahead
            i++;
            j++;
        }
    }
    
    cout<<smax<<endl;
    return 0;
}