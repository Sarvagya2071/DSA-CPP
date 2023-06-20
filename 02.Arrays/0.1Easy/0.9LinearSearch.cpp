#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    int flag = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == k){
            flag = 1;
            cout<<"Got it at "<<i<<endl;
            break;
        }
    }
    if (flag == 0){
        cout<<"Not such element"<<endl;
    }
    return 0;
}