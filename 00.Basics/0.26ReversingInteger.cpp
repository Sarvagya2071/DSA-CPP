#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    long long revN = 0;
        while(x!=0){
            int ld = x%10;
            revN = (revN * 10) + ld;
            x = x / 10;
        }
        if(revN > INT_MAX || revN < INT_MIN) cout << "0";
        cout<<revN<<endl;
    return 0;
}