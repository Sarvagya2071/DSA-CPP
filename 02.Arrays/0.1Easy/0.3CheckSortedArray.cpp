#include<iostream>
using namespace std;

int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int flag = 0;
    for(int i = 0; i < n-1; i++){
        if (arr[i] > arr[i+1]){
            cout<<"Not Sorted"<<endl;
            flag = 1; 
            break;
        }
    }
    if (flag == 0) cout<<"Sorted"<<endl;
    return 0;
}