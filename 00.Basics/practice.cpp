#include<iostream>
using namespace std;
int main(){
    char s[10] = {'h','e','l','l','o', '\0'};
    cout<<s<<endl;
    char str[10];
    cin>>str;
    cout<<str<<endl;
    cout<<sizeof(s)<<endl;
    return 0;
}