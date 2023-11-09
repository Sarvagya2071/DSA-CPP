#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ls;
    for(int i = 1; i*i <= n; i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(int i = 0; i < ls.size(); i++){
        cout<<ls[i]<<" ";
    }
    cout<<endl;
    return 0;
}