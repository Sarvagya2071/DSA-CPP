#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count = 0;
    for(int i = 1; i*i<=n; i++){
        if(n%i==0){
            count++;
            if((n/i)!=i){
                count++;
            }
        }
    }
            if(count == 2){
                cout<<"Yes its a prime number";
            }
            else{
            cout << "Not a Prime Number";
        }
    return 0;
}