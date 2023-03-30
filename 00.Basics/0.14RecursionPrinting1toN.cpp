#include<iostream>
using namespace std;

void printGFG(int n){
    if(n==0) return;
    printGFG(n-1);
    cout<<"GFG ";
}

int main(){
    int n;
    cin>>n;
    printGFG(n);
    return 0;
}