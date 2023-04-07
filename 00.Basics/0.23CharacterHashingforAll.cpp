#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;

    //pre compute
    int hash[256] = {0};    //The 256 storage is the ascii value of alphabets which is pre defined, just learn it.
    for (int i = 0; i < s.size(); i++){     //This is applicable for all lower and upper case
        hash[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;

        //fetch
        cout<<hash[c]<<endl;
    }
    return 0;
}