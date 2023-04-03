#include<iostream>
using namespace std;

bool solve(int i, int j, string &S){
	    if(i>=j) return true;
	    if(S[i] != S[j]) return false;
	    return solve(i+1, j-1, S);
	}
int main()
{
    string S;
    cin>>S;
    int i = 0;
	int j = S.size()-1;
    cout<<solve(i, j, S);
    return 0;
}