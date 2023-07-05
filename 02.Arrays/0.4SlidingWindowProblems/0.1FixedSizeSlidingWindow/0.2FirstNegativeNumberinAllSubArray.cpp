// First Negative Number in All SubArray

#include<iostream>
#include<list>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    //better
    int i = 0;
    int j = 0;
    vector<int> v;
    list<int> ls;
    while(j < n){

        //taking negative elements of array to the list
        if(arr[j] < 0){
            ls.push_back(arr[j]);
        }

        // if size of window is less than asked
        if(j-i+1 < k){
            j++;
        }

        // if size of window is less than asked
        else if(j - i +1 == k){

            // if list is empty
            if(ls.size() == 0){
                v.push_back(0);
            }
            else{
                v.push_back(ls.front());

                //if starting element of list and array is same, then remove the front (first) element of the list
                if(arr[i] == ls.front()){
                    ls.pop_front();
                }
            }
            
            //sliding window
            i++;
            j++;
        }
    }
    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}