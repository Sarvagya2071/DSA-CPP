// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int> &v, int s, int mid, int e, vector<int> &temp){

//     int r1 = s;
//     int r2 = mid+1;
//     int w = s;

//     while(r1 <= mid || r2 <= e){
//         if(r1>mid){
//             temp[w++] = v[r2++];
//         }
//         else if(r2>e){
//             temp[w++] = v[r1++];
//         }
//         else{
//             temp[w++] = v[r1]>v[r2] ? v[r2++] : v[r1++];
//         }
//     }
//     //copy back elements from temp into v
//     for(int w = s; w<=e; w++){
//         v[w] = temp[w];
//     }
// }
// void mergeSort(vector<int> &v, int s, int e, vector<int> &temp){
//     if(s>e) return;

//     int mid = s + (e-s)/2;

//     mergeSort(v, 0, mid, temp);
//     mergeSort(v, mid+1, e, temp);

//     merge(v, s, mid, e, temp);
// }
// int main(){
    // vector<int> v = {7,5,6,1,2,4,8};
    // vector<int> temp(v);
    // mergeSort(v, 0, v.size()-1, temp);
    // for(int x : v)  cout<<x<<" ";
    // cout<<endl;
    // string s;
    // cin>>s;
//     getline(cin, s, '%');
//     cout<<s<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     long long cnt = 0; 
//     while(n > 0){
//         cnt += n/5; 
//         n /= 5; 
//     }
//     cout<<cnt<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    int x, y;
    int result;
 
    x = 10;
    y = 8;
 
    // modulo for floating point values
    result = x % y;
    cout << result;
 
    return 0;
}