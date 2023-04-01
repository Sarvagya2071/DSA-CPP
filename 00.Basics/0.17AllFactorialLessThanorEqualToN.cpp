#include<iostream>
#include<vector>
using namespace std;

int main()
{
    long long N;
    cin>>N;
    if(N==1) cout<<1;
    if(N==2) cout<<1<<2;
    long long temp = 1;
    long long prod = 1;
    vector<long long> list;
    while(prod<N){
        prod = prod * temp;
        list.push_back(prod);
        temp++;
    }
    list.pop_back();
    for(int i = 0; i<list.size(); i++){
        cout<<list[i]<<" ";
    }
    return 0;
}