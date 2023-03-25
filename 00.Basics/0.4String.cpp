#include<iostream>
using namespace std;

int main()
{
    string A = "Sarvagya";
    int len = A.size();
    A[len-1] = 'E';
    cout<<A[len-1];
    return 0;
}