#include<iostream>
using namespace std;

int main()
{
     int sum, a, b;
     cin>>a;
     sum = 0;
     while (a<0){
         b = a % 10;
         sum = sum + b;
         a = a/10;
     }
     while (a>0){
         b = a % 10;
         sum = sum + b;
         a = a/10;
    }
    cout<<sum<<endl;
}