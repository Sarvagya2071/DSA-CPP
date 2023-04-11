#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    set<long long> st;
    for(int i : arr){
        st.insert(i);
    }
    int a = st.size();
    cout<<(a*(a-1))/2;
    return 0;
}