#include <iostream>
using namespace std;

void solve(long long N, long long &sum){
    if(N==0) return;
    solve(N-1, sum);
    sum = sum + N*N*N;
}

int main()
{
    long long N;
    cin>>N;
    long long sum = 0;
    solve(N, sum);
    cout<<sum<<endl;
}