// #include<iostream>
// #include<vector>
// using namespace std;
// void BubbleSort(vector<int> &arr, int n){
//     bool swapstatus = false;
//     for(int i = 1; i < n; i++){
//         for(int j = 0; j < n - i; j++){
//             if(arr[j]<arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapstatus = true;
//             }
//         }
//         if (swapstatus == false) break;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr;
//     for(int i = 0; i < n; i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//     BubbleSort(arr,n);
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int> &v, int n){
    bool swapstatus = false;
    for (int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if(v[j] < v[j+1]){
                swap(v[j], v[j+1]);
                swapstatus = true;
            }
        }
        if(swapstatus == false) break;
    }
}

void printvector(vector<int> v, int n){
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    printvector(v,n);
    bubblesort(v, n);
    printvector(v,n);
    cout<<"\n";
    return 0;
}