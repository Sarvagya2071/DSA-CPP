//Count the Occurence of Anagram

#include<iostream>
#include<map>
#include<list>
using namespace std;

int main(){
    string txt;
    cin>>txt;
    string pat;
    cin>>pat;
    int i = 0;
    int j = 0;
    int k = pat.length();
    int ans = 0;
    unordered_map<char,int> mp;
    for(int i = 0; i<k; i++){
        mp[pat[i]]++;
    }
    int count = mp.size();
    
    while(j<txt.length()){

        //calculation
        if(mp.find(txt[j]) != mp.end()){
            mp[txt[j]]--;
            if(mp[txt[j]] == 0) count--;
        }

        if(j-i+1 < k){
            j++;
        }

        //window size gets equal to k
        else if(j-i+1 == k){
            if(count == 0){  
                ans++;
            }
            
            //removeing ith value while sliding 
            if(mp.find(txt[i]) != mp.end()){
                mp[txt[i]]++;
                if(mp[txt[i]] == 1){
                    count++;
                }
            }
            //sliding the window
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
    return 0;
}