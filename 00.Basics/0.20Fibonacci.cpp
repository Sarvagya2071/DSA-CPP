#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long> v(n);
    v[0]=v[1]=1;

    for (int i = 2; i <= n-1; i++){
        v[i] = v[i-1] + v[i-2];
    }
    for (int i = 0; i <= n-1; i++){
        cout<<v[i]<<", ";
    }
    return 0;
}