#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    //pre compute
    int hash[26] = {0};     //The 26 storage is made due to the the ascii value of alphabets which is pre defined, just learn it.
    for(int i = 0; i < s.size(); i++){      //Just for lower cases
        hash[s[i] - 'a']++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;

        //fetch
        cout<<hash[c - 'a']<<endl;
    }
    return 0;
}